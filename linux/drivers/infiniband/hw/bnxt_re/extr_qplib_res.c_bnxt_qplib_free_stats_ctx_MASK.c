
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt_qplib_stats {int fw_id; int dma_map; scalar_t__ dma; int size; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct bnxt_qplib_stats*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0,
          struct bnxt_qplib_stats *VAR_1)
{
 if (VAR_1->dma) {
  FUNC_0(&VAR_0->dev, VAR_1->size,
      VAR_1->dma, VAR_1->dma_map);
 }
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->fw_id = -1;
}
