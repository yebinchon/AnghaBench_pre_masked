
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int support; } ;
struct drm_psb_private {int lvds_enabled_in_vbt; int dplla_96mhz; TYPE_1__ edp; } ;
struct bdb_header {int dummy; } ;
struct bdb_driver_features {scalar_t__ lvds_config; scalar_t__ primary_lfp_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 struct bdb_driver_features* FUNC_1 (struct bdb_header*,int ) ;

__attribute__((used)) static void
FUNC_2(struct drm_psb_private *VAR_2,
        struct bdb_header *VAR_3)
{
 struct bdb_driver_features *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return;

 if (VAR_4->lvds_config == VAR_1)
  VAR_2->edp.support = 1;

 VAR_2->lvds_enabled_in_vbt = VAR_4->lvds_config != 0;
 FUNC_0("LVDS VBT config bits: 0x%x\n", VAR_4->lvds_config);


 if (VAR_4->primary_lfp_id)
  VAR_2->dplla_96mhz = 1;
 else
  VAR_2->dplla_96mhz = 0;
}
