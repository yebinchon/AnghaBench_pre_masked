
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct etnaviv_iommu_context {int mm; } ;
struct drm_mm_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct drm_mm_node*,size_t,int ,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct etnaviv_iommu_context *VAR_1,
     struct drm_mm_node *VAR_2, size_t VAR_3, u64 VAR_4)
{
 return FUNC_0(&VAR_1->mm, VAR_2, VAR_3, 0, 0, VAR_4,
        VAR_4 + VAR_3, VAR_0);
}
