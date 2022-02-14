
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ caps_sclk_ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_4,
          bool VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5) {
  if (VAR_6->caps_sclk_ds) {
   if (FUNC_1(VAR_4, VAR_2) != VAR_3)
    return -VAR_0;
  } else {
   if (FUNC_1(VAR_4, VAR_1) != VAR_3)
    return -VAR_0;
  }
 } else {
  if (VAR_6->caps_sclk_ds) {
   if (FUNC_1(VAR_4, VAR_1) != VAR_3)
    return -VAR_0;
  }
 }

 return 0;
}
