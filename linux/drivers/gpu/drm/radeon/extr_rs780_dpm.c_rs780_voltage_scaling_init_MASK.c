
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {struct drm_device* ddev; } ;
struct igp_power_info {int max_voltage; int min_voltage; scalar_t__ invert_pwm_required; int num_of_cycles_in_period; scalar_t__ pwm_voltage_control; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_10 (int ) ;
 int VAR_31 ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,int ) ;
 struct igp_power_info* FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_15(struct radeon_device *VAR_32)
{
 struct igp_power_info *VAR_33 = FUNC_13(VAR_32);
 struct drm_device *VAR_34 = VAR_32->ddev;
 u32 VAR_35[3];
 u32 VAR_36[4];

 if (VAR_34->pdev->device == 0x9614) {
  VAR_35[0] = VAR_14;
  VAR_35[1] = VAR_15;
  VAR_35[2] = VAR_16;
 } else if ((VAR_34->pdev->device == 0x9714) ||
     (VAR_34->pdev->device == 0x9715)) {
  VAR_35[0] = VAR_28;
  VAR_35[1] = VAR_29;
  VAR_35[2] = VAR_30;
 } else {
  VAR_35[0] = VAR_19;
  VAR_35[1] = VAR_20;
  VAR_35[2] = VAR_21;
 }

 if (VAR_33->pwm_voltage_control) {
  VAR_36[0] = VAR_33->min_voltage;
  VAR_36[1] = VAR_33->min_voltage;
  VAR_36[2] = VAR_33->max_voltage;
  VAR_36[3] = VAR_33->max_voltage;
 } else {
  VAR_36[0] = VAR_33->invert_pwm_required ?
   VAR_25 : VAR_22;
  VAR_36[1] = VAR_33->invert_pwm_required ?
   VAR_24 : VAR_23;
  VAR_36[2] = VAR_33->invert_pwm_required ?
   VAR_23 : VAR_24;
  VAR_36[3] = VAR_33->invert_pwm_required ?
   VAR_22 : VAR_25;
 }

 FUNC_12(VAR_1,
   FUNC_10(VAR_33->max_voltage),
   ~VAR_31);

 FUNC_12(VAR_1,
   FUNC_2(VAR_33->num_of_cycles_in_period),
   ~VAR_12);

 FUNC_12(VAR_1, VAR_0,
   ~VAR_0);

 if (VAR_33->invert_pwm_required)
  FUNC_12(VAR_1, VAR_11, ~VAR_11);
 else
  FUNC_12(VAR_1, 0, ~VAR_11);

 FUNC_14(VAR_32, 1);

 FUNC_11(VAR_2,
        (FUNC_1(VAR_33->min_voltage) |
  FUNC_0(VAR_33->max_voltage)));

 FUNC_11(VAR_9, VAR_26);
 FUNC_11(VAR_10, VAR_27);
 FUNC_11(VAR_3, VAR_17);
 FUNC_11(VAR_4, VAR_18);

 FUNC_12(VAR_5,
   FUNC_4(VAR_35[0]),
   ~VAR_13);

 FUNC_11(VAR_6,
        (FUNC_6(VAR_35[1]) |
  FUNC_8(VAR_35[2])));

 FUNC_11(VAR_7,
        (FUNC_3(VAR_36[1]) |
  FUNC_5(VAR_36[2])));
 FUNC_11(VAR_8,
        (FUNC_7(VAR_36[1]) |
  FUNC_9(VAR_36[2])));
}
