
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int srbm_soft_reset; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(void *VAR_5)
{
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_5;
 u32 VAR_7 = 0;
 u32 VAR_8 = FUNC_0(VAR_4);

 if ((VAR_8 & VAR_3) ||
     (VAR_8 & VAR_2)) {
  VAR_7 |= VAR_1;
  VAR_7 |= VAR_0;
 }

 if (VAR_7) {
  VAR_6->sdma.srbm_soft_reset = VAR_7;
  return 1;
 } else {
  VAR_6->sdma.srbm_soft_reset = 0;
  return 0;
 }
}
