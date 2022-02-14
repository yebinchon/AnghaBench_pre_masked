
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_vm_update_params {int adev; scalar_t__ pages_addr; } ;
struct amdgpu_bo {int dummy; } ;


 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (int ,void*,unsigned int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,unsigned int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_vm_update_params *VAR_0,
    struct amdgpu_bo *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, unsigned VAR_4, uint32_t VAR_5,
    uint64_t VAR_6)
{
 unsigned int VAR_7;
 uint64_t VAR_8;

 VAR_2 += (unsigned long)FUNC_0(VAR_1);

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8 = VAR_0->pages_addr ?
   FUNC_2(VAR_0->pages_addr, VAR_3) :
   VAR_3;
  FUNC_1(VAR_0->adev, (void *)(uintptr_t)VAR_2,
           VAR_7, VAR_8, VAR_6);
  VAR_3 += VAR_5;
 }
 return 0;
}
