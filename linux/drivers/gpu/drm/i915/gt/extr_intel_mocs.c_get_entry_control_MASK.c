
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_mocs_table {TYPE_1__* table; } ;
struct TYPE_2__ {int control_value; scalar_t__ used; } ;


 size_t VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct drm_i915_mocs_table *VAR_1,
        unsigned int VAR_2)
{
 if (VAR_1->table[VAR_2].used)
  return VAR_1->table[VAR_2].control_value;

 return VAR_1->table[VAR_0].control_value;
}
