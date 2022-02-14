
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {scalar_t__ mgcgtssm; } ;
struct radeon_device {scalar_t__ family; } ;
struct evergreen_power_info {scalar_t__ mcls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct evergreen_power_info* FUNC_3 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_24,
        bool VAR_25)
{
 struct rv7xx_power_info *VAR_26 = FUNC_4(VAR_24);
 struct evergreen_power_info *VAR_27 = FUNC_3(VAR_24);

 if (VAR_25) {
  u32 VAR_28;

  if (VAR_24->family == VAR_6)
   VAR_28 = VAR_0;
  else if (VAR_24->family == VAR_7)
   VAR_28 = VAR_22;
  else
   VAR_28 = VAR_8;

  FUNC_0(VAR_13, 0xC0000000);

  FUNC_1(VAR_2, VAR_9);
  FUNC_1(VAR_3, VAR_10 & 0xFFFFCFFF);
  FUNC_1(VAR_4, VAR_11);
  FUNC_1(VAR_5, VAR_12);

  if (VAR_26->mgcgtssm)
   FUNC_0(VAR_1, VAR_28);

  if (VAR_27->mcls) {
   FUNC_2(VAR_14, VAR_21, ~VAR_21);
   FUNC_2(VAR_16, VAR_21, ~VAR_21);
   FUNC_2(VAR_15, VAR_21, ~VAR_21);
   FUNC_2(VAR_17, VAR_21, ~VAR_21);
   FUNC_2(VAR_19, VAR_21, ~VAR_21);
   FUNC_2(VAR_18, VAR_21, ~VAR_21);
   FUNC_2(VAR_20, VAR_21, ~VAR_21);
   FUNC_2(VAR_23, VAR_21, ~VAR_21);
  }
 } else {
  FUNC_0(VAR_13, 0xC0000000);

  FUNC_1(VAR_2, 0xFFFFFFFF);
  FUNC_1(VAR_3, 0xFFFFFFFF);
  FUNC_1(VAR_4, 0xFFFFFFFF);
  FUNC_1(VAR_5, 0xFFFFFFFF);

  if (VAR_26->mgcgtssm)
   FUNC_0(VAR_1, 0x81f44bc0);
 }
}
