
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct amdgpu_crtc {int rmx_type; int crtc_id; } ;
typedef int args ;
struct TYPE_5__ {void* ucEnable; int ucScaler; } ;
typedef TYPE_2__ ENABLE_SCALER_PS_ALLOCATION ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;



 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

void FUNC_4(struct drm_crtc *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 struct amdgpu_crtc *VAR_8 = FUNC_3(VAR_5);
 ENABLE_SCALER_PS_ALLOCATION VAR_9;
 int VAR_10 = FUNC_0(VAR_3, VAR_4);

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.ucScaler = VAR_8->crtc_id;

 switch (VAR_8->rmx_type) {
 case 128:
  VAR_9.ucEnable = VAR_2;
  break;
 case 129:
  VAR_9.ucEnable = VAR_0;
  break;
 case 130:
  VAR_9.ucEnable = VAR_2;
  break;
 default:
  VAR_9.ucEnable = VAR_1;
  break;
 }
 FUNC_1(VAR_7->mode_info.atom_context, VAR_10, (uint32_t *)&VAR_9);
}
