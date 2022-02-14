
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sseu_dev_info {int max_slices; int max_subslices; int max_eus_per_subslice; int eu_total; int eu_per_subslice; int has_subslice_pg; int has_eu_pg; scalar_t__ has_slice_pg; int * subslice_mask; int slice_mask; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct sseu_dev_info sseu; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct sseu_dev_info*) ;
 int FUNC_4 (struct sseu_dev_info*) ;
 int FUNC_5 (struct sseu_dev_info*,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_11)
{
 struct sseu_dev_info *VAR_12 = &FUNC_2(VAR_11)->sseu;
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_10);

 VAR_12->slice_mask = FUNC_0(0);
 VAR_12->max_slices = 1;
 VAR_12->max_subslices = 2;
 VAR_12->max_eus_per_subslice = 8;

 if (!(VAR_13 & VAR_0)) {
  u8 VAR_14 =
   ((VAR_13 & VAR_2) >>
    VAR_3) |
   (((VAR_13 & VAR_4) >>
     VAR_5) << 4);

  VAR_12->subslice_mask[0] |= FUNC_0(0);
  FUNC_5(VAR_12, 0, 0, ~VAR_14);
 }

 if (!(VAR_13 & VAR_1)) {
  u8 VAR_15 =
   ((VAR_13 & VAR_6) >>
    VAR_7) |
   (((VAR_13 & VAR_8) >>
     VAR_9) << 4);

  VAR_12->subslice_mask[0] |= FUNC_0(1);
  FUNC_5(VAR_12, 0, 1, ~VAR_15);
 }

 VAR_12->eu_total = FUNC_3(VAR_12);





 VAR_12->eu_per_subslice = FUNC_4(VAR_12) ?
    VAR_12->eu_total /
     FUNC_4(VAR_12) :
    0;





 VAR_12->has_slice_pg = 0;
 VAR_12->has_subslice_pg = FUNC_4(VAR_12) > 1;
 VAR_12->has_eu_pg = (VAR_12->eu_per_subslice > 2);
}
