
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct amdgpu_ring {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (int) ;

signed long FUNC_2(struct amdgpu_ring *VAR_0,
          uint32_t VAR_1,
          signed long VAR_2)
{
 uint32_t VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_0);
  FUNC_1(5);
  VAR_2 -= 5;
 } while ((int32_t)(VAR_1 - VAR_3) > 0 && VAR_2 > 0);

 return VAR_2 > 0 ? VAR_2 : 0;
}
