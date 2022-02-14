
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ supported; } ;
struct TYPE_5__ {TYPE_1__ scdc; } ;
struct TYPE_6__ {int color_formats; TYPE_2__ hdmi; } ;
struct drm_connector {TYPE_3__ display_info; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct drm_connector *VAR_1)
{




 if (!VAR_1)
  return 1;

 return VAR_1->display_info.hdmi.scdc.supported ||
  VAR_1->display_info.color_formats & VAR_0;
}
