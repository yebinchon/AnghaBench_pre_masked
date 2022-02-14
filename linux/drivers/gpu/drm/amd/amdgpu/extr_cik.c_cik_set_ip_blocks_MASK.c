
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; int enable_virtual_display; } ;







 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_device*) ;
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

int FUNC_3(struct amdgpu_device *VAR_18)
{
 FUNC_2(VAR_18);

 switch (VAR_18->asic_type) {
 case 132:
  FUNC_1(VAR_18, &VAR_1);
  FUNC_1(VAR_18, &VAR_13);
  FUNC_1(VAR_18, &VAR_2);
  FUNC_1(VAR_18, &VAR_11);
  FUNC_1(VAR_18, &VAR_3);
  FUNC_1(VAR_18, &VAR_15);
  if (VAR_18->enable_virtual_display)
   FUNC_1(VAR_18, &VAR_8);




  else
   FUNC_1(VAR_18, &VAR_5);
  FUNC_1(VAR_18, &VAR_16);
  FUNC_1(VAR_18, &VAR_17);
  break;
 case 131:
  FUNC_1(VAR_18, &VAR_1);
  FUNC_1(VAR_18, &VAR_13);
  FUNC_1(VAR_18, &VAR_2);
  FUNC_1(VAR_18, &VAR_12);
  FUNC_1(VAR_18, &VAR_3);
  FUNC_1(VAR_18, &VAR_15);
  if (VAR_18->enable_virtual_display)
   FUNC_1(VAR_18, &VAR_8);




  else
   FUNC_1(VAR_18, &VAR_7);
  FUNC_1(VAR_18, &VAR_16);
  FUNC_1(VAR_18, &VAR_17);
  break;
 case 129:
  FUNC_1(VAR_18, &VAR_1);
  FUNC_1(VAR_18, &VAR_13);
  FUNC_1(VAR_18, &VAR_2);
  FUNC_1(VAR_18, &VAR_10);
  FUNC_1(VAR_18, &VAR_3);
  FUNC_1(VAR_18, &VAR_14);
  if (VAR_18->enable_virtual_display)
   FUNC_1(VAR_18, &VAR_8);




  else
   FUNC_1(VAR_18, &VAR_4);

  FUNC_1(VAR_18, &VAR_16);
  FUNC_1(VAR_18, &VAR_17);
  break;
 case 130:
 case 128:
  FUNC_1(VAR_18, &VAR_1);
  FUNC_1(VAR_18, &VAR_13);
  FUNC_1(VAR_18, &VAR_2);
  FUNC_1(VAR_18, &VAR_11);
  FUNC_1(VAR_18, &VAR_3);
  FUNC_1(VAR_18, &VAR_14);
  if (VAR_18->enable_virtual_display)
   FUNC_1(VAR_18, &VAR_8);




  else
   FUNC_1(VAR_18, &VAR_6);
  FUNC_1(VAR_18, &VAR_16);
  FUNC_1(VAR_18, &VAR_17);
  break;
 default:

  return -VAR_0;
 }
 return 0;
}
