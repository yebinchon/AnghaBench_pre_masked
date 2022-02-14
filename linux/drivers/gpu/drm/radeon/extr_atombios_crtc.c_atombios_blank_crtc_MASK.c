
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct radeon_crtc {size_t crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int args ;
struct TYPE_5__ {size_t ucCRTC; int ucBlanking; } ;
typedef TYPE_2__ BLANK_CRTC_PS_ALLOCATION ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 struct radeon_crtc* FUNC_6 (struct drm_crtc*) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_3, int VAR_4)
{
 struct radeon_crtc *VAR_5 = FUNC_6(VAR_3);
 struct drm_device *VAR_6 = VAR_3->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 int VAR_8 = FUNC_1(VAR_1, VAR_0);
 BLANK_CRTC_PS_ALLOCATION VAR_9;
 u32 VAR_10 = 0;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));

 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_2(VAR_2[VAR_5->crtc_id]);
  FUNC_3(VAR_2[VAR_5->crtc_id], VAR_10 | 1);
 }

 VAR_9.ucCRTC = VAR_5->crtc_id;
 VAR_9.ucBlanking = VAR_4;

 FUNC_4(VAR_7->mode_info.atom_context, VAR_8, (uint32_t *)&VAR_9);

 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_2[VAR_5->crtc_id], VAR_10);
 }
}
