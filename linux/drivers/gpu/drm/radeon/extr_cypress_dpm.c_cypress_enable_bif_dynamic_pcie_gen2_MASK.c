
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {int boot_in_gen2; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 struct rv7xx_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_8,
       bool VAR_9)
{
 struct rv7xx_power_info *VAR_10 = FUNC_6(VAR_8);
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_3(VAR_7);
 if (VAR_9) {
  if ((VAR_11 & VAR_5) &&
      (VAR_11 & VAR_6)) {
   if (!VAR_10->boot_in_gen2) {
    VAR_12 = FUNC_2(VAR_0) & ~VAR_1;
    VAR_12 |= FUNC_0(0xd);
    FUNC_4(VAR_0, VAR_12);

    VAR_11 &= ~VAR_4;
    VAR_11 |= FUNC_1(1);
    VAR_11 |= VAR_3;

    VAR_11 |= VAR_2;
    FUNC_5(VAR_7, VAR_11);
    FUNC_7(10);
    VAR_11 &= ~VAR_2;
    FUNC_5(VAR_7, VAR_11);
   }
  }
 } else {
  if (!VAR_10->boot_in_gen2) {
   VAR_11 &= ~VAR_4;
   VAR_11 &= ~VAR_3;
  }
  if ((VAR_11 & VAR_5) ||
      (VAR_11 & VAR_6))
   FUNC_5(VAR_7, VAR_11);
 }
}
