
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sseu_dev_info {int slice_mask; int* subslice_mask; } ;
struct i915_wa_list {int dummy; } ;
struct drm_i915_private {int uncore; } ;
struct TYPE_2__ {struct sseu_dev_info sseu; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (unsigned int) ;
 int VAR_3 ;
 int FUNC_5 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (unsigned int) ;
 int VAR_6 ;
 int FUNC_7 (unsigned int) ;
 int VAR_7 ;
 int FUNC_8 (struct drm_i915_private*) ;
 TYPE_1__* FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct i915_wa_list*,int ,int,int) ;

__attribute__((used)) static void
FUNC_15(struct drm_i915_private *VAR_8, struct i915_wa_list *VAR_9)
{
 const struct sseu_dev_info *VAR_10 = &FUNC_9(VAR_8)->sseu;
 unsigned int VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 FUNC_3(FUNC_8(VAR_8) < 10);
 if (FUNC_8(VAR_8) >= 10 && FUNC_13(VAR_10->slice_mask)) {
  u32 VAR_16 =
   FUNC_12(&VAR_8->uncore, VAR_2) &
   VAR_0;

  FUNC_1("L3 fuse = %x\n", VAR_16);
  VAR_13 = ~(VAR_16 << VAR_1 | VAR_16);
 } else {
  VAR_13 = ~0;
 }

 VAR_11 = FUNC_11(VAR_10->slice_mask) - 1;
 FUNC_3(VAR_11 >= FUNC_0(VAR_10->subslice_mask));
 VAR_12 = FUNC_11(VAR_13 & VAR_10->subslice_mask[VAR_11]);
 if (!VAR_12) {
  FUNC_2("No common index found between subslice mask %x and L3 bank mask %x!\n",
    VAR_10->subslice_mask[VAR_11], VAR_13);
  VAR_12 = FUNC_11(VAR_13);
  FUNC_10(!VAR_12);
 }
 VAR_12--;

 if (FUNC_8(VAR_8) >= 11) {
  VAR_14 = FUNC_4(VAR_11) | FUNC_5(VAR_12);
  VAR_15 = VAR_3 | VAR_4;
 } else {
  VAR_14 = FUNC_6(VAR_11) | FUNC_7(VAR_12);
  VAR_15 = VAR_6 | VAR_7;
 }

 FUNC_1("MCR slice/subslice = %x\n", VAR_14);

 FUNC_14(VAR_9, VAR_5, VAR_15, VAR_14);
}
