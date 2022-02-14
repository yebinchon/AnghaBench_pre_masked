
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
struct amdgpu_crtc {int crtc_id; } ;
typedef int args ;
struct TYPE_5__ {int ucEnable; int ucCRTC; } ;
typedef TYPE_2__ ENABLE_CRTC_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

void FUNC_4(struct drm_crtc *VAR_2, int VAR_3)
{
 struct amdgpu_crtc *VAR_4 = FUNC_3(VAR_2);
 struct drm_device *VAR_5 = VAR_2->dev;
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 int VAR_7 = FUNC_0(VAR_0, VAR_1);
 ENABLE_CRTC_PS_ALLOCATION VAR_8;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.ucCRTC = VAR_4->crtc_id;
 VAR_8.ucEnable = VAR_3;

 FUNC_1(VAR_6->mode_info.atom_context, VAR_7, (uint32_t *)&VAR_8);
}
