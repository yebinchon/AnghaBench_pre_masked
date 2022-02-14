
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct i915_request {TYPE_1__* engine; } ;
struct drm_i915_mocs_table {int size; int n_entries; TYPE_2__* table; } ;
typedef enum intel_engine_id { ____Placeholder_intel_engine_id } intel_engine_id ;
struct TYPE_4__ {void* control_value; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (void**) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (void**) ;
 void* FUNC_4 (struct drm_i915_mocs_table const*,unsigned int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct i915_request*,void**) ;
 void** FUNC_7 (struct i915_request*,int) ;
 int FUNC_8 (int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct i915_request *VAR_3,
       const struct drm_i915_mocs_table *VAR_4)
{
 enum intel_engine_id VAR_5 = VAR_3->engine->id;
 unsigned int VAR_6;
 u32 VAR_7;
 u32 *VAR_8;

 if (FUNC_0(VAR_4->size > VAR_4->n_entries))
  return -VAR_0;


 VAR_7 = VAR_4->table[VAR_1].control_value;

 VAR_8 = FUNC_7(VAR_3, 2 + 2 * VAR_4->n_entries);
 if (FUNC_1(VAR_8))
  return FUNC_3(VAR_8);

 *VAR_8++ = FUNC_2(VAR_4->n_entries);

 for (VAR_6 = 0; VAR_6 < VAR_4->size; VAR_6++) {
  u32 VAR_9 = FUNC_4(VAR_4, VAR_6);

  *VAR_8++ = FUNC_5(FUNC_8(VAR_5, VAR_6));
  *VAR_8++ = VAR_9;
 }


 for (; VAR_6 < VAR_4->n_entries; VAR_6++) {
  *VAR_8++ = FUNC_5(FUNC_8(VAR_5, VAR_6));
  *VAR_8++ = VAR_7;
 }

 *VAR_8++ = VAR_2;
 FUNC_6(VAR_3, VAR_8);

 return 0;
}
