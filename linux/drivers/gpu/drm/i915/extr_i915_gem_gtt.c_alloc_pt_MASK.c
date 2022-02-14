
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_table {int used; int base; } ;
struct i915_address_space {int dummy; } ;


 int VAR_0 ;
 struct i915_page_table* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct i915_page_table*) ;
 struct i915_page_table* FUNC_3 (int,int ) ;
 int FUNC_4 (struct i915_address_space*,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct i915_page_table *FUNC_6(struct i915_address_space *VAR_2)
{
 struct i915_page_table *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (FUNC_5(!VAR_3))
  return FUNC_0(-VAR_0);

 if (FUNC_5(FUNC_4(VAR_2, &VAR_3->base))) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 FUNC_1(&VAR_3->used, 0);
 return VAR_3;
}
