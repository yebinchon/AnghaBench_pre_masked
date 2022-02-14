
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_display_mode {int crtc_clock; int crtc_htotal; int crtc_vtotal; int flags; int crtc_vdisplay; } ;
struct drm_vblank_crtc {int linedur_ns; int framedur_ns; struct drm_display_mode hwmode; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {TYPE_1__ base; struct drm_device* dev; } ;


 int FUNC_0 (char*,int ,int,int,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 unsigned int FUNC_4 (struct drm_crtc*) ;

void FUNC_5(struct drm_crtc *VAR_1,
         const struct drm_display_mode *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 unsigned int VAR_4 = FUNC_4(VAR_1);
 struct drm_vblank_crtc *VAR_5 = &VAR_3->vblank[VAR_4];
 int VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = VAR_2->crtc_clock;

 if (!VAR_3->num_crtcs)
  return;

 if (FUNC_2(VAR_4 >= VAR_3->num_crtcs))
  return;


 if (VAR_8 > 0) {
  int VAR_9 = VAR_2->crtc_htotal * VAR_2->crtc_vtotal;






  VAR_6 = FUNC_3((u64) VAR_2->crtc_htotal * 1000000, VAR_8);
  VAR_7 = FUNC_3((u64) VAR_9 * 1000000, VAR_8);




  if (VAR_2->flags & VAR_0)
   VAR_7 /= 2;
 } else
  FUNC_1("crtc %u: Can't calculate constants, dotclock = 0!\n",
     VAR_1->base.id);

 VAR_5->linedur_ns = VAR_6;
 VAR_5->framedur_ns = VAR_7;
 VAR_5->hwmode = *VAR_2;

 FUNC_0("crtc %u: hwmode: htotal %d, vtotal %d, vdisplay %d\n",
    VAR_1->base.id, VAR_2->crtc_htotal,
    VAR_2->crtc_vtotal, VAR_2->crtc_vdisplay);
 FUNC_0("crtc %u: clock %d kHz framedur %d linedur %d\n",
    VAR_1->base.id, VAR_8, VAR_7, VAR_6);
}
