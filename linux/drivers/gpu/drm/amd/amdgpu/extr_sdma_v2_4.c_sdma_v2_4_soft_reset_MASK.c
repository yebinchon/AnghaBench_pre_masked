
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_11)
{
 u32 VAR_12 = 0;
 struct amdgpu_device *VAR_13 = (struct amdgpu_device *)VAR_11;
 u32 VAR_14 = FUNC_1(VAR_10);

 if (VAR_14 & VAR_7) {

  VAR_14 = FUNC_1(VAR_8 + VAR_2);
  VAR_14 = FUNC_0(VAR_14, VAR_1, VAR_0, 0);
  FUNC_2(VAR_8 + VAR_2, VAR_14);
  VAR_12 |= VAR_5;
 }
 if (VAR_14 & VAR_6) {

  VAR_14 = FUNC_1(VAR_8 + VAR_3);
  VAR_14 = FUNC_0(VAR_14, VAR_1, VAR_0, 0);
  FUNC_2(VAR_8 + VAR_3, VAR_14);
  VAR_12 |= VAR_4;
 }

 if (VAR_12) {
  VAR_14 = FUNC_1(VAR_9);
  VAR_14 |= VAR_12;
  FUNC_3(VAR_13->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_14);
  FUNC_2(VAR_9, VAR_14);
  VAR_14 = FUNC_1(VAR_9);

  FUNC_4(50);

  VAR_14 &= ~VAR_12;
  FUNC_2(VAR_9, VAR_14);
  VAR_14 = FUNC_1(VAR_9);


  FUNC_4(50);
 }

 return 0;
}
