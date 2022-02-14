
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct amdgpu_ring {size_t wptr_offs; int me; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;

__attribute__((used)) static uint64_t FUNC_3(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 u64 *VAR_4 = ((void*)0);
 uint64_t VAR_5 = 0;

 if (VAR_2->use_doorbell) {

  VAR_4 = ((u64 *)&VAR_3->wb.wb[VAR_2->wptr_offs]);
  FUNC_0("wptr/doorbell before shift == 0x%016llx\n", *VAR_4);
  *VAR_4 = (*VAR_4) >> 2;
  FUNC_0("wptr/doorbell after shift == 0x%016llx\n", *VAR_4);
 } else {
  u32 VAR_6, VAR_7;

  VAR_4 = &VAR_5;
  VAR_6 = FUNC_1(FUNC_2(VAR_3, VAR_2->me, VAR_0)) >> 2;
  VAR_7 = FUNC_1(FUNC_2(VAR_3, VAR_2->me, VAR_1)) >> 2;

  FUNC_0("wptr [%i]high== 0x%08x low==0x%08x\n",
    VAR_2->me, VAR_7, VAR_6);
  *VAR_4 = VAR_7;
  *VAR_4 = (*VAR_4) << 32;
  *VAR_4 |= VAR_6;
 }

 return *VAR_4;
}
