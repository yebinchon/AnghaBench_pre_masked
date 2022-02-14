
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gpu_scheduler {int job_list_lock; int work_tdr; int ring_mirror_list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;

void FUNC_5(struct drm_gpu_scheduler *VAR_1,
  unsigned long VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1->job_list_lock, VAR_3);

 if (FUNC_1(&VAR_1->ring_mirror_list))
  FUNC_0(&VAR_1->work_tdr);
 else
  FUNC_2(VAR_0, &VAR_1->work_tdr, VAR_2);

 FUNC_4(&VAR_1->job_list_lock, VAR_3);
}
