
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int write_count; int read_count; int* data; int lock; int * flags; int * code; } ;
struct TYPE_6__ {TYPE_2__ vf_errors; TYPE_1__* ops; } ;
struct amdgpu_device {TYPE_3__ virt; } ;
struct TYPE_4__ {int (* trans_msg ) (struct amdgpu_device*,int ,int,int,int) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_device*,int ,int,int,int) ;

void FUNC_5(struct amdgpu_device *VAR_2)
{

 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 if ((((void*)0) == VAR_2) || (!FUNC_1(VAR_2)) ||
     (!VAR_2->virt.ops) || (!VAR_2->virt.ops->trans_msg)) {
  return;
 }
 FUNC_2(&VAR_2->virt.vf_errors.lock);

 if (VAR_2->virt.vf_errors.write_count - VAR_2->virt.vf_errors.read_count > VAR_0) {
  VAR_2->virt.vf_errors.read_count = VAR_2->virt.vf_errors.write_count - VAR_0;
 }

 while (VAR_2->virt.vf_errors.read_count < VAR_2->virt.vf_errors.write_count) {
  VAR_6 =VAR_2->virt.vf_errors.read_count % VAR_0;
  VAR_3 = FUNC_0(VAR_2->virt.vf_errors.code[VAR_6],
          VAR_2->virt.vf_errors.flags[VAR_6]);
  VAR_4 = VAR_2->virt.vf_errors.data[VAR_6] & 0xFFFFFFFF;
  VAR_5 = (VAR_2->virt.vf_errors.data[VAR_6] >> 32) & 0xFFFFFFFF;

  VAR_2->virt.ops->trans_msg(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5);
  VAR_2->virt.vf_errors.read_count ++;
 }
 FUNC_3(&VAR_2->virt.vf_errors.lock);
}
