
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pci_dev*,struct page*,int ,int ,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ,int ) ;

int FUNC_3(struct pci_dev *VAR_3, struct page *VAR_4, dma_addr_t *VAR_5)
{
 dma_addr_t VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, 0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3, VAR_6))
  return -VAR_0;

 if (!VAR_6) {
  FUNC_2(VAR_3, VAR_6, VAR_1, VAR_2);
  VAR_6 = FUNC_1(VAR_3, VAR_4, 0, VAR_1,
        VAR_2);
  if (FUNC_0(VAR_3, VAR_6))
   return -VAR_0;




 }
 *VAR_5 = VAR_6;
 return 0;
}
