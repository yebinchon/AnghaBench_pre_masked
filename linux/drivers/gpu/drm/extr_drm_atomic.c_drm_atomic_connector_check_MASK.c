
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_writeback_job {scalar_t__ out_fence; scalar_t__ fb; } ;
struct drm_display_info {int bpc; } ;
struct drm_crtc_state {int active; } ;
struct drm_connector_state {int max_bpc; struct drm_writeback_job* writeback_job; TYPE_3__* crtc; int state; int max_requested_bpc; } ;
struct TYPE_5__ {int id; } ;
struct drm_connector {scalar_t__ connector_type; int name; TYPE_2__ base; scalar_t__ max_bpc_property; struct drm_display_info display_info; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct drm_crtc_state* FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (struct drm_writeback_job*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_2,
  struct drm_connector_state *VAR_3)
{
 struct drm_crtc_state *VAR_4;
 struct drm_writeback_job *VAR_5 = VAR_3->writeback_job;
 const struct drm_display_info *VAR_6 = &VAR_2->display_info;

 VAR_3->max_bpc = VAR_6->bpc ? VAR_6->bpc : 8;
 if (VAR_2->max_bpc_property)
  VAR_3->max_bpc = FUNC_3(VAR_3->max_bpc, VAR_3->max_requested_bpc);

 if ((VAR_2->connector_type != VAR_0) || !VAR_5)
  return 0;

 if (VAR_5->fb && !VAR_3->crtc) {
  FUNC_0("[CONNECTOR:%d:%s] framebuffer without CRTC\n",
     VAR_2->base.id, VAR_2->name);
  return -VAR_1;
 }

 if (VAR_3->crtc)
  VAR_4 = FUNC_1(VAR_3->state,
        VAR_3->crtc);

 if (VAR_5->fb && !VAR_4->active) {
  FUNC_0("[CONNECTOR:%d:%s] has framebuffer, but [CRTC:%d] is off\n",
     VAR_2->base.id, VAR_2->name,
     VAR_3->crtc->base.id);
  return -VAR_1;
 }

 if (!VAR_5->fb) {
  if (VAR_5->out_fence) {
   FUNC_0("[CONNECTOR:%d:%s] requesting out-fence without framebuffer\n",
      VAR_2->base.id, VAR_2->name);
   return -VAR_1;
  }

  FUNC_2(VAR_5);
  VAR_3->writeback_job = ((void*)0);
 }

 return 0;
}
