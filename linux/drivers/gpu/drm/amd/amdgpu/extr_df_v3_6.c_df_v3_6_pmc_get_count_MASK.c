
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
struct amdgpu_device {int asic_type; } ;



 unsigned long long VAR_0 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (struct amdgpu_device*,unsigned long long,unsigned long long*,unsigned long long,unsigned long long*) ;
 int FUNC_2 (struct amdgpu_device*,unsigned long long,unsigned long long*,unsigned long long*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_1,
      uint64_t VAR_2,
      uint64_t *VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 *VAR_3 = 0;

 switch (VAR_1->asic_type) {
 case 128:

  FUNC_2(VAR_1, VAR_2, &VAR_4,
          &VAR_5);

  if ((VAR_4 == 0) || (VAR_5 == 0))
   return;

  FUNC_1(VAR_1, VAR_4, &VAR_6,
    VAR_5, &VAR_7);

  *VAR_3 = ((VAR_7 | 0ULL) << 32) | (VAR_6 | 0ULL);

  if (*VAR_3 >= VAR_0)
   *VAR_3 = 0;

  FUNC_0("config=%llx addr=%08x:%08x val=%08x:%08x",
    VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);

  break;

 default:
  break;
 }
}
