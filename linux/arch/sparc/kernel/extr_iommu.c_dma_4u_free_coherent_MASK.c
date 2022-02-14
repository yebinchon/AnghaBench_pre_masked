
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu {int tbl; } ;
struct TYPE_2__ {struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (size_t) ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (size_t) ;
 int FUNC_3 (int *,int ,unsigned long,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2, size_t VAR_3,
     void *VAR_4, dma_addr_t VAR_5,
     unsigned long VAR_6)
{
 struct iommu *VAR_7;
 unsigned long VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_3) >> VAR_1;
 VAR_7 = VAR_2->archdata.iommu;

 FUNC_3(&VAR_7->tbl, VAR_5, VAR_9, VAR_0);

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8 < 10)
  FUNC_1((unsigned long)VAR_4, VAR_8);
}
