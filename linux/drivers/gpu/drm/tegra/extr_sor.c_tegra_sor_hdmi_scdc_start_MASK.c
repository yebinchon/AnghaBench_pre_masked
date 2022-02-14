
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_7__* crtc; } ;
struct drm_scdc {scalar_t__ supported; } ;
struct TYPE_8__ {struct drm_scdc scdc; } ;
struct TYPE_9__ {TYPE_1__ hdmi; } ;
struct TYPE_10__ {TYPE_2__ display_info; } ;
struct TYPE_11__ {TYPE_6__ encoder; TYPE_3__ connector; } ;
struct tegra_sor {int scdc_enabled; int scdc; TYPE_4__ output; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_14__ {TYPE_5__* state; } ;
struct TYPE_12__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct tegra_sor*) ;

__attribute__((used)) static void FUNC_3(struct tegra_sor *VAR_0)
{
 struct drm_scdc *VAR_1 = &VAR_0->output.connector.display_info.hdmi.scdc;
 struct drm_display_mode *VAR_2;

 VAR_2 = &VAR_0->output.encoder.crtc->state->adjusted_mode;

 if (VAR_2->clock >= 340000 && VAR_1->supported) {
  FUNC_1(&VAR_0->scdc, FUNC_0(5000));
  FUNC_2(VAR_0);
  VAR_0->scdc_enabled = 1;
 }
}
