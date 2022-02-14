
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enable; } ;
struct TYPE_4__ {TYPE_1__ psr; int drrs_type; scalar_t__ int_lvds_support; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bdb_header {int version; } ;
struct bdb_driver_features {scalar_t__ lvds_config; int psr_enabled; int drrs_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct bdb_driver_features* FUNC_2 (struct bdb_header const*,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_4,
        const struct bdb_header *VAR_5)
{
 const struct bdb_driver_features *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_6)
  return;

 if (FUNC_1(VAR_4) >= 5) {





  if (VAR_6->lvds_config != VAR_1)
   VAR_4->vbt.int_lvds_support = 0;
 } else {
  if (VAR_5->version >= 134 &&
      VAR_6->lvds_config != VAR_1 &&
      VAR_6->lvds_config != VAR_2)
   VAR_4->vbt.int_lvds_support = 0;
 }

 FUNC_0("DRRS State Enabled:%d\n", VAR_6->drrs_enabled);






 if (!VAR_6->drrs_enabled)
  VAR_4->vbt.drrs_type = VAR_3;
 VAR_4->vbt.psr.enable = VAR_6->psr_enabled;
}
