
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ignore_children; int child_count; int usage_count; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_0)
{
 return FUNC_0(&VAR_0->power.usage_count) <= 1 &&
  (FUNC_0(&VAR_0->power.child_count) == 0 ||
   VAR_0->power.ignore_children);
}
