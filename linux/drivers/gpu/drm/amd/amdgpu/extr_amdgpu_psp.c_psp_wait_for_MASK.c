
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct psp_context *VAR_1, uint32_t VAR_2,
   uint32_t VAR_3, uint32_t VAR_4, bool VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;
 struct amdgpu_device *VAR_8 = VAR_1->adev;

 for (VAR_7 = 0; VAR_7 < VAR_8->usec_timeout; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2);
  if (VAR_5) {
   if (VAR_6 != VAR_3)
    return 0;
  } else {
   if ((VAR_6 & VAR_4) == VAR_3)
    return 0;
  }
  FUNC_1(1);
 }

 return -VAR_0;
}
