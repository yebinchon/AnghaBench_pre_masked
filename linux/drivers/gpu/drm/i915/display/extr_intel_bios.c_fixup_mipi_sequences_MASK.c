
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {int seq_version; size_t** sequence; size_t* deassert_seq; TYPE_1__* config; } ;
struct TYPE_6__ {TYPE_2__ dsi; } ;
struct drm_i915_private {TYPE_3__ vbt; } ;
struct TYPE_4__ {scalar_t__ is_cmd_mode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (struct drm_i915_private*) ;
 size_t* FUNC_3 (size_t*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_5)
{
 u8 *VAR_6;
 int VAR_7;


 if (!FUNC_1(VAR_5))
  return;


 if (VAR_5->vbt.dsi.config->is_cmd_mode ||
     VAR_5->vbt.dsi.seq_version != 1)
  return;


 if (!VAR_5->vbt.dsi.sequence[VAR_4] ||
     !VAR_5->vbt.dsi.sequence[VAR_1] ||
     VAR_5->vbt.dsi.sequence[VAR_2])
  return;


 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return;

 FUNC_0("Using init OTP fragment to deassert reset\n");


 VAR_6 = (u8 *)VAR_5->vbt.dsi.sequence[VAR_4];
 VAR_5->vbt.dsi.deassert_seq = FUNC_3(VAR_6, VAR_7 + 1, VAR_0);
 if (!VAR_5->vbt.dsi.deassert_seq)
  return;
 VAR_5->vbt.dsi.deassert_seq[0] = VAR_2;
 VAR_5->vbt.dsi.deassert_seq[VAR_7] = VAR_3;

 VAR_5->vbt.dsi.sequence[VAR_2] =
  VAR_5->vbt.dsi.deassert_seq;

 VAR_6[VAR_7 - 1] = VAR_4;

 VAR_5->vbt.dsi.sequence[VAR_4] = VAR_6 + VAR_7 - 1;
}
