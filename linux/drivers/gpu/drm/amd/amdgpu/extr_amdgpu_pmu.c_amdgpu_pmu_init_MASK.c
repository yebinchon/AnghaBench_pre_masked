
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,char*,char*,int ,int ) ;

int FUNC_1(struct amdgpu_device *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->asic_type) {
 case 128:

  VAR_4 = FUNC_0(VAR_3, VAR_2,
           "DF", "amdgpu_df", VAR_1,
           VAR_0);


  break;
 default:
  return 0;
 }

 return 0;
}
