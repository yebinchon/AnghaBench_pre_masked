
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_ring*,int*) ;

uint64_t FUNC_2(struct amdgpu_ring *VAR_3,
         unsigned VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_3->adev;
 uint64_t VAR_6;
 uint32_t VAR_7 = 0;
 int VAR_8;

 if (VAR_4 == 0 || !VAR_2)
  return 0;

 VAR_8 = FUNC_1(VAR_3, &VAR_7);

 if (VAR_8 || VAR_7 > 31)
  VAR_6 = 0;
 else
  VAR_6 = FUNC_0(VAR_5) +
   VAR_0 +
   VAR_7 * VAR_1;

 return VAR_6;
}
