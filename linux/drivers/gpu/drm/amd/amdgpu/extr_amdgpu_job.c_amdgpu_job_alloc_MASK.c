
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_vm {int dummy; } ;
struct TYPE_3__ {int * sched; } ;
struct amdgpu_job {unsigned int num_ibs; int vm_pd_addr; int vram_lost_counter; int sched_sync; int sync; void* ibs; struct amdgpu_vm* vm; TYPE_1__ base; } ;
struct amdgpu_ib {int dummy; } ;
struct amdgpu_device {int vram_lost_counter; TYPE_2__** rings; } ;
struct TYPE_4__ {int sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct amdgpu_job* FUNC_2 (size_t,int ) ;

int FUNC_3(struct amdgpu_device *VAR_4, unsigned VAR_5,
       struct amdgpu_job **VAR_6, struct amdgpu_vm *VAR_7)
{
 size_t VAR_8 = sizeof(struct amdgpu_job);

 if (VAR_5 == 0)
  return -VAR_1;

 VAR_8 += sizeof(struct amdgpu_ib) * VAR_5;

 *VAR_6 = FUNC_2(VAR_8, VAR_3);
 if (!*VAR_6)
  return -VAR_2;





 (*VAR_6)->base.sched = &VAR_4->rings[0]->sched;
 (*VAR_6)->vm = VAR_7;
 (*VAR_6)->ibs = (void *)&(*VAR_6)[1];
 (*VAR_6)->num_ibs = VAR_5;

 FUNC_0(&(*VAR_6)->sync);
 FUNC_0(&(*VAR_6)->sched_sync);
 (*VAR_6)->vram_lost_counter = FUNC_1(&VAR_4->vram_lost_counter);
 (*VAR_6)->vm_pd_addr = VAR_0;

 return 0;
}
