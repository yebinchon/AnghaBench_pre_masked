
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {int cmd_hash; } ;
struct drm_i915_cmd_table {int count; struct drm_i915_cmd_descriptor* table; } ;
struct TYPE_2__ {int value; } ;
struct drm_i915_cmd_descriptor {TYPE_1__ cmd; } ;
struct cmd_node {int node; struct drm_i915_cmd_descriptor const* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 struct cmd_node* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_engine_cs *VAR_2,
      const struct drm_i915_cmd_table *VAR_3,
      int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_2(VAR_2->cmd_hash);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  const struct drm_i915_cmd_table *VAR_7 = &VAR_3[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_7->count; VAR_6++) {
   const struct drm_i915_cmd_descriptor *VAR_8 =
    &VAR_7->table[VAR_6];
   struct cmd_node *VAR_9 =
    FUNC_3(sizeof(*VAR_9), VAR_1);

   if (!VAR_9)
    return -VAR_0;

   VAR_9->desc = VAR_8;
   FUNC_1(VAR_2->cmd_hash, &VAR_9->node,
     FUNC_0(VAR_8->cmd.value));
  }
 }

 return 0;
}
