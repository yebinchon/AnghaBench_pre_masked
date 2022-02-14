
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int soft_max_level; int soft_min_level; int hard_min_level; } ;
struct vega20_single_dpm_table {TYPE_2__ dpm_state; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table dcef_table; struct vega20_single_dpm_table fclk_table; struct vega20_single_dpm_table soc_table; struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct TYPE_3__ {struct vega20_dpm_table* dpm_context; } ;
struct smu_context {TYPE_1__ smu_dpm; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct smu_context*,int ) ;
 int FUNC_2 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_18, bool VAR_19,
       uint32_t VAR_20)
{
 struct vega20_dpm_table *VAR_21;
 struct vega20_single_dpm_table *VAR_22;
 uint32_t VAR_23;
 int VAR_24 = 0;

 VAR_21 = VAR_18->smu_dpm.dpm_context;

 if (FUNC_1(VAR_18, VAR_12) &&
     (VAR_20 & VAR_2)) {
  VAR_22 = &(VAR_21->gfx_table);
  VAR_23 = VAR_19 ? VAR_22->dpm_state.soft_max_level :
   VAR_22->dpm_state.soft_min_level;
  VAR_24 = FUNC_2(VAR_18,
   (VAR_19 ? VAR_16 : VAR_17),
   (VAR_7 << 16) | (VAR_23 & 0xffff));
  if (VAR_24) {
   FUNC_0("Failed to set soft %s gfxclk !\n",
      VAR_19 ? "max" : "min");
   return VAR_24;
  }
 }

 if (FUNC_1(VAR_18, VAR_14) &&
     (VAR_20 & VAR_4)) {
  VAR_22 = &(VAR_21->mem_table);
  VAR_23 = VAR_19 ? VAR_22->dpm_state.soft_max_level :
   VAR_22->dpm_state.soft_min_level;
  VAR_24 = FUNC_2(VAR_18,
   (VAR_19 ? VAR_16 : VAR_17),
   (VAR_9 << 16) | (VAR_23 & 0xffff));
  if (VAR_24) {
   FUNC_0("Failed to set soft %s memclk !\n",
      VAR_19 ? "max" : "min");
   return VAR_24;
  }
 }

 if (FUNC_1(VAR_18, VAR_13) &&
     (VAR_20 & VAR_3)) {
  VAR_22 = &(VAR_21->soc_table);
  VAR_23 = VAR_19 ? VAR_22->dpm_state.soft_max_level :
   VAR_22->dpm_state.soft_min_level;
  VAR_24 = FUNC_2(VAR_18,
   (VAR_19 ? VAR_16 : VAR_17),
   (VAR_8 << 16) | (VAR_23 & 0xffff));
  if (VAR_24) {
   FUNC_0("Failed to set soft %s socclk !\n",
      VAR_19 ? "max" : "min");
   return VAR_24;
  }
 }

 if (FUNC_1(VAR_18, VAR_11) &&
     (VAR_20 & VAR_1)) {
  VAR_22 = &(VAR_21->fclk_table);
  VAR_23 = VAR_19 ? VAR_22->dpm_state.soft_max_level :
   VAR_22->dpm_state.soft_min_level;
  VAR_24 = FUNC_2(VAR_18,
   (VAR_19 ? VAR_16 : VAR_17),
   (VAR_6 << 16) | (VAR_23 & 0xffff));
  if (VAR_24) {
   FUNC_0("Failed to set soft %s fclk !\n",
      VAR_19 ? "max" : "min");
   return VAR_24;
  }
 }

 if (FUNC_1(VAR_18, VAR_10) &&
     (VAR_20 & VAR_0)) {
  VAR_22 = &(VAR_21->dcef_table);
  VAR_23 = VAR_22->dpm_state.hard_min_level;
  if (!VAR_19) {
   VAR_24 = FUNC_2(VAR_18,
    VAR_15,
    (VAR_5 << 16) | (VAR_23 & 0xffff));
   if (VAR_24) {
    FUNC_0("Failed to set hard min dcefclk !\n");
    return VAR_24;
   }
  }
 }

 return VAR_24;
}
