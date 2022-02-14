
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder {int active_device; } ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ mode_info; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;
struct TYPE_5__ {int ucCRTC; int ucEnable; } ;
typedef TYPE_2__ ENABLE_YUV_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 struct radeon_crtc* FUNC_5 (int ) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_7(struct drm_encoder *VAR_10, bool VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;
 struct radeon_encoder *VAR_14 = FUNC_6(VAR_10);
 struct radeon_crtc *VAR_15 = FUNC_5(VAR_10->crtc);
 ENABLE_YUV_PS_ALLOCATION VAR_16;
 int VAR_17 = FUNC_0(VAR_6, VAR_7);
 uint32_t VAR_18, VAR_19;

 FUNC_4(&VAR_16, 0, sizeof(VAR_16));

 if (VAR_13->family >= VAR_5)
  VAR_19 = VAR_8;
 else
  VAR_19 = VAR_9;


 VAR_18 = FUNC_1(VAR_19);
 if (VAR_14->active_device & (VAR_1))
  FUNC_2(VAR_19, (VAR_4 |
        (VAR_15->crtc_id << 18)));
 else if (VAR_14->active_device & (VAR_0))
  FUNC_2(VAR_19, (VAR_3 | (VAR_15->crtc_id << 24)));
 else
  FUNC_2(VAR_19, 0);

 if (VAR_11)
  VAR_16.ucEnable = VAR_2;
 VAR_16.ucCRTC = VAR_15->crtc_id;

 FUNC_3(VAR_13->mode_info.atom_context, VAR_17, (uint32_t *)&VAR_16);

 FUNC_2(VAR_19, VAR_18);
}
