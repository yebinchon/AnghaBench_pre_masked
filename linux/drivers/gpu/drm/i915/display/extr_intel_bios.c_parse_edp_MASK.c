
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct edp_power_seq {int dummy; } ;
struct edp_fast_link_params {int rate; int lanes; int preemphasis; int vswing; } ;
struct TYPE_4__ {int bpp; int lanes; int low_vswing; int vswing; int preemphasis; int rate; struct edp_power_seq pps; } ;
struct TYPE_5__ {int panel_type; TYPE_1__ edp; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bdb_header {int version; } ;
struct bdb_edp {int color_depth; int edp_vswing_preemph; struct edp_fast_link_params* fast_link_params; struct edp_power_seq* power_seqs; } ;
struct TYPE_6__ {int edp_vswing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int) ;
 struct bdb_edp* FUNC_1 (struct bdb_header const*,int ) ;
 TYPE_3__ VAR_11 ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_private *VAR_12, const struct bdb_header *VAR_13)
{
 const struct bdb_edp *VAR_14;
 const struct edp_power_seq *VAR_15;
 const struct edp_fast_link_params *VAR_16;
 int VAR_17 = VAR_12->vbt.panel_type;

 VAR_14 = FUNC_1(VAR_13, VAR_0);
 if (!VAR_14)
  return;

 switch ((VAR_14->color_depth >> (VAR_17 * 2)) & 3) {
 case 143:
  VAR_12->vbt.edp.bpp = 18;
  break;
 case 142:
  VAR_12->vbt.edp.bpp = 24;
  break;
 case 141:
  VAR_12->vbt.edp.bpp = 30;
  break;
 }


 VAR_15 = &VAR_14->power_seqs[VAR_17];
 VAR_16 = &VAR_14->fast_link_params[VAR_17];

 VAR_12->vbt.edp.pps = *VAR_15;

 switch (VAR_16->rate) {
 case 133:
  VAR_12->vbt.edp.rate = VAR_1;
  break;
 case 132:
  VAR_12->vbt.edp.rate = VAR_2;
  break;
 default:
  FUNC_0("VBT has unknown eDP link rate value %u\n",
         VAR_16->rate);
  break;
 }

 switch (VAR_16->lanes) {
 case 140:
  VAR_12->vbt.edp.lanes = 1;
  break;
 case 139:
  VAR_12->vbt.edp.lanes = 2;
  break;
 case 138:
  VAR_12->vbt.edp.lanes = 4;
  break;
 default:
  FUNC_0("VBT has unknown eDP lane count value %u\n",
         VAR_16->lanes);
  break;
 }

 switch (VAR_16->preemphasis) {
 case 134:
  VAR_12->vbt.edp.preemphasis = VAR_3;
  break;
 case 137:
  VAR_12->vbt.edp.preemphasis = VAR_4;
  break;
 case 136:
  VAR_12->vbt.edp.preemphasis = VAR_5;
  break;
 case 135:
  VAR_12->vbt.edp.preemphasis = VAR_6;
  break;
 default:
  FUNC_0("VBT has unknown eDP pre-emphasis value %u\n",
         VAR_16->preemphasis);
  break;
 }

 switch (VAR_16->vswing) {
 case 131:
  VAR_12->vbt.edp.vswing = VAR_7;
  break;
 case 130:
  VAR_12->vbt.edp.vswing = VAR_8;
  break;
 case 129:
  VAR_12->vbt.edp.vswing = VAR_9;
  break;
 case 128:
  VAR_12->vbt.edp.vswing = VAR_10;
  break;
 default:
  FUNC_0("VBT has unknown eDP voltage swing value %u\n",
         VAR_16->vswing);
  break;
 }

 if (VAR_13->version >= 173) {
  u8 VAR_18;


  if (VAR_11.edp_vswing) {
   VAR_12->vbt.edp.low_vswing =
    VAR_11.edp_vswing == 1;
  } else {
   VAR_18 = (VAR_14->edp_vswing_preemph >> (VAR_17 * 4)) & 0xF;
   VAR_12->vbt.edp.low_vswing = VAR_18 == 0;
  }
 }
}
