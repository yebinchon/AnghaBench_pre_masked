
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_platform_data {int (* clkdm_allow_idle ) (int ,int *) ;} ;
struct sysc {int cookie; int dev; scalar_t__ legacy_mode; } ;


 struct ti_sysc_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct sysc *VAR_0)
{
 struct ti_sysc_platform_data *VAR_1;

 if (VAR_0->legacy_mode)
  return;

 VAR_1 = FUNC_0(VAR_0->dev);
 if (VAR_1 && VAR_1->clkdm_allow_idle)
  VAR_1->clkdm_allow_idle(VAR_0->dev, &VAR_0->cookie);
}
