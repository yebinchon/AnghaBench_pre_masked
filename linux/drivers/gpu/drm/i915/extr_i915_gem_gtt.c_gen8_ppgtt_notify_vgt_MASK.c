
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {struct drm_i915_private* i915; } ;
struct i915_ppgtt {int pd; TYPE_3__ vm; } ;
struct TYPE_4__ {int lock; } ;
struct drm_i915_private {TYPE_1__ vgpu; } ;
typedef enum vgt_g2v_type { ____Placeholder_vgt_g2v_type } vgt_g2v_type ;
struct TYPE_5__ {int hi; int lo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct i915_ppgtt*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct i915_ppgtt *VAR_7, bool VAR_8)
{
 struct drm_i915_private *VAR_9 = VAR_7->vm.i915;
 enum vgt_g2v_type VAR_10;
 int VAR_11;

 if (VAR_8)
  FUNC_2(FUNC_9(VAR_7->pd));
 else
  FUNC_1(FUNC_9(VAR_7->pd));

 FUNC_6(&VAR_9->vgpu.lock);

 if (FUNC_4(&VAR_7->vm)) {
  const u64 VAR_12 = FUNC_8(VAR_7->pd);

  FUNC_0(FUNC_11(VAR_6[0].lo), FUNC_5(VAR_12));
  FUNC_0(FUNC_11(VAR_6[0].hi), FUNC_10(VAR_12));

  VAR_10 = (VAR_8 ? VAR_3 :
    VAR_4);
 } else {
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   const u64 VAR_13 = FUNC_3(VAR_7, VAR_11);

   FUNC_0(FUNC_11(VAR_6[VAR_11].lo), FUNC_5(VAR_13));
   FUNC_0(FUNC_11(VAR_6[VAR_11].hi), FUNC_10(VAR_13));
  }

  VAR_10 = (VAR_8 ? VAR_1 :
    VAR_2);
 }


 FUNC_0(FUNC_11(VAR_5), VAR_10);

 FUNC_7(&VAR_9->vgpu.lock);
}
