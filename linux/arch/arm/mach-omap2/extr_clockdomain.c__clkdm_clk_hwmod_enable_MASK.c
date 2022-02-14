
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
struct clockdomain {int usecount; int name; TYPE_1__ pwrdm; } ;
struct TYPE_4__ {int (* clkdm_clk_enable ) (struct clockdomain*) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct clockdomain*) ;

__attribute__((used)) static int FUNC_5(struct clockdomain *VAR_3)
{
 if (!VAR_3 || !VAR_1 || !VAR_1->clkdm_clk_enable)
  return -VAR_0;

 FUNC_1(VAR_3->pwrdm.ptr);






 VAR_3->usecount++;
 if (VAR_3->usecount > 1 && VAR_2) {
  FUNC_3(VAR_3->pwrdm.ptr);
  return 0;
 }

 VAR_1->clkdm_clk_enable(VAR_3);
 FUNC_2(VAR_3->pwrdm.ptr);
 FUNC_3(VAR_3->pwrdm.ptr);

 FUNC_0("clockdomain: %s: enabled\n", VAR_3->name);

 return 0;
}
