
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_page_directory {int dummy; } ;
struct i915_address_space {int dummy; } ;


 int const VAR_0 ;
 struct i915_page_directory* FUNC_0 (struct i915_address_space* const,int const) ;

__attribute__((used)) static inline struct i915_page_directory *
FUNC_1(struct i915_address_space * const VAR_1, const u64 VAR_2)
{
 return FUNC_0(VAR_1, VAR_2 >> VAR_0);
}
