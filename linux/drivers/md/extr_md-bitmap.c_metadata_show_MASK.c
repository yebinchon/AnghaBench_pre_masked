
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ external; } ;
struct mddev {TYPE_1__ bitmap_info; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct mddev*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct mddev *VAR_0, char *VAR_1)
{
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_1, "clustered\n");
 return FUNC_1(VAR_1, "%s\n", (VAR_0->bitmap_info.external
          ? "external" : "internal"));
}
