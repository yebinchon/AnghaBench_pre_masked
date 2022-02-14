
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powerdomain {int dummy; } ;
struct TYPE_2__ {struct powerdomain* ptr; } ;
struct clockdomain {TYPE_1__ pwrdm; } ;



struct powerdomain *FUNC_0(struct clockdomain *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return VAR_0->pwrdm.ptr;
}
