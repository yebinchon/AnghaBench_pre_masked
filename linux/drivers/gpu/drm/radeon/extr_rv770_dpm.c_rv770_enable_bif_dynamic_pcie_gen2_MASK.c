
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
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5,
            bool VAR_6)
{
 struct rv7xx_power_info *VAR_7 = FUNC_3(VAR_5);
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_6) {
  VAR_8 &= ~VAR_1;
  VAR_8 |= FUNC_0(1);
  VAR_8 |= VAR_0;
 } else {
  if (!VAR_7->boot_in_gen2) {
   VAR_8 &= ~VAR_1;
   VAR_8 &= ~VAR_0;
  }
 }
 if ((VAR_8 & VAR_2) ||
     (VAR_8 & VAR_3))
  FUNC_2(VAR_4, VAR_8);

}
