
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_1,
    u32 VAR_2, u32 VAR_3,
    u32 VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   FUNC_3(VAR_1, VAR_5, VAR_6);
   VAR_8 = FUNC_0(VAR_0);
   VAR_10 = FUNC_2(VAR_1, VAR_4);

   VAR_9 = 1;
   for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
    VAR_9 <<= VAR_7;
    if (VAR_10 & VAR_9) {
     VAR_8 &= ~VAR_9;
     FUNC_1(VAR_0, VAR_8);
     break;
    }
   }
  }
 }
 FUNC_3(VAR_1, 0xffffffff, 0xffffffff);
}
