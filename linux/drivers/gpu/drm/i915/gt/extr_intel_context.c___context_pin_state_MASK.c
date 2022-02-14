
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct i915_vma {TYPE_2__* obj; } ;
struct TYPE_3__ {int dirty; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_vma*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i915_vma *VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3) | VAR_2;
 VAR_4 |= VAR_1 | VAR_0;

 VAR_5 = FUNC_2(VAR_3, 0, 0, VAR_4);
 if (VAR_5)
  return VAR_5;





 FUNC_1(VAR_3);
 VAR_3->obj->mm.dirty = 1;

 return 0;
}
