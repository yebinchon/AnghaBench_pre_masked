
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct efa_com_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct efa_com_dev*,int ) ;
 int FUNC_3 (struct efa_com_dev*) ;
 int FUNC_4 (struct efa_com_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct efa_com_dev *VAR_1, struct pci_dev *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0) {
  VAR_4 = VAR_3;
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_2, FUNC_0(VAR_3));
 if (VAR_4) {
  FUNC_1(&VAR_2->dev, "pci_set_dma_mask failed %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_2, FUNC_0(VAR_3));
 if (VAR_4) {
  FUNC_1(&VAR_2->dev,
   "err_pci_set_consistent_dma_mask failed %d\n",
   VAR_4);
  return VAR_4;
 }

 return 0;
}
