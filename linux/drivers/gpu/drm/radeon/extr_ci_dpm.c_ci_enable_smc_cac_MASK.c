
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {int cac_enabled; scalar_t__ caps_cac; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_4, bool VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_0(VAR_4);
 PPSMC_Result VAR_7;
 int VAR_8 = 0;

 if (VAR_6->caps_cac) {
  if (VAR_5) {
   VAR_7 = FUNC_1(VAR_4, VAR_2);
   if (VAR_7 != VAR_3) {
    VAR_8 = -VAR_0;
    VAR_6->cac_enabled = 0;
   } else {
    VAR_6->cac_enabled = 1;
   }
  } else if (VAR_6->cac_enabled) {
   FUNC_1(VAR_4, VAR_1);
   VAR_6->cac_enabled = 0;
  }
 }

 return VAR_8;
}
