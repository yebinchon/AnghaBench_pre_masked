
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sseu_dev_info {int slice_mask; int eu_per_subslice; int eu_total; int * subslice_mask; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int eu_per_subslice; int * subslice_7eu; int * subslice_mask; } ;
struct TYPE_4__ {TYPE_1__ sseu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sseu_dev_info*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_2,
      struct sseu_dev_info *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 VAR_3->slice_mask = VAR_4 & VAR_1;

 if (VAR_3->slice_mask) {
  VAR_3->eu_per_subslice =
   FUNC_1(VAR_2)->sseu.eu_per_subslice;
  for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_3->slice_mask); VAR_5++) {
   VAR_3->subslice_mask[VAR_5] =
    FUNC_1(VAR_2)->sseu.subslice_mask[VAR_5];
  }
  VAR_3->eu_total = VAR_3->eu_per_subslice *
     FUNC_4(VAR_3);


  for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_3->slice_mask); VAR_5++) {
   u8 VAR_6 =
    FUNC_1(VAR_2)->sseu.subslice_7eu[VAR_5];

   VAR_3->eu_total -= FUNC_3(VAR_6);
  }
 }
}
