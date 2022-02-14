
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6[6];
 u32 VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_4->mode_info.num_crtc; VAR_7++) {
  if (FUNC_0(VAR_2 + VAR_1[VAR_7]) & VAR_0) {
   VAR_6[VAR_7] = FUNC_0(VAR_3 + VAR_1[VAR_7]);
   VAR_5 |= (1 << VAR_7);
  }
 }

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_4->mode_info.num_crtc; VAR_7++) {
   if (VAR_5 & (1 << VAR_7)) {
    VAR_9 = FUNC_0(VAR_3 + VAR_1[VAR_7]);
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
