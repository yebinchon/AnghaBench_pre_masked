
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct malidp_plane {TYPE_2__ base; } ;
struct iommu_domain {int pgsize_bitmap; } ;
struct TYPE_3__ {int dev; } ;


 struct iommu_domain* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_2(struct malidp_plane *VAR_1)
{
 u32 VAR_2 = 0;

 if (FUNC_1(&VAR_0)) {
  struct iommu_domain *VAR_3 =
   FUNC_0(VAR_1->base.dev->dev);

  if (VAR_3)
   VAR_2 = VAR_3->pgsize_bitmap;
 }

 return VAR_2;
}
