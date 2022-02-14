
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 u32 VAR_3 = 0, VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_2;

 if (FUNC_2(VAR_5))
  VAR_3 |= VAR_0;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_1);
  VAR_4 |= VAR_3;
  FUNC_3(VAR_5->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_4);
  FUNC_1(VAR_1, VAR_4);
  VAR_4 = FUNC_0(VAR_1);

  FUNC_4(50);

  VAR_4 &= ~VAR_3;
  FUNC_1(VAR_1, VAR_4);
  VAR_4 = FUNC_0(VAR_1);


  FUNC_4(50);
 }
 return 0;
}
