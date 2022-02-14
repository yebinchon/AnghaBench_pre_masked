
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_ppgtt {struct i915_page_directory* pd; } ;
struct i915_page_directory {int dummy; } ;
struct i915_address_space {int top; } ;


 int FUNC_0 (int const,int) ;
 struct i915_page_directory* FUNC_1 (struct i915_page_directory*,int ) ;
 struct i915_ppgtt* FUNC_2 (struct i915_address_space* const) ;

__attribute__((used)) static inline struct i915_page_directory *
FUNC_3(struct i915_address_space * const VAR_0, const u64 VAR_1)
{
 struct i915_ppgtt * const VAR_2 = FUNC_2(VAR_0);

 if (VAR_0->top == 2)
  return VAR_2->pd;
 else
  return FUNC_1(VAR_2->pd, FUNC_0(VAR_1, VAR_0->top));
}
