
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct amdgpu_ring {size_t rptr_offs; TYPE_2__* adev; } ;
struct TYPE_3__ {int * wb; } ;
struct TYPE_4__ {TYPE_1__ wb; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_ring *VAR_0)
{
 u64 *VAR_1;


 VAR_1 = ((u64 *)&VAR_0->adev->wb.wb[VAR_0->rptr_offs]);

 FUNC_0("rptr before shift == 0x%016llx\n", *VAR_1);
 return ((*VAR_1) >> 2);
}
