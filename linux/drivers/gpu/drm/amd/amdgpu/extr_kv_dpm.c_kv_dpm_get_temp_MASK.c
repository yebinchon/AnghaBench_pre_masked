
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 u32 VAR_1;
 int VAR_2 = 0;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_0;

 VAR_1 = FUNC_0(0xC0300E0C);

 if (VAR_1)
  VAR_2 = (VAR_1 / 8) - 49;
 else
  VAR_2 = 0;

 VAR_2 = VAR_2 * 1000;

 return VAR_2;
}
