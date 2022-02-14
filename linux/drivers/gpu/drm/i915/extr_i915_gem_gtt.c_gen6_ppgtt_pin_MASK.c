
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_ppgtt {int dummy; } ;
struct TYPE_3__ {int closed; } ;
struct TYPE_4__ {TYPE_1__ vm; } ;
struct gen6_ppgtt {scalar_t__ pin_count; int vma; TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct gen6_ppgtt* FUNC_2 (struct i915_ppgtt*) ;

int FUNC_3(struct i915_ppgtt *VAR_3)
{
 struct gen6_ppgtt *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_0(VAR_4->base.vm.closed);







 if (VAR_4->pin_count++)
  return 0;






 VAR_5 = FUNC_1(VAR_4->vma,
      0, VAR_0,
      VAR_1 | VAR_2);
 if (VAR_5)
  goto unpin;

 return 0;

unpin:
 VAR_4->pin_count = 0;
 return VAR_5;
}
