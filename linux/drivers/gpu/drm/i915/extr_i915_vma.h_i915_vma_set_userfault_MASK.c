
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct i915_vma*) ;

__attribute__((used)) static inline bool FUNC_3(struct i915_vma *VAR_1)
{
 FUNC_0(!FUNC_2(VAR_1));
 return FUNC_1(VAR_0, &VAR_1->flags);
}
