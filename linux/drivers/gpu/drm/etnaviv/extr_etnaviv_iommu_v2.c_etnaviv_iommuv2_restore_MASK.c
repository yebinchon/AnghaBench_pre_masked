
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_iommu_context {int dummy; } ;
struct etnaviv_gpu {int sec_mode; } ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct etnaviv_gpu*,struct etnaviv_iommu_context*) ;
 int FUNC_2 (struct etnaviv_gpu*,struct etnaviv_iommu_context*) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gpu *VAR_0,
        struct etnaviv_iommu_context *VAR_1)
{
 switch (VAR_0->sec_mode) {
 case 128:
  FUNC_1(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_2(VAR_0, VAR_1);
  break;
 default:
  FUNC_0(1, "unhandled GPU security mode\n");
  break;
 }
}
