
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_10)
{
 u32 VAR_11 = 0;
 struct amdgpu_device *VAR_12 = (struct amdgpu_device *)VAR_10;
 u32 VAR_13 = FUNC_0(VAR_9);

 if (VAR_13 & VAR_6) {

  VAR_13 = FUNC_0(VAR_7 + VAR_1);
  VAR_13 |= VAR_0;
  FUNC_1(VAR_7 + VAR_1, VAR_13);
  VAR_11 |= VAR_4;
 }
 if (VAR_13 & VAR_5) {

  VAR_13 = FUNC_0(VAR_7 + VAR_2);
  VAR_13 |= VAR_0;
  FUNC_1(VAR_7 + VAR_2, VAR_13);
  VAR_11 |= VAR_3;
 }

 if (VAR_11) {
  VAR_13 = FUNC_0(VAR_8);
  VAR_13 |= VAR_11;
  FUNC_2(VAR_12->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_13);
  FUNC_1(VAR_8, VAR_13);
  VAR_13 = FUNC_0(VAR_8);

  FUNC_3(50);

  VAR_13 &= ~VAR_11;
  FUNC_1(VAR_8, VAR_13);
  VAR_13 = FUNC_0(VAR_8);


  FUNC_3(50);
 }

 return 0;
}
