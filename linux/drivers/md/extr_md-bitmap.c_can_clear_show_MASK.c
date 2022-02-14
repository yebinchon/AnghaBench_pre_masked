
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int lock; TYPE_1__* bitmap; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ need_sync; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct mddev *VAR_0, char *VAR_1)
{
 int VAR_2;
 FUNC_0(&VAR_0->lock);
 if (VAR_0->bitmap)
  VAR_2 = FUNC_2(VAR_1, "%s\n", (VAR_0->bitmap->need_sync ?
          "false" : "true"));
 else
  VAR_2 = FUNC_2(VAR_1, "\n");
 FUNC_1(&VAR_0->lock);
 return VAR_2;
}
