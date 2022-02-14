
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct psp_context *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 struct amdgpu_device *VAR_8 = VAR_5->adev;

 VAR_7 = FUNC_1(VAR_2, 0, VAR_4);

 VAR_6 = FUNC_4(VAR_5, VAR_7, 0x80000000, 0x8000FFFF, 0);

 if (VAR_6) {
  FUNC_0("psp is not working correctly before mode1 reset!\n");
  return -VAR_0;
 }


 FUNC_2(VAR_7, VAR_1);

 FUNC_3(500);

 VAR_7 = FUNC_1(VAR_2, 0, VAR_3);

 VAR_6 = FUNC_4(VAR_5, VAR_7, 0x80000000, 0x80000000, 0);

 if (VAR_6) {
  FUNC_0("psp mode 1 reset failed!\n");
  return -VAR_0;
 }

 FUNC_0("psp mode1 reset succeed \n");

 return 0;
}
