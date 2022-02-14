
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct psb_intel_mode_device {int dummy; } ;
struct psb_intel_crtc_state {int dummy; } ;
struct TYPE_4__ {scalar_t__ num_connectors; struct drm_connector** connectors; int * crtc; } ;
struct gma_crtc {int pipe; int plane; int active; TYPE_2__ mode_set; int base; scalar_t__ cursor_addr; struct psb_intel_mode_device* mode_dev; scalar_t__* lut_adj; int clock_funcs; void* crtc_state; } ;
struct drm_psb_private {int ** pipe_to_crtc_mapping; int ** plane_to_crtc_mapping; TYPE_1__* ops; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int crtc_helper; int clock_funcs; int crtc_funcs; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct drm_device*,int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct gma_crtc*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (struct drm_device*,struct gma_crtc*) ;

void FUNC_9(struct drm_device *VAR_2, int VAR_3,
       struct psb_intel_mode_device *VAR_4)
{
 struct drm_psb_private *VAR_5 = VAR_2->dev_private;
 struct gma_crtc *VAR_6;
 int VAR_7;



 VAR_6 = FUNC_7(sizeof(struct gma_crtc) +
   (VAR_1 * sizeof(struct drm_connector *)),
   VAR_0);
 if (VAR_6 == ((void*)0))
  return;

 VAR_6->crtc_state =
  FUNC_7(sizeof(struct psb_intel_crtc_state), VAR_0);
 if (!VAR_6->crtc_state) {
  FUNC_2(VAR_2->dev, "Crtc state error: No memory\n");
  FUNC_6(VAR_6);
  return;
 }


 FUNC_4(VAR_2, &VAR_6->base, VAR_5->ops->crtc_funcs);


 VAR_6->clock_funcs = VAR_5->ops->clock_funcs;

 FUNC_5(&VAR_6->base, 256);
 VAR_6->pipe = VAR_3;
 VAR_6->plane = VAR_3;

 for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
  VAR_6->lut_adj[VAR_7] = 0;

 VAR_6->mode_dev = VAR_4;
 VAR_6->cursor_addr = 0;

 FUNC_3(&VAR_6->base,
      VAR_5->ops->crtc_helper);


 VAR_6->mode_set.crtc = &VAR_6->base;
 FUNC_1(VAR_3 >= FUNC_0(VAR_5->plane_to_crtc_mapping) ||
        VAR_5->plane_to_crtc_mapping[VAR_6->plane] != ((void*)0));
 VAR_5->plane_to_crtc_mapping[VAR_6->plane] = &VAR_6->base;
 VAR_5->pipe_to_crtc_mapping[VAR_6->pipe] = &VAR_6->base;
 VAR_6->mode_set.connectors = (struct drm_connector **)(VAR_6 + 1);
 VAR_6->mode_set.num_connectors = 0;
 FUNC_8(VAR_2, VAR_6);


 VAR_6->active = 1;
}
