
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_job {int v3d; } ;
struct drm_sched_job {int dummy; } ;


 struct v3d_job* FUNC_0 (struct drm_sched_job*) ;
 int FUNC_1 (int ,struct drm_sched_job*) ;

__attribute__((used)) static void
FUNC_2(struct drm_sched_job *VAR_0)
{
 struct v3d_job *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->v3d, VAR_0);
}
