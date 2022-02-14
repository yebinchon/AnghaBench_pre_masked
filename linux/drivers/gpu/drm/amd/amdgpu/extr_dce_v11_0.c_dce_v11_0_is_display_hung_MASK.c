
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int ,int ) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct amdgpu_device *VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7[6];
 u32 VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_5->mode_info.num_crtc; VAR_8++) {
  VAR_10 = FUNC_1(VAR_3 + VAR_2[VAR_8]);
  if (FUNC_0(VAR_10, VAR_0, VAR_1)) {
   VAR_7[VAR_8] = FUNC_1(VAR_4 + VAR_2[VAR_8]);
   VAR_6 |= (1 << VAR_8);
  }
 }

 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  for (VAR_8 = 0; VAR_8 < VAR_5->mode_info.num_crtc; VAR_8++) {
   if (VAR_6 & (1 << VAR_8)) {
    VAR_10 = FUNC_1(VAR_4 + VAR_2[VAR_8]);
    if (VAR_10 != VAR_7[VAR_8])
     VAR_6 &= ~(1 << VAR_8);
   }
  }
  if (VAR_6 == 0)
   return 0;
  FUNC_2(100);
 }

 return 1;
}
