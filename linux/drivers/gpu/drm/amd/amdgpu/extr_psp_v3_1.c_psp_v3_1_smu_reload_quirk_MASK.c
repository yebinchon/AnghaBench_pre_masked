
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct psp_context *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_1 | 0x03b00000);
 return (VAR_4 & VAR_0) ? 1 : 0;
}
