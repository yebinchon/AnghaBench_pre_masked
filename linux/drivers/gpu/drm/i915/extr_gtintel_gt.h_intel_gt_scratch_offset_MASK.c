
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gt {int scratch; } ;
typedef enum intel_gt_scratch_field { ____Placeholder_intel_gt_scratch_field } intel_gt_scratch_field ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(const struct intel_gt *VAR_0,
       enum intel_gt_scratch_field VAR_1)
{
 return FUNC_0(VAR_0->scratch) + VAR_1;
}
