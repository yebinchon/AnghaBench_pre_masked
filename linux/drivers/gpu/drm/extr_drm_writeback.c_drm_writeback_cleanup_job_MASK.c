
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_writeback_job {scalar_t__ out_fence; scalar_t__ fb; scalar_t__ prepared; struct drm_writeback_connector* connector; } ;
struct TYPE_2__ {struct drm_connector_helper_funcs* helper_private; } ;
struct drm_writeback_connector {TYPE_1__ base; } ;
struct drm_connector_helper_funcs {int (* cleanup_writeback_job ) (struct drm_writeback_connector*,struct drm_writeback_job*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_writeback_job*) ;
 int FUNC_3 (struct drm_writeback_connector*,struct drm_writeback_job*) ;

void FUNC_4(struct drm_writeback_job *VAR_0)
{
 struct drm_writeback_connector *VAR_1 = VAR_0->connector;
 const struct drm_connector_helper_funcs *VAR_2 =
  VAR_1->base.helper_private;

 if (VAR_0->prepared && VAR_2->cleanup_writeback_job)
  VAR_2->cleanup_writeback_job(VAR_1, VAR_0);

 if (VAR_0->fb)
  FUNC_1(VAR_0->fb);

 if (VAR_0->out_fence)
  FUNC_0(VAR_0->out_fence);

 FUNC_2(VAR_0);
}
