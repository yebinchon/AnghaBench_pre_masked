
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_1(struct amdgpu_device *VAR_0)
{
 u32 VAR_1, VAR_2;
 u32 VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 VAR_4 = 0;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {

  VAR_3 = 3 << (2 * VAR_1);
  if (VAR_2 & (1 << VAR_1))
   VAR_4 |= VAR_3;
 }

 return VAR_4;
}
