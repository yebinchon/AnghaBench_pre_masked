
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int low_rates; int supported; } ;
struct TYPE_8__ {TYPE_2__ scrambling; int supported; } ;
struct TYPE_7__ {TYPE_4__ scdc; } ;
struct drm_display_info {int max_tmds_clock; TYPE_3__ hdmi; } ;
struct TYPE_5__ {struct drm_display_info display_info; } ;
struct dw_hdmi {int version; int ddc; TYPE_1__ connector; } ;



__attribute__((used)) static bool FUNC_0(struct dw_hdmi *VAR_0)
{
 struct drm_display_info *VAR_1 = &VAR_0->connector.display_info;


 if (VAR_0->version < 0x200a)
  return 0;


 if (!VAR_0->ddc)
  return 0;


 if (!VAR_1->hdmi.scdc.supported ||
     !VAR_1->hdmi.scdc.scrambling.supported)
  return 0;





 if (!VAR_1->hdmi.scdc.scrambling.low_rates &&
     VAR_1->max_tmds_clock <= 340000)
  return 0;

 return 1;
}
