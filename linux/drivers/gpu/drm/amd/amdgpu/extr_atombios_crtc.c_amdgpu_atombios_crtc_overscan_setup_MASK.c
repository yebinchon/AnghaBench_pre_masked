
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_display_mode {int crtc_vdisplay; int crtc_hdisplay; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct amdgpu_crtc {int rmx_type; int h_border; int v_border; int crtc_id; } ;
typedef int args ;
struct TYPE_5__ {void* usOverscanTop; void* usOverscanBottom; void* usOverscanLeft; void* usOverscanRight; int ucCRTC; } ;
typedef TYPE_2__ SET_CRTC_OVERSCAN_PS_ALLOCATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;



 int VAR_1 ;
 int FUNC_1 (int ,int,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 struct amdgpu_crtc* FUNC_4 (struct drm_crtc*) ;

void FUNC_5(struct drm_crtc *VAR_2,
      struct drm_display_mode *VAR_3,
      struct drm_display_mode *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 struct amdgpu_crtc *VAR_7 = FUNC_4(VAR_2);
 SET_CRTC_OVERSCAN_PS_ALLOCATION VAR_8;
 int VAR_9 = FUNC_0(VAR_0, VAR_1);
 int VAR_10, VAR_11;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.ucCRTC = VAR_7->crtc_id;

 switch (VAR_7->rmx_type) {
 case 129:
  VAR_8.usOverscanTop = FUNC_2((VAR_4->crtc_vdisplay - VAR_3->crtc_vdisplay) / 2);
  VAR_8.usOverscanBottom = FUNC_2((VAR_4->crtc_vdisplay - VAR_3->crtc_vdisplay) / 2);
  VAR_8.usOverscanLeft = FUNC_2((VAR_4->crtc_hdisplay - VAR_3->crtc_hdisplay) / 2);
  VAR_8.usOverscanRight = FUNC_2((VAR_4->crtc_hdisplay - VAR_3->crtc_hdisplay) / 2);
  break;
 case 130:
  VAR_10 = VAR_3->crtc_vdisplay * VAR_4->crtc_hdisplay;
  VAR_11 = VAR_4->crtc_vdisplay * VAR_3->crtc_hdisplay;

  if (VAR_10 > VAR_11) {
   VAR_8.usOverscanLeft = FUNC_2((VAR_4->crtc_hdisplay - (VAR_11 / VAR_3->crtc_vdisplay)) / 2);
   VAR_8.usOverscanRight = FUNC_2((VAR_4->crtc_hdisplay - (VAR_11 / VAR_3->crtc_vdisplay)) / 2);
  } else if (VAR_11 > VAR_10) {
   VAR_8.usOverscanTop = FUNC_2((VAR_4->crtc_vdisplay - (VAR_10 / VAR_3->crtc_hdisplay)) / 2);
   VAR_8.usOverscanBottom = FUNC_2((VAR_4->crtc_vdisplay - (VAR_10 / VAR_3->crtc_hdisplay)) / 2);
  }
  break;
 case 128:
 default:
  VAR_8.usOverscanRight = FUNC_2(VAR_7->h_border);
  VAR_8.usOverscanLeft = FUNC_2(VAR_7->h_border);
  VAR_8.usOverscanBottom = FUNC_2(VAR_7->v_border);
  VAR_8.usOverscanTop = FUNC_2(VAR_7->v_border);
  break;
 }
 FUNC_1(VAR_6->mode_info.atom_context, VAR_9, (uint32_t *)&VAR_8);
}
