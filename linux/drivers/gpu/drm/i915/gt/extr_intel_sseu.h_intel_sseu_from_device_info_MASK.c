
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sseu_dev_info {int max_eus_per_subslice; int * subslice_mask; int slice_mask; } ;
struct intel_sseu {int max_eus_per_subslice; int min_eus_per_subslice; int subslice_mask; int slice_mask; } ;



__attribute__((used)) static inline struct intel_sseu
FUNC_0(const struct sseu_dev_info *VAR_0)
{
 struct intel_sseu VAR_1 = {
  .slice_mask = VAR_0->slice_mask,
  .subslice_mask = VAR_0->subslice_mask[0],
  .min_eus_per_subslice = VAR_0->max_eus_per_subslice,
  .max_eus_per_subslice = VAR_0->max_eus_per_subslice,
 };

 return VAR_1;
}
