
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ctx_hw_stats {int dummy; } ;
struct bnxt_qplib_stats {int fw_id; int dma; int dma_map; int size; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (struct bnxt_qplib_stats*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2,
          struct bnxt_qplib_stats *VAR_3)
{
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->fw_id = -1;




 VAR_3->size = FUNC_0(sizeof(struct ctx_hw_stats), 128);
 VAR_3->dma = FUNC_2(&VAR_2->dev, VAR_3->size,
     &VAR_3->dma_map, VAR_1);
 if (!VAR_3->dma) {
  FUNC_1(&VAR_2->dev, "Stats DMA allocation failed\n");
  return -VAR_0;
 }
 return 0;
}
