
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int start; } ;
struct i915_vma {TYPE_1__ node; int pages; } ;
struct i915_address_space {int dummy; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct i915_address_space *VAR_4,
         struct i915_vma *VAR_5,
         enum i915_cache_level VAR_6,
         u32 VAR_7)
{
 unsigned int VAR_8 = (VAR_6 == VAR_2) ?
  VAR_1 : VAR_0;

 FUNC_0(VAR_5->pages, VAR_5->node.start >> VAR_3,
        VAR_8);
}
