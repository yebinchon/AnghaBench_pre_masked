
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int subpixel_order; } ;
struct drm_connector {int interlace_allowed; TYPE_2__ display_info; scalar_t__ doublescan_allowed; int connector_type; } ;
struct TYPE_7__ {int get_hw_state; struct drm_connector base; } ;
struct intel_sdvo_connector {TYPE_3__ base; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_4__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,int *) ;
 int FUNC_1 (int ,struct drm_connector*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct intel_sdvo_connector *VAR_4,
     struct intel_sdvo *VAR_5)
{
 struct drm_connector *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_4->base.base;
 VAR_7 = FUNC_1(VAR_5->base.base.dev,
      VAR_6,
      &VAR_1,
      VAR_4->base.base.connector_type);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_6,
     &VAR_3);

 VAR_4->base.base.interlace_allowed = 1;
 VAR_4->base.base.doublescan_allowed = 0;
 VAR_4->base.base.display_info.subpixel_order = VAR_0;
 VAR_4->base.get_hw_state = VAR_2;

 FUNC_2(&VAR_4->base, &VAR_5->base);

 return 0;
}
