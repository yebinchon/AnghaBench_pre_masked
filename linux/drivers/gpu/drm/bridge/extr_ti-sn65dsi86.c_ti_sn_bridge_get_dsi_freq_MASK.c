
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {TYPE_3__* encoder; } ;
struct ti_sn_bridge {TYPE_5__* dsi; TYPE_4__ bridge; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_10__ {int lanes; int format; } ;
struct TYPE_8__ {TYPE_2__* crtc; } ;
struct TYPE_7__ {TYPE_1__* state; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct ti_sn_bridge *VAR_0)
{
 u32 VAR_1, VAR_2;
 struct drm_display_mode *VAR_3 =
  &VAR_0->bridge.encoder->crtc->state->adjusted_mode;

 VAR_1 = VAR_3->clock *
   FUNC_0(VAR_0->dsi->format);
 VAR_2 = VAR_1 / (VAR_0->dsi->lanes * 2);

 return VAR_2;
}
