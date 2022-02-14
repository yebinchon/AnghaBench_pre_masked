
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct videomode {int member_0; } ;
struct omap_drm_private {unsigned int max_bandwidth; int dispc; TYPE_5__* dispc_ops; } ;
struct omap_crtc {int channel; TYPE_4__* pipe; } ;
struct drm_display_mode {int clock; unsigned int hdisplay; unsigned int vdisplay; int htotal; int vtotal; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_10__ {int (* mgr_check_timings ) (int ,int ,struct videomode*) ;} ;
struct TYPE_9__ {TYPE_3__* output; } ;
struct TYPE_8__ {TYPE_2__* next; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_6__ {struct omap_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct drm_display_mode const*,struct videomode*) ;
 int FUNC_2 (int ,int ,struct videomode*) ;
 struct omap_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status FUNC_4(struct drm_crtc *VAR_3,
     const struct drm_display_mode *VAR_4)
{
 struct omap_drm_private *VAR_5 = VAR_3->dev->dev_private;
 struct omap_crtc *VAR_6 = FUNC_3(VAR_3);
 struct videomode VAR_7 = {0};
 int VAR_8;

 FUNC_1(VAR_4, &VAR_7);






 if (VAR_6->pipe->output->next == ((void*)0) ||
     VAR_6->pipe->output->next->type != VAR_2) {
  VAR_8 = VAR_5->dispc_ops->mgr_check_timings(VAR_5->dispc,
             VAR_6->channel,
             &VAR_7);
  if (VAR_8)
   return VAR_8;
 }


 if (VAR_5->max_bandwidth) {
  uint64_t VAR_9 = VAR_4->clock * 1000;
  unsigned int VAR_10 = 4;

  VAR_9 = VAR_9 * VAR_4->hdisplay * VAR_4->vdisplay * VAR_10;
  VAR_9 = FUNC_0(VAR_9, VAR_4->htotal * VAR_4->vtotal);





  if (VAR_5->max_bandwidth < VAR_9)
   return VAR_0;
 }

 return VAR_1;
}
