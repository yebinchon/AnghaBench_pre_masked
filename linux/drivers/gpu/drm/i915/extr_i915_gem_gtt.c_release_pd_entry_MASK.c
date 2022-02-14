
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_table {int used; } ;
struct i915_page_scratch {int dummy; } ;
struct i915_page_directory {int lock; } ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct i915_page_directory* const,unsigned short const,struct i915_page_scratch const* const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5(struct i915_page_directory * const VAR_0,
   const unsigned short VAR_1,
   struct i915_page_table * const VAR_2,
   const struct i915_page_scratch * const VAR_3)
{
 bool VAR_4 = 0;

 if (FUNC_0(&VAR_2->used, -1, 1))
  return 0;

 FUNC_3(&VAR_0->lock);
 if (FUNC_1(&VAR_2->used)) {
  FUNC_2(VAR_0, VAR_1, VAR_3);
  VAR_4 = 1;
 }
 FUNC_4(&VAR_0->lock);

 return VAR_4;
}
