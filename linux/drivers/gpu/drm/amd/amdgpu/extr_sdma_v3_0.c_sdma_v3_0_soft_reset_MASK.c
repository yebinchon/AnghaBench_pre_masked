
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int srbm_soft_reset; } ;
struct amdgpu_device {int dev; TYPE_1__ sdma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 u32 VAR_3 = 0;
 u32 VAR_4;

 if (!VAR_2->sdma.srbm_soft_reset)
  return 0;

 VAR_3 = VAR_2->sdma.srbm_soft_reset;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_0);
  VAR_4 |= VAR_3;
  FUNC_2(VAR_2->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_4);
  FUNC_1(VAR_0, VAR_4);
  VAR_4 = FUNC_0(VAR_0);

  FUNC_3(50);

  VAR_4 &= ~VAR_3;
  FUNC_1(VAR_0, VAR_4);
  VAR_4 = FUNC_0(VAR_0);


  FUNC_3(50);
 }

 return 0;
}
