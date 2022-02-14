
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane_state {int flags; int vma; } ;
struct i915_vma {int dummy; } ;


 struct i915_vma* FUNC_0 (int *) ;
 int FUNC_1 (struct i915_vma*,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_plane_state *VAR_0)
{
 struct i915_vma *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->vma);
 if (VAR_1)
  FUNC_1(VAR_1, VAR_0->flags);
}
