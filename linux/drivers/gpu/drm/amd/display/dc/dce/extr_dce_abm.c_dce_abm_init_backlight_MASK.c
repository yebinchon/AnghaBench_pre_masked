
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dce_abm {int dummy; } ;
struct TYPE_2__ {scalar_t__ BL_PWM_CNTL; int BL_PWM_CNTL2; int BL_PWM_PERIOD_CNTL; int LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV; } ;
struct abm {TYPE_1__ stored_backlight_registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 struct dce_abm* FUNC_4 (struct abm*) ;

__attribute__((used)) static bool FUNC_5(struct abm *VAR_10)
{
 struct dce_abm *VAR_11 = FUNC_4(VAR_10);
 uint32_t VAR_12;





 FUNC_0(VAR_3, VAR_2, &VAR_12);
 if (VAR_12 == 0 || VAR_12 == 1) {
  if (VAR_10->stored_backlight_registers.BL_PWM_CNTL != 0) {
   FUNC_3(VAR_3,
    VAR_10->stored_backlight_registers.BL_PWM_CNTL);
   FUNC_3(VAR_4,
    VAR_10->stored_backlight_registers.BL_PWM_CNTL2);
   FUNC_3(VAR_7,
    VAR_10->stored_backlight_registers.BL_PWM_PERIOD_CNTL);
   FUNC_2(VAR_9,
    VAR_8,
    VAR_10->stored_backlight_registers.
    LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV);
  } else {



   FUNC_3(VAR_3, 0xC000FA00);
   FUNC_3(VAR_7, 0x000C0FA0);
  }
 } else {
  VAR_10->stored_backlight_registers.BL_PWM_CNTL =
    FUNC_1(VAR_3);
  VAR_10->stored_backlight_registers.BL_PWM_CNTL2 =
    FUNC_1(VAR_4);
  VAR_10->stored_backlight_registers.BL_PWM_PERIOD_CNTL =
    FUNC_1(VAR_7);

  FUNC_0(VAR_9, VAR_8,
    &VAR_10->stored_backlight_registers.
    LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV);
 }




 VAR_12 = FUNC_1(VAR_1);
 VAR_12 |= VAR_0;
 FUNC_3(VAR_1, VAR_12);


 FUNC_2(VAR_3, VAR_5, 1);


 FUNC_2(VAR_6,
   VAR_6, 0);

 return 1;
}
