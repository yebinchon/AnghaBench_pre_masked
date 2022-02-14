
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_15__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_14__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_13__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_12__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_11__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_10__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_9__ {scalar_t__ min; scalar_t__ max; } ;
struct intel_limit {TYPE_8__ dot; TYPE_7__ vco; TYPE_6__ m; TYPE_5__ p; TYPE_4__ m1; TYPE_3__ m2; TYPE_2__ p1; TYPE_1__ n; } ;
struct drm_i915_private {int dummy; } ;
struct dpll {scalar_t__ n; scalar_t__ p1; scalar_t__ m2; scalar_t__ m1; scalar_t__ p; scalar_t__ m; scalar_t__ vco; scalar_t__ dot; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_0,
          const struct intel_limit *VAR_1,
          const struct dpll *VAR_2)
{
 if (VAR_2->n < VAR_1->n.min || VAR_1->n.max < VAR_2->n)
  FUNC_0("n out of range\n");
 if (VAR_2->p1 < VAR_1->p1.min || VAR_1->p1.max < VAR_2->p1)
  FUNC_0("p1 out of range\n");
 if (VAR_2->m2 < VAR_1->m2.min || VAR_1->m2.max < VAR_2->m2)
  FUNC_0("m2 out of range\n");
 if (VAR_2->m1 < VAR_1->m1.min || VAR_1->m1.max < VAR_2->m1)
  FUNC_0("m1 out of range\n");

 if (!FUNC_3(VAR_0) && !FUNC_4(VAR_0) &&
     !FUNC_1(VAR_0) && !FUNC_2(VAR_0))
  if (VAR_2->m1 <= VAR_2->m2)
   FUNC_0("m1 <= m2\n");

 if (!FUNC_4(VAR_0) && !FUNC_1(VAR_0) &&
     !FUNC_2(VAR_0)) {
  if (VAR_2->p < VAR_1->p.min || VAR_1->p.max < VAR_2->p)
   FUNC_0("p out of range\n");
  if (VAR_2->m < VAR_1->m.min || VAR_1->m.max < VAR_2->m)
   FUNC_0("m out of range\n");
 }

 if (VAR_2->vco < VAR_1->vco.min || VAR_1->vco.max < VAR_2->vco)
  FUNC_0("vco out of range\n");



 if (VAR_2->dot < VAR_1->dot.min || VAR_1->dot.max < VAR_2->dot)
  FUNC_0("dot out of range\n");

 return 1;
}
