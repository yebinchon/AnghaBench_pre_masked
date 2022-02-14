
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_display_unit {int connector; } ;
struct TYPE_4__ {scalar_t__ crtc_clock; int clock; } ;
struct TYPE_3__ {int crtc_clock; } ;
struct drm_crtc_state {int plane_mask; int enable; int connector_mask; TYPE_2__ mode; TYPE_1__ adjusted_mode; int crtc; } ;
struct drm_crtc {int primary; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct vmw_display_unit* FUNC_3 (int ) ;

int FUNC_4(struct drm_crtc *VAR_1,
        struct drm_crtc_state *VAR_2)
{
 struct vmw_display_unit *VAR_3 = FUNC_3(VAR_2->crtc);
 int VAR_4 = FUNC_1(&VAR_3->connector);
 bool VAR_5 = VAR_2->plane_mask &
      FUNC_2(VAR_1->primary);


 if (VAR_5 != VAR_2->enable)
  return -VAR_0;


 if (VAR_2->connector_mask != VAR_4 &&
     VAR_2->connector_mask != 0) {
  FUNC_0("Invalid connectors configuration\n");
  return -VAR_0;
 }





 if (VAR_2->mode.crtc_clock == 0)
  VAR_2->adjusted_mode.crtc_clock = VAR_2->mode.clock;

 return 0;
}
