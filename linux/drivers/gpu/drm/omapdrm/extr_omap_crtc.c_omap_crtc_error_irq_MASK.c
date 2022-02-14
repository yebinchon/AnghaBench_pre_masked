
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_crtc {int name; scalar_t__ ignore_digit_sync_lost; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 struct omap_crtc* FUNC_1 (struct drm_crtc*) ;

void FUNC_2(struct drm_crtc *VAR_1, u32 VAR_2)
{
 struct omap_crtc *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->ignore_digit_sync_lost) {
  VAR_2 &= ~VAR_0;
  if (!VAR_2)
   return;
 }

 FUNC_0("%s: errors: %08x\n", VAR_3->name, VAR_2);
}
