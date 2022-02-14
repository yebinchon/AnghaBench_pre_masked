
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {scalar_t__ mgcgtssm; } ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_8,
      bool VAR_9)
{
 struct rv7xx_power_info *VAR_10 = FUNC_1(VAR_8);

 if (VAR_9) {
  u32 VAR_11;

  if (VAR_8->family == VAR_3)
   VAR_11 = VAR_5;
  else
   VAR_11 = VAR_7;

  FUNC_0(VAR_1, VAR_11);
  FUNC_0(VAR_2, (VAR_6 & 0xFFFFCFFF));

  if (VAR_10->mgcgtssm)
   FUNC_0(VAR_0, VAR_4);
 } else {
  FUNC_0(VAR_1, 0xFFFFFFFF);
  FUNC_0(VAR_2, 0xFFFFCFFF);
 }
}
