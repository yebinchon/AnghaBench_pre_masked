
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_encoder {int rmx_type; int base; } ;
struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_helper_funcs {scalar_t__ (* best_encoder ) (struct drm_connector*) ;} ;
struct drm_connector {struct drm_connector_helper_funcs* helper_private; scalar_t__ encoder; struct drm_device* dev; } ;
typedef enum radeon_rmx_type { ____Placeholder_radeon_rmx_type } radeon_rmx_type ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_4,
        struct drm_property *VAR_5,
        uint64_t VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->dev;
 struct radeon_encoder *VAR_8;
 enum radeon_rmx_type VAR_9;

 FUNC_0("\n");
 if (VAR_5 != VAR_7->mode_config.scaling_mode_property)
  return 0;

 if (VAR_4->encoder)
  VAR_8 = FUNC_3(VAR_4->encoder);
 else {
  const struct drm_connector_helper_funcs *VAR_10 = VAR_4->helper_private;
  VAR_8 = FUNC_3(VAR_10->best_encoder(VAR_4));
 }

 switch (VAR_6) {
 case 128: VAR_9 = VAR_3; break;
 case 130: VAR_9 = VAR_1; break;
 case 131: VAR_9 = VAR_0; break;
 default:
 case 129: VAR_9 = VAR_2; break;
 }
 if (VAR_8->rmx_type == VAR_9)
  return 0;

 VAR_8->rmx_type = VAR_9;

 FUNC_1(&VAR_8->base);
 return 0;
}
