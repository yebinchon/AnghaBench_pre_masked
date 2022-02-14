
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint16_t ;
struct TYPE_3__ {int write_count; int lock; int * data; void** flags; void** code; } ;
struct TYPE_4__ {TYPE_1__ vf_errors; } ;
struct amdgpu_device {TYPE_2__ virt; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct amdgpu_device *VAR_2,
    uint16_t VAR_3,
    uint16_t VAR_4,
    uint64_t VAR_5)
{
 int VAR_6;
 uint16_t VAR_7;

 if (!FUNC_1(VAR_2))
  return;

 VAR_7 = FUNC_0(VAR_0, VAR_3);

 FUNC_2(&VAR_2->virt.vf_errors.lock);
 VAR_6 = VAR_2->virt.vf_errors.write_count % VAR_1;
 VAR_2->virt.vf_errors.code [VAR_6] = VAR_7;
 VAR_2->virt.vf_errors.flags [VAR_6] = VAR_4;
 VAR_2->virt.vf_errors.data [VAR_6] = VAR_5;
 VAR_2->virt.vf_errors.write_count ++;
 FUNC_3(&VAR_2->virt.vf_errors.lock);
}
