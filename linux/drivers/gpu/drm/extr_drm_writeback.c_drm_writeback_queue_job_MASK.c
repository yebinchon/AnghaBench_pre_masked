
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_writeback_job {int list_entry; } ;
struct drm_writeback_connector {int job_lock; int job_queue; } ;
struct drm_connector_state {struct drm_writeback_job* writeback_job; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct drm_writeback_connector *VAR_0,
        struct drm_connector_state *VAR_1)
{
 struct drm_writeback_job *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->writeback_job;
 VAR_1->writeback_job = ((void*)0);

 FUNC_1(&VAR_0->job_lock, VAR_3);
 FUNC_0(&VAR_2->list_entry, &VAR_0->job_queue);
 FUNC_2(&VAR_0->job_lock, VAR_3);
}
