
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_mode_info {scalar_t__* crtcs; } ;
struct radeon_device {int num_crtc; struct radeon_mode_info mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct igp_power_info {int refresh_rate; scalar_t__ crtc_id; } ;
struct TYPE_2__ {scalar_t__ vtotal; scalar_t__ htotal; } ;
struct drm_crtc {TYPE_1__ mode; scalar_t__ enabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct igp_power_info* FUNC_1 (struct radeon_device*) ;
 struct radeon_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0)
{
 struct igp_power_info *VAR_1 = FUNC_1(VAR_0);
 struct radeon_mode_info *VAR_2 = &VAR_0->mode_info;
 struct drm_crtc *VAR_3;
 struct radeon_crtc *VAR_4;
 int VAR_5;


 VAR_1->crtc_id = 0;
 VAR_1->refresh_rate = 60;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_crtc; VAR_5++) {
  VAR_3 = (struct drm_crtc *)VAR_2->crtcs[VAR_5];
  if (VAR_3 && VAR_3->enabled) {
   VAR_4 = FUNC_2(VAR_3);
   VAR_1->crtc_id = VAR_4->crtc_id;
   if (VAR_3->mode.htotal && VAR_3->mode.vtotal)
    VAR_1->refresh_rate = FUNC_0(&VAR_3->mode);
   break;
  }
 }
}
