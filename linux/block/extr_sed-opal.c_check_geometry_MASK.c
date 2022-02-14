
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {void* lowest_lba; void* align; } ;
struct d0_geometry_features {int lowest_aligned_lba; int alignment_granularity; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct opal_dev *VAR_0, const void *VAR_1)
{
 const struct d0_geometry_features *VAR_2 = VAR_1;

 VAR_0->align = FUNC_0(VAR_2->alignment_granularity);
 VAR_0->lowest_lba = FUNC_0(VAR_2->lowest_aligned_lba);
}
