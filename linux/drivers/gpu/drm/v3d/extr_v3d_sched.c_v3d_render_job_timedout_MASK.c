
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_render_job {int timedout_ctra; int timedout_ctca; } ;
struct drm_sched_job {int dummy; } ;


 int VAR_0 ;
 struct v3d_render_job* FUNC_0 (struct drm_sched_job*) ;
 int FUNC_1 (struct drm_sched_job*,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct drm_sched_job *VAR_1)
{
 struct v3d_render_job *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0,
       &VAR_2->timedout_ctca, &VAR_2->timedout_ctra);
}
