
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_job {int sched_sync; int sync; int fence; } ;


 int FUNC_0 (struct amdgpu_job*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_job*) ;

void FUNC_4(struct amdgpu_job *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_2(VAR_0->fence);
 FUNC_1(&VAR_0->sync);
 FUNC_1(&VAR_0->sched_sync);
 FUNC_3(VAR_0);
}
