
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fsl_mc_device {int dev; } ;
struct fsl_mc_addr_translation_range {int mc_region_type; scalar_t__ start_mc_offset; scalar_t__ end_mc_offset; scalar_t__ start_phys_addr; } ;
struct fsl_mc {int num_translation_ranges; struct fsl_mc_addr_translation_range* translation_ranges; } ;
struct device {int parent; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dprc_region_type { ____Placeholder_dprc_region_type } dprc_region_type ;


 int VAR_0 ;
 struct fsl_mc* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct device**) ;

__attribute__((used)) static int FUNC_2(struct fsl_mc_device *VAR_1,
        enum dprc_region_type VAR_2,
        u64 VAR_3, phys_addr_t *VAR_4)
{
 int VAR_5;
 struct device *VAR_6;
 struct fsl_mc *VAR_7;

 FUNC_1(&VAR_1->dev, &VAR_6);
 VAR_7 = FUNC_0(VAR_6->parent);

 if (VAR_7->num_translation_ranges == 0) {



  *VAR_4 = VAR_3;
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_7->num_translation_ranges; VAR_5++) {
  struct fsl_mc_addr_translation_range *VAR_8 =
   &VAR_7->translation_ranges[VAR_5];

  if (VAR_2 == VAR_8->mc_region_type &&
      VAR_3 >= VAR_8->start_mc_offset &&
      VAR_3 < VAR_8->end_mc_offset) {
   *VAR_4 = VAR_8->start_phys_addr +
         (VAR_3 - VAR_8->start_mc_offset);
   return 0;
  }
 }

 return -VAR_0;
}
