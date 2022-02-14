
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_pgtable {int dma; int * cpu; int size; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct pci_dev*,int ,int *) ;

int FUNC_1(struct pci_dev *VAR_2, struct saa7146_pgtable *VAR_3)
{
 __le32 *VAR_4;
 dma_addr_t VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 if (((void*)0) == VAR_4) {
  return -VAR_0;
 }
 VAR_3->size = VAR_1;
 VAR_3->cpu = VAR_4;
 VAR_3->dma = VAR_5;

 return 0;
}
