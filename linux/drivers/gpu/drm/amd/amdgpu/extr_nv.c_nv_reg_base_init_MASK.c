
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3) {
   FUNC_0("failed to init reg base from ip discovery table, "
     "fallback to legacy init method\n");
   goto legacy_init;
  }

  return 0;
 }

legacy_init:
 switch (VAR_2->asic_type) {
 case 130:
  FUNC_2(VAR_2);
  break;
 case 128:
  FUNC_4(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
