
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {scalar_t__ max_voltage; scalar_t__ min_voltage; } ;
struct igp_power_info {int max_voltage; } ;
typedef enum rs780_vddc_level { ____Placeholder_rs780_vddc_level } rs780_vddc_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 struct igp_power_info* FUNC_2 (struct radeon_device*) ;
 struct igp_ps* FUNC_3 (struct radeon_ps*) ;
 int FUNC_4 (struct radeon_device*,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_8,
      struct radeon_ps *VAR_9)
{
 struct igp_ps *VAR_10 = FUNC_3(VAR_9);
 struct igp_power_info *VAR_11 = FUNC_2(VAR_8);
 enum rs780_vddc_level VAR_12, VAR_13;

 FUNC_5(100);

 if ((VAR_10->max_voltage == VAR_5) &&
     (VAR_10->min_voltage == VAR_5))
  return;

 VAR_12 = FUNC_4(VAR_8,
           VAR_10->max_voltage);
 VAR_13 = FUNC_4(VAR_8,
          VAR_10->min_voltage);

 FUNC_1(VAR_3, VAR_6, ~VAR_6);

 FUNC_5(1);
 if (VAR_12 > VAR_13) {
  FUNC_1(VAR_2,
    VAR_4, ~VAR_4);

  FUNC_1(VAR_1, 0, ~VAR_0);
 } else if (VAR_12 == VAR_13) {
  if (VAR_11->max_voltage != VAR_12) {
   FUNC_1(VAR_1,
     FUNC_0(VAR_12),
     ~VAR_7);

   FUNC_1(VAR_1,
     VAR_0,
     ~VAR_0);
  }
 }

 FUNC_1(VAR_3, 0, ~VAR_6);
}
