
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_device {size_t num_crtc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6[2];
 u32 VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_crtc; VAR_7++) {
  if (FUNC_0(VAR_1 + VAR_3[VAR_7]) & VAR_0) {
   VAR_6[VAR_7] = FUNC_0(VAR_2 + VAR_3[VAR_7]);
   VAR_5 |= (1 << VAR_7);
  }
 }

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_4->num_crtc; VAR_7++) {
   if (VAR_5 & (1 << VAR_7)) {
    VAR_9 = FUNC_0(VAR_2 + VAR_3[VAR_7]);
    if (VAR_9 != VAR_6[VAR_7])
     VAR_5 &= ~(1 << VAR_7);
   }
  }
  if (VAR_5 == 0)
   return 0;
  FUNC_1(100);
 }

 return 1;
}
