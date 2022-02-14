
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_job {struct v3d_dev* v3d; } ;
struct v3d_dev {int dummy; } ;
struct drm_sched_job {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct v3d_job* FUNC_0 (struct drm_sched_job*) ;
 int FUNC_1 (struct v3d_dev*) ;

__attribute__((used)) static struct dma_fence *
FUNC_2(struct drm_sched_job *VAR_0)
{
 struct v3d_job *VAR_1 = FUNC_0(VAR_0);
 struct v3d_dev *VAR_2 = VAR_1->v3d;

 FUNC_1(VAR_2);

 return ((void*)0);
}
