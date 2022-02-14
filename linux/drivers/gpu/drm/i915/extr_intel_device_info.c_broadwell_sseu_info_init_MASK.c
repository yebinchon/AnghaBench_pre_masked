
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sseu_dev_info {int slice_mask; int max_slices; int max_subslices; int max_eus_per_subslice; int* subslice_mask; int* subslice_7eu; int has_slice_pg; scalar_t__ has_eu_pg; scalar_t__ has_subslice_pg; int eu_total; int eu_per_subslice; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct sseu_dev_info sseu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct sseu_dev_info*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct sseu_dev_info*) ;
 int FUNC_8 (struct sseu_dev_info*,int,int,int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_13)
{
 struct sseu_dev_info *VAR_14 = &FUNC_4(VAR_13)->sseu;
 int VAR_15, VAR_16;
 u32 VAR_17, VAR_18, VAR_19[3];

 VAR_17 = FUNC_3(VAR_12);
 VAR_14->slice_mask = (VAR_17 & VAR_10) >> VAR_11;
 VAR_14->max_slices = 3;
 VAR_14->max_subslices = 3;
 VAR_14->max_eus_per_subslice = 8;





 VAR_18 = FUNC_2(VAR_14->max_subslices - 1, 0);
 VAR_18 &= ~((VAR_17 & VAR_8) >>
      VAR_9);

 VAR_19[0] = FUNC_3(VAR_5) & VAR_0;
 VAR_19[1] = (FUNC_3(VAR_5) >> VAR_1) |
   ((FUNC_3(VAR_6) & VAR_2) <<
    (32 - VAR_1));
 VAR_19[2] = (FUNC_3(VAR_6) >> VAR_3) |
   ((FUNC_3(VAR_7) & VAR_4) <<
    (32 - VAR_3));





 for (VAR_15 = 0; VAR_15 < VAR_14->max_slices; VAR_15++) {
  if (!(VAR_14->slice_mask & FUNC_0(VAR_15)))

   continue;

  VAR_14->subslice_mask[VAR_15] = VAR_18;

  for (VAR_16 = 0; VAR_16 < VAR_14->max_subslices; VAR_16++) {
   u8 VAR_20;
   u32 VAR_21;

   if (!(VAR_14->subslice_mask[VAR_15] & FUNC_0(VAR_16)))

    continue;

   VAR_20 =
    VAR_19[VAR_15] >> (VAR_16 * VAR_14->max_eus_per_subslice);

   FUNC_8(VAR_14, VAR_15, VAR_16, ~VAR_20);

   VAR_21 = FUNC_6(VAR_20);




   if (VAR_14->max_eus_per_subslice - VAR_21 == 7)
    VAR_14->subslice_7eu[VAR_15] |= 1 << VAR_16;
  }
 }

 VAR_14->eu_total = FUNC_5(VAR_14);






 VAR_14->eu_per_subslice = FUNC_7(VAR_14) ?
    FUNC_1(VAR_14->eu_total,
          FUNC_7(VAR_14)) :
    0;





 VAR_14->has_slice_pg = FUNC_6(VAR_14->slice_mask) > 1;
 VAR_14->has_subslice_pg = 0;
 VAR_14->has_eu_pg = 0;
}
