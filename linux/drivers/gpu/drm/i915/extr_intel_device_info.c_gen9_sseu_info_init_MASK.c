
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sseu_dev_info {int slice_mask; int max_slices; int max_subslices; int max_eus_per_subslice; int* subslice_mask; int* subslice_7eu; int eu_per_subslice; int has_slice_pg; int has_subslice_pg; int has_eu_pg; int min_eu_in_pool; int eu_total; } ;
struct intel_device_info {int has_pooled_eu; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct sseu_dev_info sseu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct sseu_dev_info*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sseu_dev_info*) ;
 struct intel_device_info* FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct sseu_dev_info*,int,int,int) ;

__attribute__((used)) static void FUNC_12(struct drm_i915_private *VAR_5)
{
 struct intel_device_info *VAR_6 = FUNC_10(VAR_5);
 struct sseu_dev_info *VAR_7 = &FUNC_6(VAR_5)->sseu;
 int VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 const u8 VAR_13 = 0xff;

 VAR_10 = FUNC_3(VAR_2);
 VAR_7->slice_mask = (VAR_10 & VAR_0) >> VAR_1;


 VAR_7->max_slices = FUNC_4(VAR_5) ? 1 : 3;
 VAR_7->max_subslices = FUNC_4(VAR_5) ? 3 : 4;
 VAR_7->max_eus_per_subslice = 8;





 VAR_12 = (1 << VAR_7->max_subslices) - 1;
 VAR_12 &= ~((VAR_10 & VAR_3) >>
      VAR_4);





 for (VAR_8 = 0; VAR_8 < VAR_7->max_slices; VAR_8++) {
  if (!(VAR_7->slice_mask & FUNC_0(VAR_8)))

   continue;

  VAR_7->subslice_mask[VAR_8] = VAR_12;

  VAR_11 = FUNC_3(FUNC_2(VAR_8));
  for (VAR_9 = 0; VAR_9 < VAR_7->max_subslices; VAR_9++) {
   int VAR_14;
   u8 VAR_15;

   if (!(VAR_7->subslice_mask[VAR_8] & FUNC_0(VAR_9)))

    continue;

   VAR_15 = (VAR_11 >> (VAR_9 * 8)) & VAR_13;

   FUNC_11(VAR_7, VAR_8, VAR_9, ~VAR_15);

   VAR_14 = VAR_7->max_eus_per_subslice -
    FUNC_8(VAR_15);






   if (VAR_14 == 7)
    VAR_7->subslice_7eu[VAR_8] |= FUNC_0(VAR_9);
  }
 }

 VAR_7->eu_total = FUNC_7(VAR_7);
 VAR_7->eu_per_subslice = FUNC_9(VAR_7) ?
    FUNC_1(VAR_7->eu_total,
          FUNC_9(VAR_7)) :
    0;
 VAR_7->has_slice_pg =
  !FUNC_4(VAR_5) && FUNC_8(VAR_7->slice_mask) > 1;
 VAR_7->has_subslice_pg =
  FUNC_4(VAR_5) && FUNC_9(VAR_7) > 1;
 VAR_7->has_eu_pg = VAR_7->eu_per_subslice > 2;

 if (FUNC_4(VAR_5)) {

  VAR_6->has_pooled_eu = FUNC_8(VAR_7->subslice_mask[0]) == 3;

  VAR_7->min_eu_in_pool = 0;
  if (VAR_6->has_pooled_eu) {
   if ((!(VAR_7->subslice_mask[0] & FUNC_0(2))) || (!(VAR_7->subslice_mask[0] & FUNC_0(0))))
    VAR_7->min_eu_in_pool = 3;
   else if ((!(VAR_7->subslice_mask[0] & FUNC_0(1))))
    VAR_7->min_eu_in_pool = 6;
   else
    VAR_7->min_eu_in_pool = 9;
  }

 }
}
