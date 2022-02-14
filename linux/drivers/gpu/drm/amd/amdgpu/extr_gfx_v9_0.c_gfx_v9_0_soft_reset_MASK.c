
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
struct amdgpu_device {scalar_t__ asic_type; int dev; TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* stop ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int VAR_18 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(void *VAR_25)
{
 u32 VAR_26 = 0;
 u32 VAR_27;
 struct amdgpu_device *VAR_28 = (struct amdgpu_device *)VAR_25;


 VAR_27 = FUNC_2(VAR_1, 0, VAR_23);
 if (VAR_27 & (VAR_12 | VAR_13 |
     VAR_4 | VAR_15 |
     VAR_16 | VAR_17 |
     VAR_8 | VAR_5 |
     VAR_9 | VAR_14 |
     VAR_10 | VAR_11)) {
  VAR_26 = FUNC_1(VAR_26,
      VAR_2, VAR_19, 1);
  VAR_26 = FUNC_1(VAR_26,
      VAR_2, VAR_20, 1);
 }

 if (VAR_27 & (VAR_6 | VAR_7)) {
  VAR_26 = FUNC_1(VAR_26,
      VAR_2, VAR_19, 1);
 }


 VAR_27 = FUNC_2(VAR_1, 0, VAR_24);
 if (FUNC_0(VAR_27, VAR_3, VAR_18))
  VAR_26 = FUNC_1(VAR_26,
      VAR_2, VAR_21, 1);


 if (VAR_26) {

  VAR_28->gfx.rlc.funcs->stop(VAR_28);

  if (VAR_28->asic_type != VAR_0)

   FUNC_6(VAR_28, 0);


  FUNC_5(VAR_28, 0);

  if (VAR_26) {
   VAR_27 = FUNC_2(VAR_1, 0, VAR_22);
   VAR_27 |= VAR_26;
   FUNC_4(VAR_28->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_27);
   FUNC_3(VAR_1, 0, VAR_22, VAR_27);
   VAR_27 = FUNC_2(VAR_1, 0, VAR_22);

   FUNC_8(50);

   VAR_27 &= ~VAR_26;
   FUNC_3(VAR_1, 0, VAR_22, VAR_27);
   VAR_27 = FUNC_2(VAR_1, 0, VAR_22);
  }


  FUNC_8(50);
 }
 return 0;
}
