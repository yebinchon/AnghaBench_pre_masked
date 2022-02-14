
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 scalar_t__ FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (FUNC_5(VAR_5)) {
  FUNC_0("vce is not idle \n");
  return 0;
 }

 if (FUNC_6(VAR_5)) {
  FUNC_0("VCE is busy, Can't set clock gating");
  return 0;
 }


 FUNC_3(VAR_0, 1 << 8, ~(1 << 8));

 for (VAR_6 = 0; VAR_6 < 100; ++VAR_6) {
  VAR_7 = FUNC_1(VAR_1);
  if (VAR_7 & 0x240)
   break;
  FUNC_4(1);
 }

 FUNC_3(VAR_4, 0, ~0x80001);


 FUNC_3(VAR_2, 1, ~0x1);

 FUNC_2(VAR_3, 0);

 return 0;
}
