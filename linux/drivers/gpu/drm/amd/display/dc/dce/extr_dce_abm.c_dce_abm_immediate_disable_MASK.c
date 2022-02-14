
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce_abm {int dummy; } ;
struct TYPE_2__ {int LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV; void* BL_PWM_PERIOD_CNTL; void* BL_PWM_CNTL2; void* BL_PWM_CNTL; } ;
struct abm {int dmcu_is_running; TYPE_1__ stored_backlight_registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *) ;
 void* FUNC_1 (int ) ;
 struct dce_abm* FUNC_2 (struct abm*) ;
 int FUNC_3 (struct abm*,int ) ;

__attribute__((used)) static bool FUNC_4(struct abm *VAR_6)
{
 struct dce_abm *VAR_7 = FUNC_2(VAR_6);

 if (VAR_6->dmcu_is_running == 0)
  return 1;

 FUNC_3(VAR_6, VAR_5);

 VAR_6->stored_backlight_registers.BL_PWM_CNTL =
  FUNC_1(VAR_0);
 VAR_6->stored_backlight_registers.BL_PWM_CNTL2 =
  FUNC_1(VAR_1);
 VAR_6->stored_backlight_registers.BL_PWM_PERIOD_CNTL =
  FUNC_1(VAR_2);

 FUNC_0(VAR_4, VAR_3,
  &VAR_6->stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV);
 return 1;
}
