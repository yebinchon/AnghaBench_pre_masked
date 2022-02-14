
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long start; } ;
struct drm_i915_private {TYPE_3__* vlv_pctx; TYPE_1__ dsm; } ;
struct TYPE_6__ {TYPE_2__* stolen; } ;
struct TYPE_5__ {unsigned long start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_0) & ~4095;

 FUNC_1(VAR_2 != VAR_1->dsm.start +
        VAR_1->vlv_pctx->stolen->start);
}
