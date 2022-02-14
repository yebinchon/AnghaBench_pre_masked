
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int dummy; } ;
struct TYPE_2__ {int (* clkdm_clear_all_wkdeps ) (struct clockdomain*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct clockdomain*) ;

int FUNC_1(struct clockdomain *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 if (!VAR_1 || !VAR_1->clkdm_clear_all_wkdeps)
  return -VAR_0;

 return VAR_1->clkdm_clear_all_wkdeps(VAR_2);
}
