
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;

 u32 VAR_6 = 0;
 u32 VAR_7 = FUNC_0(VAR_3);

 if (VAR_7 & VAR_1)
  VAR_6 |= VAR_0;

 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_2);
  VAR_7 |= VAR_6;
  FUNC_2(VAR_5->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_7);
  FUNC_1(VAR_2, VAR_7);
  VAR_7 = FUNC_0(VAR_2);

  FUNC_3(50);

  VAR_7 &= ~VAR_6;
  FUNC_1(VAR_2, VAR_7);
  VAR_7 = FUNC_0(VAR_2);


  FUNC_3(50);
 }

 return 0;
}
