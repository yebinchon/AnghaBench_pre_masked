
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__ rlc; } ;
struct amdgpu_device {int dev; TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* stop ) (struct amdgpu_device*) ;} ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void *VAR_32)
{
 u32 VAR_33 = 0, VAR_34 = 0;
 u32 VAR_35;
 struct amdgpu_device *VAR_36 = (struct amdgpu_device *)VAR_32;


 VAR_35 = FUNC_0(VAR_28);
 if (VAR_35 & (VAR_17 | VAR_18 |
     VAR_9 | VAR_20 |
     VAR_21 | VAR_22 |
     VAR_13 | VAR_10 |
     VAR_14 | VAR_19 |
     VAR_15 | VAR_16))
  VAR_33 |= VAR_5 |
   VAR_6;

 if (VAR_35 & (VAR_11 | VAR_12)) {
  VAR_33 |= VAR_5;
  VAR_34 |= VAR_23;
 }


 VAR_35 = FUNC_0(VAR_29);
 if (VAR_35 & VAR_8)
  VAR_33 |= VAR_7;


 VAR_35 = FUNC_0(VAR_31);
 if (VAR_35 & VAR_24)
  VAR_34 |= VAR_23;

 if (VAR_33 || VAR_34) {

  FUNC_3(VAR_36);
  FUNC_4(VAR_36, 0);


  VAR_36->gfx.rlc.funcs->stop(VAR_36);


  FUNC_1(VAR_26, VAR_3 | VAR_4 | VAR_2);


  FUNC_1(VAR_25, VAR_0 | VAR_1);

  if (VAR_33) {
   VAR_35 = FUNC_0(VAR_27);
   VAR_35 |= VAR_33;
   FUNC_2(VAR_36->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_35);
   FUNC_1(VAR_27, VAR_35);
   VAR_35 = FUNC_0(VAR_27);

   FUNC_6(50);

   VAR_35 &= ~VAR_33;
   FUNC_1(VAR_27, VAR_35);
   VAR_35 = FUNC_0(VAR_27);
  }

  if (VAR_34) {
   VAR_35 = FUNC_0(VAR_30);
   VAR_35 |= VAR_34;
   FUNC_2(VAR_36->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_35);
   FUNC_1(VAR_30, VAR_35);
   VAR_35 = FUNC_0(VAR_30);

   FUNC_6(50);

   VAR_35 &= ~VAR_34;
   FUNC_1(VAR_30, VAR_35);
   VAR_35 = FUNC_0(VAR_30);
  }

  FUNC_6(50);
 }
 return 0;
}
