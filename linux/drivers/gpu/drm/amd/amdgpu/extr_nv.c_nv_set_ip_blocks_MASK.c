
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int load_type; } ;
struct amdgpu_device {int asic_type; TYPE_1__ firmware; int enable_virtual_display; int enable_mes; TYPE_2__* nbio_funcs; } ;
struct TYPE_4__ {int (* detect_hw_virt ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct amdgpu_device*) ;
 int VAR_14 ;

int FUNC_6(struct amdgpu_device *VAR_15)
{
 int VAR_16;


 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_15->nbio_funcs = &VAR_9;

 VAR_15->nbio_funcs->detect_hw_virt(VAR_15);

 switch (VAR_15->asic_type) {
 case 130:
 case 128:
  FUNC_1(VAR_15, &VAR_10);
  FUNC_1(VAR_15, &VAR_6);
  FUNC_1(VAR_15, &VAR_8);
  FUNC_1(VAR_15, &VAR_11);
  if (VAR_15->firmware.load_type == VAR_1 &&
      FUNC_3(VAR_15))
   FUNC_1(VAR_15, &VAR_13);
  if (VAR_15->enable_virtual_display || FUNC_2(VAR_15))
   FUNC_1(VAR_15, &VAR_3);




  FUNC_1(VAR_15, &VAR_5);
  FUNC_1(VAR_15, &VAR_12);
  if (VAR_15->firmware.load_type == VAR_0 &&
      FUNC_3(VAR_15))
   FUNC_1(VAR_15, &VAR_13);
  FUNC_1(VAR_15, &VAR_14);
  if (VAR_15->enable_mes)
   FUNC_1(VAR_15, &VAR_7);
  break;
 case 129:
  FUNC_1(VAR_15, &VAR_10);
  FUNC_1(VAR_15, &VAR_6);
  FUNC_1(VAR_15, &VAR_8);
  FUNC_1(VAR_15, &VAR_11);
  if (VAR_15->firmware.load_type == VAR_1 &&
      FUNC_3(VAR_15))
   FUNC_1(VAR_15, &VAR_13);
  if (VAR_15->enable_virtual_display || FUNC_2(VAR_15))
   FUNC_1(VAR_15, &VAR_3);




  FUNC_1(VAR_15, &VAR_5);
  FUNC_1(VAR_15, &VAR_12);
  if (VAR_15->firmware.load_type == VAR_0 &&
      FUNC_3(VAR_15))
   FUNC_1(VAR_15, &VAR_13);
  FUNC_1(VAR_15, &VAR_14);
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
