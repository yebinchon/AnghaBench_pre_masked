
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ light_sleep; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 struct evergreen_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_18,
         bool VAR_19)
{
 struct evergreen_power_info *VAR_20 = FUNC_4(VAR_18);

 if (VAR_19) {
  if (VAR_20->light_sleep) {
   FUNC_1(VAR_16, 0xC0000000);

   FUNC_2(VAR_0, 0xFFFFFFFF);
   FUNC_2(VAR_1, 0xFFFFFFFF);
   FUNC_2(VAR_4, 0xFFFFFFFF);
   FUNC_2(VAR_5, 0xFFFFFFFF);
   FUNC_2(VAR_6, 0xFFFFFFFF);
   FUNC_2(VAR_7, 0xFFFFFFFF);
   FUNC_2(VAR_8, 0xFFFFFFFF);
   FUNC_2(VAR_9, 0xFFFFFFFF);
   FUNC_2(VAR_10, 0xFFFFFFFF);
   FUNC_2(VAR_11, 0xFFFFFFFF);
   FUNC_2(VAR_2, 0xFFFFFFFF);
   FUNC_2(VAR_3, 0xFFFFFFFF);

   FUNC_3(VAR_17, VAR_13, ~VAR_13);
  }
  FUNC_3(VAR_17, VAR_12, ~VAR_12);
 } else {
  FUNC_3(VAR_17, 0, ~VAR_12);
  FUNC_3(VAR_17, VAR_15, ~VAR_15);
  FUNC_3(VAR_17, 0, ~VAR_15);
  FUNC_0(VAR_14);

  if (VAR_20->light_sleep) {
   FUNC_3(VAR_17, 0, ~VAR_13);

   FUNC_1(VAR_16, 0xC0000000);

   FUNC_2(VAR_0, 0);
   FUNC_2(VAR_1, 0);
   FUNC_2(VAR_4, 0);
   FUNC_2(VAR_5, 0);
   FUNC_2(VAR_6, 0);
   FUNC_2(VAR_7, 0);
   FUNC_2(VAR_8, 0);
   FUNC_2(VAR_9, 0);
   FUNC_2(VAR_10, 0);
   FUNC_2(VAR_11, 0);
   FUNC_2(VAR_2, 0);
   FUNC_2(VAR_3, 0);
  }
 }
}
