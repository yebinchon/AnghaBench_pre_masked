
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vc4_txp {int connector; } ;
struct drm_gem_cma_object {int paddr; } ;
struct drm_framebuffer {int* offsets; int* pitches; TYPE_4__* format; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_connector_state {TYPE_3__* writeback_job; TYPE_2__* crtc; } ;
struct drm_connector {int dummy; } ;
struct TYPE_8__ {scalar_t__ format; scalar_t__ has_alpha; } ;
struct TYPE_7__ {struct drm_framebuffer* fb; } ;
struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct vc4_txp* FUNC_4 (struct drm_connector*) ;
 struct drm_gem_cma_object* FUNC_5 (struct drm_framebuffer*,int ) ;
 scalar_t__* VAR_12 ;
 int FUNC_6 (int *,struct drm_connector_state*) ;
 int* VAR_13 ;

__attribute__((used)) static void FUNC_7(struct drm_connector *VAR_14,
     struct drm_connector_state *VAR_15)
{
 struct vc4_txp *VAR_16 = FUNC_4(VAR_14);
 struct drm_gem_cma_object *VAR_17;
 struct drm_display_mode *VAR_18;
 struct drm_framebuffer *VAR_19;
 u32 VAR_20;
 int VAR_21;

 if (FUNC_3(!VAR_15->writeback_job))
  return;

 VAR_18 = &VAR_15->crtc->state->adjusted_mode;
 VAR_19 = VAR_15->writeback_job->fb;

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_12); VAR_21++) {
  if (VAR_19->format->format == VAR_12[VAR_21])
   break;
 }

 if (FUNC_3(VAR_21 == FUNC_0(VAR_12)))
  return;

 VAR_20 = VAR_8 | VAR_10 | VAR_6 |
        FUNC_2(0xf, VAR_1) |
        FUNC_2(VAR_13[VAR_21], VAR_7);

 if (VAR_19->format->has_alpha)
  VAR_20 |= VAR_0;

 VAR_17 = FUNC_5(VAR_19, 0);
 FUNC_1(VAR_5, VAR_17->paddr + VAR_19->offsets[0]);
 FUNC_1(VAR_4, VAR_19->pitches[0]);
 FUNC_1(VAR_2,
    FUNC_2(VAR_18->hdisplay, VAR_11) |
    FUNC_2(VAR_18->vdisplay, VAR_9));

 FUNC_1(VAR_3, VAR_20);

 FUNC_6(&VAR_16->connector, VAR_15);
}
