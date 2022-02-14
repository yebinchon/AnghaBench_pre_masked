
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int load_type; } ;
struct TYPE_10__ {int * ops; } ;
struct TYPE_8__ {int supported; } ;
struct TYPE_9__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {int asic_type; int flags; int enable_virtual_display; TYPE_4__ firmware; TYPE_3__ virt; TYPE_5__* nbio_funcs; int rev_id; int * df_funcs; TYPE_2__ gmc; } ;
struct TYPE_12__ {int (* detect_hw_virt ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int) ;
 TYPE_5__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_5__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int VAR_27 ;

int FUNC_10(struct amdgpu_device *VAR_28)
{

 switch (VAR_28->asic_type) {
 case 130:
 case 129:
 case 132:
 case 131:
  FUNC_8(VAR_28);
  break;
 case 128:
  FUNC_9(VAR_28);
  break;
 case 133:
  FUNC_3(VAR_28);
  break;
 default:
  return -VAR_2;
 }

 if (VAR_28->asic_type == 128 || VAR_28->asic_type == 133)
  VAR_28->gmc.xgmi.supported = 1;

 if (VAR_28->flags & VAR_1)
  VAR_28->nbio_funcs = &VAR_10;
 else if (VAR_28->asic_type == 128 ||
  VAR_28->asic_type == 133)
  VAR_28->nbio_funcs = &VAR_11;
 else
  VAR_28->nbio_funcs = &VAR_9;

 if (VAR_28->asic_type == 128 || VAR_28->asic_type == 133)
  VAR_28->df_funcs = &VAR_5;
 else
  VAR_28->df_funcs = &VAR_4;

 VAR_28->rev_id = FUNC_6(VAR_28);
 VAR_28->nbio_funcs->detect_hw_virt(VAR_28);

 if (FUNC_2(VAR_28))
  VAR_28->virt.ops = &VAR_27;

 switch (VAR_28->asic_type) {
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_28, &VAR_25);
  FUNC_1(VAR_28, &VAR_8);


  if (FUNC_2(VAR_28)) {
   if (FUNC_5(VAR_28->firmware.load_type == VAR_0)) {
    if (VAR_28->asic_type == 128)
     FUNC_1(VAR_28, &VAR_14);
    else
     FUNC_1(VAR_28, &VAR_16);
   }
   FUNC_1(VAR_28, &VAR_26);
  } else {
   FUNC_1(VAR_28, &VAR_26);
   if (FUNC_5(VAR_28->firmware.load_type == VAR_0)) {
    if (VAR_28->asic_type == 128)
     FUNC_1(VAR_28, &VAR_14);
    else
     FUNC_1(VAR_28, &VAR_16);
   }
  }
  FUNC_1(VAR_28, &VAR_7);
  FUNC_1(VAR_28, &VAR_17);
  if (!FUNC_2(VAR_28)) {
   if (FUNC_4(VAR_28))
    FUNC_1(VAR_28, &VAR_18);
   else
    FUNC_1(VAR_28, &VAR_12);
  }
  if (VAR_28->enable_virtual_display || FUNC_2(VAR_28))
   FUNC_1(VAR_28, &VAR_3);




  if (!(VAR_28->asic_type == 128 && FUNC_2(VAR_28))) {
   FUNC_1(VAR_28, &VAR_20);
   FUNC_1(VAR_28, &VAR_21);
  }
  break;
 case 132:
  FUNC_1(VAR_28, &VAR_25);
  FUNC_1(VAR_28, &VAR_8);
  FUNC_1(VAR_28, &VAR_26);
  if (FUNC_5(VAR_28->firmware.load_type == VAR_0))
   FUNC_1(VAR_28, &VAR_13);
  FUNC_1(VAR_28, &VAR_7);
  FUNC_1(VAR_28, &VAR_17);
  FUNC_1(VAR_28, &VAR_12);
  if (VAR_28->enable_virtual_display || FUNC_2(VAR_28))
   FUNC_1(VAR_28, &VAR_3);




  FUNC_1(VAR_28, &VAR_22);
  break;
 case 133:
  FUNC_1(VAR_28, &VAR_25);
  FUNC_1(VAR_28, &VAR_8);
  FUNC_1(VAR_28, &VAR_26);
  if (VAR_28->enable_virtual_display || FUNC_2(VAR_28))
   FUNC_1(VAR_28, &VAR_3);
  FUNC_1(VAR_28, &VAR_7);
  FUNC_1(VAR_28, &VAR_17);
  FUNC_1(VAR_28, &VAR_18);
  FUNC_1(VAR_28, &VAR_24);
  break;
 case 131:
  FUNC_1(VAR_28, &VAR_25);
  FUNC_1(VAR_28, &VAR_8);
  FUNC_1(VAR_28, &VAR_26);
  if (FUNC_5(VAR_28->firmware.load_type == VAR_0))
   FUNC_1(VAR_28, &VAR_15);
  if (FUNC_4(VAR_28))
   FUNC_1(VAR_28, &VAR_19);
  FUNC_1(VAR_28, &VAR_7);
  FUNC_1(VAR_28, &VAR_17);
  if (VAR_28->enable_virtual_display || FUNC_2(VAR_28))
   FUNC_1(VAR_28, &VAR_3);




  FUNC_1(VAR_28, &VAR_23);
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
