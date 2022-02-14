
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct hibmc_drm_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct hibmc_drm_private*,unsigned int) ;
 int FUNC_4 (struct hibmc_drm_private*,int ) ;
 unsigned int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_4,
         struct drm_crtc_state *VAR_5)
{
 unsigned int VAR_6;
 struct hibmc_drm_private *VAR_7 = VAR_4->dev->dev_private;

 FUNC_4(VAR_7, VAR_3);


 VAR_6 = FUNC_5(VAR_7->mmio + VAR_0);
 VAR_6 &= ~VAR_2;
 VAR_6 &= ~VAR_1;
 VAR_6 |= FUNC_1(1);
 VAR_6 |= FUNC_0(1);
 FUNC_3(VAR_7, VAR_6);
 FUNC_2(VAR_4);
}
