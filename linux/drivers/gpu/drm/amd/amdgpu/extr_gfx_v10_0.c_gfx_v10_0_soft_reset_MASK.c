
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int VAR_15 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(void *VAR_22)
{
 u32 VAR_23 = 0;
 u32 VAR_24;
 struct amdgpu_device *VAR_25 = (struct amdgpu_device *)VAR_22;


 VAR_24 = FUNC_2(VAR_0, 0, VAR_20);
 if (VAR_24 & (VAR_10 | VAR_11 |
     VAR_3 | VAR_13 |
     VAR_14 | VAR_7 |
     VAR_4 | VAR_8 |
     VAR_12 | VAR_9
     | VAR_3)) {
  VAR_23 = FUNC_1(VAR_23,
      VAR_1, VAR_16,
      1);
  VAR_23 = FUNC_1(VAR_23,
      VAR_1, VAR_17,
      1);
 }

 if (VAR_24 & (VAR_5 | VAR_6)) {
  VAR_23 = FUNC_1(VAR_23,
      VAR_1, VAR_16,
      1);
 }


 VAR_24 = FUNC_2(VAR_0, 0, VAR_21);
 if (FUNC_0(VAR_24, VAR_2, VAR_15))
  VAR_23 = FUNC_1(VAR_23,
      VAR_1, VAR_18,
      1);

 if (VAR_23) {

  FUNC_7(VAR_25);


  FUNC_6(VAR_25, 0);


  FUNC_5(VAR_25, 0);

  if (VAR_23) {
   VAR_24 = FUNC_2(VAR_0, 0, VAR_19);
   VAR_24 |= VAR_23;
   FUNC_4(VAR_25->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_24);
   FUNC_3(VAR_0, 0, VAR_19, VAR_24);
   VAR_24 = FUNC_2(VAR_0, 0, VAR_19);

   FUNC_8(50);

   VAR_24 &= ~VAR_23;
   FUNC_3(VAR_0, 0, VAR_19, VAR_24);
   VAR_24 = FUNC_2(VAR_0, 0, VAR_19);
  }


  FUNC_8(50);
 }
 return 0;
}
