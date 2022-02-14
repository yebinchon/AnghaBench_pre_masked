
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; } ;
struct amdgpu_device {int asic_type; int enable_virtual_display; TYPE_1__ virt; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_29 ;

int FUNC_4(struct amdgpu_device *VAR_30)
{

 FUNC_3(VAR_30);

 if (FUNC_2(VAR_30))
  VAR_30->virt.ops = &VAR_29;

 switch (VAR_30->asic_type) {
 case 129:

  FUNC_1(VAR_30, &VAR_28);
  FUNC_1(VAR_30, &VAR_11);
  FUNC_1(VAR_30, &VAR_15);
  FUNC_1(VAR_30, &VAR_9);
  FUNC_1(VAR_30, &VAR_17);
  FUNC_1(VAR_30, &VAR_16);
  if (VAR_30->enable_virtual_display)
   FUNC_1(VAR_30, &VAR_7);
  break;
 case 135:
  FUNC_1(VAR_30, &VAR_28);
  FUNC_1(VAR_30, &VAR_14);
  FUNC_1(VAR_30, &VAR_20);
  FUNC_1(VAR_30, &VAR_9);
  FUNC_1(VAR_30, &VAR_18);
  FUNC_1(VAR_30, &VAR_16);
  if (VAR_30->enable_virtual_display || FUNC_2(VAR_30))
   FUNC_1(VAR_30, &VAR_7);




  else
   FUNC_1(VAR_30, &VAR_4);
  if (!FUNC_2(VAR_30)) {
   FUNC_1(VAR_30, &VAR_22);
   FUNC_1(VAR_30, &VAR_25);
  }
  break;
 case 130:
  FUNC_1(VAR_30, &VAR_28);
  FUNC_1(VAR_30, &VAR_12);
  FUNC_1(VAR_30, &VAR_20);
  FUNC_1(VAR_30, &VAR_9);
  FUNC_1(VAR_30, &VAR_18);
  FUNC_1(VAR_30, &VAR_16);
  if (VAR_30->enable_virtual_display || FUNC_2(VAR_30))
   FUNC_1(VAR_30, &VAR_7);




  else
   FUNC_1(VAR_30, &VAR_3);
  if (!FUNC_2(VAR_30)) {
   FUNC_1(VAR_30, &VAR_21);
   FUNC_1(VAR_30, &VAR_25);
  }
  break;
 case 134:
 case 133:
 case 132:
 case 128:
  FUNC_1(VAR_30, &VAR_28);
  FUNC_1(VAR_30, &VAR_13);
  FUNC_1(VAR_30, &VAR_20);
  FUNC_1(VAR_30, &VAR_9);
  FUNC_1(VAR_30, &VAR_19);
  FUNC_1(VAR_30, &VAR_16);
  if (VAR_30->enable_virtual_display)
   FUNC_1(VAR_30, &VAR_7);




  else
   FUNC_1(VAR_30, &VAR_6);
  FUNC_1(VAR_30, &VAR_24);
  FUNC_1(VAR_30, &VAR_27);
  break;
 case 136:
  FUNC_1(VAR_30, &VAR_28);
  FUNC_1(VAR_30, &VAR_12);
  FUNC_1(VAR_30, &VAR_2);
  FUNC_1(VAR_30, &VAR_9);
  FUNC_1(VAR_30, &VAR_18);
  FUNC_1(VAR_30, &VAR_16);
  if (VAR_30->enable_virtual_display)
   FUNC_1(VAR_30, &VAR_7);




  else
   FUNC_1(VAR_30, &VAR_5);
  FUNC_1(VAR_30, &VAR_22);
  FUNC_1(VAR_30, &VAR_26);



  break;
 case 131:
  FUNC_1(VAR_30, &VAR_28);
  FUNC_1(VAR_30, &VAR_12);
  FUNC_1(VAR_30, &VAR_2);
  FUNC_1(VAR_30, &VAR_10);
  FUNC_1(VAR_30, &VAR_18);
  FUNC_1(VAR_30, &VAR_16);
  if (VAR_30->enable_virtual_display)
   FUNC_1(VAR_30, &VAR_7);




  else
   FUNC_1(VAR_30, &VAR_5);
  FUNC_1(VAR_30, &VAR_23);
  FUNC_1(VAR_30, &VAR_27);



  break;
 default:

  return -VAR_0;
 }

 return 0;
}
