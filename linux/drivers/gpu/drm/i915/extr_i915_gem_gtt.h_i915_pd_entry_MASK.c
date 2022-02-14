
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_directory {struct i915_page_directory** entry; } ;



__attribute__((used)) static inline struct i915_page_directory *
FUNC_0(const struct i915_page_directory * const VAR_0,
       const unsigned short VAR_1)
{
 return VAR_0->entry[VAR_1];
}
