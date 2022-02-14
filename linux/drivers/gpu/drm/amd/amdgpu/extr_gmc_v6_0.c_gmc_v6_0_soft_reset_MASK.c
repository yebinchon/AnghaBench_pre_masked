
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int flags; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(void *VAR_11)
{
 struct amdgpu_device *VAR_12 = (struct amdgpu_device *)VAR_11;
 u32 VAR_13 = 0;
 u32 VAR_14 = FUNC_1(VAR_10);

 if (VAR_14 & VAR_8)
  VAR_13 = FUNC_0(VAR_13,
      VAR_3, VAR_2, 1);

 if (VAR_14 & (VAR_4 | VAR_5 |
     VAR_6 | VAR_7)) {
  if (!(VAR_12->flags & VAR_0))
   VAR_13 = FUNC_0(VAR_13,
       VAR_3, VAR_1, 1);
 }

 if (VAR_13) {
  FUNC_6(VAR_12);
  if (FUNC_7(VAR_12)) {
   FUNC_4(VAR_12->dev, "Wait for GMC idle timed out !\n");
  }


  VAR_14 = FUNC_1(VAR_9);
  VAR_14 |= VAR_13;
  FUNC_3(VAR_12->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_14);
  FUNC_2(VAR_9, VAR_14);
  VAR_14 = FUNC_1(VAR_9);

  FUNC_8(50);

  VAR_14 &= ~VAR_13;
  FUNC_2(VAR_9, VAR_14);
  VAR_14 = FUNC_1(VAR_9);

  FUNC_8(50);

  FUNC_5(VAR_12);
  FUNC_8(50);
 }

 return 0;
}
