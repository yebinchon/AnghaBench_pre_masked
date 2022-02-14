
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct amdgpu_ring {size_t wptr_offs; int me; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t FUNC_3(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 u64 VAR_4;

 if (VAR_2->use_doorbell) {

  VAR_4 = FUNC_1(*((u64 *)&VAR_3->wb.wb[VAR_2->wptr_offs]));
  FUNC_0("wptr/doorbell before shift == 0x%016llx\n", VAR_4);
 } else {
  VAR_4 = FUNC_2(VAR_2->me, VAR_1);
  VAR_4 = VAR_4 << 32;
  VAR_4 |= FUNC_2(VAR_2->me, VAR_0);
  FUNC_0("wptr before shift [%i] wptr == 0x%016llx\n",
    VAR_2->me, VAR_4);
 }

 return VAR_4 >> 2;
}
