
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int num_doorbells; scalar_t__ base; } ;
struct amdgpu_device {TYPE_1__ doorbell; } ;
typedef scalar_t__ phys_addr_t ;



__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_0,
      phys_addr_t *VAR_1,
      size_t *VAR_2,
      size_t *VAR_3)
{




 if (VAR_0->doorbell.size > VAR_0->doorbell.num_doorbells * sizeof(u32)) {
  *VAR_1 = VAR_0->doorbell.base;
  *VAR_2 = VAR_0->doorbell.size;
  *VAR_3 = VAR_0->doorbell.num_doorbells * sizeof(u32);
 } else {
  *VAR_1 = 0;
  *VAR_2 = 0;
  *VAR_3 = 0;
 }
}
