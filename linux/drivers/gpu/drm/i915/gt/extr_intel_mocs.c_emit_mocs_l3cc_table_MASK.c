
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i915_request {int dummy; } ;
struct drm_i915_mocs_table {int size; int n_entries; TYPE_1__* table; } ;
struct TYPE_2__ {int l3cc_value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_mocs_table const*,int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct i915_request*,int *) ;
 int * FUNC_8 (struct i915_request*,int) ;
 void* FUNC_9 (struct drm_i915_mocs_table const*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct i915_request *VAR_3,
    const struct drm_i915_mocs_table *VAR_4)
{
 u16 VAR_5;
 unsigned int VAR_6;
 u32 *VAR_7;

 if (FUNC_0(VAR_4->size > VAR_4->n_entries))
  return -VAR_0;


 VAR_5 = VAR_4->table[VAR_1].l3cc_value;

 VAR_7 = FUNC_8(VAR_3, 2 + VAR_4->n_entries);
 if (FUNC_2(VAR_7))
  return FUNC_4(VAR_7);

 *VAR_7++ = FUNC_3(VAR_4->n_entries / 2);

 for (VAR_6 = 0; VAR_6 < VAR_4->size / 2; VAR_6++) {
  u16 VAR_8 = FUNC_5(VAR_4, 2 * VAR_6);
  u16 VAR_9 = FUNC_5(VAR_4, 2 * VAR_6 + 1);

  *VAR_7++ = FUNC_6(FUNC_1(VAR_6));
  *VAR_7++ = FUNC_9(VAR_4, VAR_8, VAR_9);
 }


 if (VAR_4->size & 0x01) {
  u16 VAR_10 = FUNC_5(VAR_4, 2 * VAR_6);

  *VAR_7++ = FUNC_6(FUNC_1(VAR_6));
  *VAR_7++ = FUNC_9(VAR_4, VAR_10, VAR_5);
  VAR_6++;
 }


 for (; VAR_6 < VAR_4->n_entries / 2; VAR_6++) {
  *VAR_7++ = FUNC_6(FUNC_1(VAR_6));
  *VAR_7++ = FUNC_9(VAR_4, VAR_5, VAR_5);
 }

 *VAR_7++ = VAR_2;
 FUNC_7(VAR_3, VAR_7);

 return 0;
}
