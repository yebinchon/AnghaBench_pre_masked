
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; int enable_virtual_display; } ;


 int FUNC_0 () ;





 int FUNC_1 (struct amdgpu_device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_3(struct amdgpu_device *VAR_9)
{
 FUNC_2(VAR_9);

 switch (VAR_9->asic_type) {
 case 128:
 case 129:
 case 130:
  FUNC_1(VAR_9, &VAR_5);
  FUNC_1(VAR_9, &VAR_4);
  FUNC_1(VAR_9, &VAR_7);
  FUNC_1(VAR_9, &VAR_3);
  FUNC_1(VAR_9, &VAR_6);
  FUNC_1(VAR_9, &VAR_8);
  if (VAR_9->enable_virtual_display)
   FUNC_1(VAR_9, &VAR_2);
  else
   FUNC_1(VAR_9, &VAR_0);


  break;
 case 131:
  FUNC_1(VAR_9, &VAR_5);
  FUNC_1(VAR_9, &VAR_4);
  FUNC_1(VAR_9, &VAR_7);
  FUNC_1(VAR_9, &VAR_3);
  FUNC_1(VAR_9, &VAR_6);
  FUNC_1(VAR_9, &VAR_8);
  if (VAR_9->enable_virtual_display)
   FUNC_1(VAR_9, &VAR_2);
  else
   FUNC_1(VAR_9, &VAR_1);



  break;
 case 132:
  FUNC_1(VAR_9, &VAR_5);
  FUNC_1(VAR_9, &VAR_4);
  FUNC_1(VAR_9, &VAR_7);
  FUNC_1(VAR_9, &VAR_3);
  FUNC_1(VAR_9, &VAR_6);
  FUNC_1(VAR_9, &VAR_8);
  if (VAR_9->enable_virtual_display)
   FUNC_1(VAR_9, &VAR_2);
  break;
 default:
  FUNC_0();
 }
 return 0;
}
