
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_5)
{
 u32 VAR_6 = 0;
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_5;
 u32 VAR_8 = FUNC_1(VAR_4);

 if (VAR_8 & VAR_2)
  VAR_6 = FUNC_0(VAR_6, VAR_1,
      VAR_0, 1);

 if (VAR_6) {
  VAR_8 = FUNC_1(VAR_3);
  VAR_8 |= VAR_6;
  FUNC_3(VAR_7->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_8);
  FUNC_2(VAR_3, VAR_8);
  VAR_8 = FUNC_1(VAR_3);

  FUNC_4(50);

  VAR_8 &= ~VAR_6;
  FUNC_2(VAR_3, VAR_8);
  VAR_8 = FUNC_1(VAR_3);


  FUNC_4(50);
 }

 return 0;
}
