
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {struct arcturus_dpm_table* dpm_context; } ;
struct smu_context {TYPE_1__ smu_dpm; } ;
struct TYPE_4__ {int soft_max_level; int soft_min_level; } ;
struct arcturus_single_dpm_table {TYPE_2__ dpm_state; } ;
struct arcturus_dpm_table {struct arcturus_single_dpm_table soc_table; struct arcturus_single_dpm_table mem_table; struct arcturus_single_dpm_table gfx_table; } ;


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
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct smu_context*,int ) ;
 int FUNC_2 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_11, bool VAR_12,
         uint32_t VAR_13)
{
 struct arcturus_single_dpm_table *VAR_14;
 struct arcturus_dpm_table *VAR_15 =
   VAR_11->smu_dpm.dpm_context;
 uint32_t VAR_16;
 int VAR_17 = 0;

 if (FUNC_1(VAR_11, VAR_6) &&
     (VAR_13 & VAR_0)) {
  VAR_14 = &(VAR_15->gfx_table);
  VAR_16 = VAR_12 ? VAR_14->dpm_state.soft_max_level :
   VAR_14->dpm_state.soft_min_level;
  VAR_17 = FUNC_2(VAR_11,
   (VAR_12 ? VAR_9 : VAR_10),
   (VAR_3 << 16) | (VAR_16 & 0xffff));
  if (VAR_17) {
   FUNC_0("Failed to set soft %s gfxclk !\n",
      VAR_12 ? "max" : "min");
   return VAR_17;
  }
 }

 if (FUNC_1(VAR_11, VAR_8) &&
     (VAR_13 & VAR_2)) {
  VAR_14 = &(VAR_15->mem_table);
  VAR_16 = VAR_12 ? VAR_14->dpm_state.soft_max_level :
   VAR_14->dpm_state.soft_min_level;
  VAR_17 = FUNC_2(VAR_11,
   (VAR_12 ? VAR_9 : VAR_10),
   (VAR_5 << 16) | (VAR_16 & 0xffff));
  if (VAR_17) {
   FUNC_0("Failed to set soft %s memclk !\n",
      VAR_12 ? "max" : "min");
   return VAR_17;
  }
 }

 if (FUNC_1(VAR_11, VAR_7) &&
     (VAR_13 & VAR_1)) {
  VAR_14 = &(VAR_15->soc_table);
  VAR_16 = VAR_12 ? VAR_14->dpm_state.soft_max_level :
   VAR_14->dpm_state.soft_min_level;
  VAR_17 = FUNC_2(VAR_11,
   (VAR_12 ? VAR_9 : VAR_10),
   (VAR_4 << 16) | (VAR_16 & 0xffff));
  if (VAR_17) {
   FUNC_0("Failed to set soft %s socclk !\n",
      VAR_12 ? "max" : "min");
   return VAR_17;
  }
 }

 return VAR_17;
}
