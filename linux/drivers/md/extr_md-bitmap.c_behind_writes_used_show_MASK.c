
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int lock; TYPE_1__* bitmap; } ;
typedef int ssize_t ;
struct TYPE_2__ {int behind_writes_used; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_3(struct mddev *VAR_0, char *VAR_1)
{
 ssize_t VAR_2;
 FUNC_0(&VAR_0->lock);
 if (VAR_0->bitmap == ((void*)0))
  VAR_2 = FUNC_2(VAR_1, "0\n");
 else
  VAR_2 = FUNC_2(VAR_1, "%lu\n",
         VAR_0->bitmap->behind_writes_used);
 FUNC_1(&VAR_0->lock);
 return VAR_2;
}
