
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct nouveau_crtc {int index; } ;
struct drm_device {int dummy; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ,int) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*,int ,int ,int ) ;
 int FUNC_4 (struct drm_device*,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct drm_crtc*) ;
 struct nouveau_crtc* FUNC_6 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_crtc*,int ) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct nouveau_drm *VAR_7 = FUNC_7(VAR_6);
 struct nouveau_crtc *VAR_8 = FUNC_6(VAR_5);
 const struct drm_crtc_helper_funcs *VAR_9 = VAR_5->helper_private;

 if (FUNC_8(VAR_6))
  FUNC_2(VAR_6, VAR_8->index);

 FUNC_5(VAR_5);
 VAR_9->dpms(VAR_5, VAR_0);

 FUNC_0(VAR_6, VAR_8->index, 1);


 FUNC_3(VAR_6, VAR_8->index, VAR_2, VAR_3);
 if (VAR_7->client.device.info.family == VAR_1) {
  uint32_t VAR_10 = FUNC_1(VAR_6, VAR_8->index, VAR_4);
  FUNC_4(VAR_6, VAR_8->index, VAR_4, VAR_10 & ~0x10000);
 }
}
