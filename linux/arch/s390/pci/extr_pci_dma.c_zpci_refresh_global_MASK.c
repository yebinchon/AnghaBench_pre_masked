
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zpci_dev {int iommu_pages; int start_dma; scalar_t__ fh; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct zpci_dev *VAR_1)
{
 return FUNC_0((u64) VAR_1->fh << 32, VAR_1->start_dma,
      VAR_1->iommu_pages * VAR_0);
}
