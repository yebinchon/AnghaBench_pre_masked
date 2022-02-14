
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_device {struct hibmc_drm_private* dev_private; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct hibmc_drm_private*,unsigned int) ;
 int FUNC_3 (struct hibmc_drm_private*,int ) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_4,
        struct drm_crtc_state *VAR_5)
{
 unsigned int VAR_6;
 struct drm_device *VAR_7 = VAR_4->dev;
 struct hibmc_drm_private *VAR_8 = VAR_7->dev_private;

 FUNC_3(VAR_8, VAR_3);


 VAR_6 = FUNC_4(VAR_8->mmio + VAR_0);
 VAR_6 &= ~VAR_1;
 VAR_6 &= ~VAR_2;
 VAR_6 |= FUNC_0(1);
 VAR_6 |= FUNC_1(1);
 FUNC_2(VAR_8, VAR_6);


}
