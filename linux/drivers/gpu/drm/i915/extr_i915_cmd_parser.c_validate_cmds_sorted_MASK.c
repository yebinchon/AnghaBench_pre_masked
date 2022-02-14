
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_engine_cs {int id; int name; } ;
struct drm_i915_cmd_table {int count; struct drm_i915_cmd_descriptor* table; } ;
struct TYPE_2__ {scalar_t__ value; scalar_t__ mask; } ;
struct drm_i915_cmd_descriptor {TYPE_1__ cmd; } ;


 int FUNC_0 (char*,int ,int ,int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct intel_engine_cs *VAR_0,
     const struct drm_i915_cmd_table *VAR_1,
     int VAR_2)
{
 int VAR_3;
 bool VAR_4 = 1;

 if (!VAR_1 || VAR_2 == 0)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  const struct drm_i915_cmd_table *VAR_5 = &VAR_1[VAR_3];
  u32 VAR_6 = 0;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++) {
   const struct drm_i915_cmd_descriptor *VAR_8 =
    &VAR_5->table[VAR_7];
   u32 VAR_9 = VAR_8->cmd.value & VAR_8->cmd.mask;

   if (VAR_9 < VAR_6) {
    FUNC_0("CMD: %s [%d] command table not sorted: "
       "table=%d entry=%d cmd=0x%08X prev=0x%08X\n",
       VAR_0->name, VAR_0->id,
       VAR_3, VAR_7, VAR_9, VAR_6);
    VAR_4 = 0;
   }

   VAR_6 = VAR_9;
  }
 }

 return VAR_4;
}
