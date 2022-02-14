
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int dummy; } ;
struct iommu_dma_cookie {scalar_t__ type; size_t msi_iova; scalar_t__ fq_domain; struct iova_domain iovad; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iova_domain*,int ,size_t) ;
 int FUNC_1 (struct iova_domain*,int ) ;
 size_t FUNC_2 (struct iova_domain*) ;
 int FUNC_3 (struct iova_domain*,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_4(struct iommu_dma_cookie *VAR_1,
  dma_addr_t VAR_2, size_t VAR_3)
{
 struct iova_domain *VAR_4 = &VAR_1->iovad;


 if (VAR_1->type == VAR_0)
  VAR_1->msi_iova -= VAR_3;
 else if (VAR_1->fq_domain)
  FUNC_3(VAR_4, FUNC_1(VAR_4, VAR_2),
    VAR_3 >> FUNC_2(VAR_4), 0);
 else
  FUNC_0(VAR_4, FUNC_1(VAR_4, VAR_2),
    VAR_3 >> FUNC_2(VAR_4));
}
