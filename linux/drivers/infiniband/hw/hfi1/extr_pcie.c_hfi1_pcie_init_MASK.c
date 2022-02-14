
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hfi1_devdata {struct pci_dev* pcidev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;

int FUNC_9(struct hfi1_devdata *VAR_1)
{
 int VAR_2;
 struct pci_dev *VAR_3 = VAR_1->pcidev;

 VAR_2 = FUNC_3(VAR_3);
 if (VAR_2) {
  FUNC_1(VAR_1, "pci enable failed: error %d\n", -VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_5(VAR_3, VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_1, "pci_request_regions fails: err %d\n", -VAR_2);
  goto bail;
 }

 VAR_2 = FUNC_7(VAR_3, FUNC_0(64));
 if (VAR_2) {





  VAR_2 = FUNC_7(VAR_3, FUNC_0(32));
  if (VAR_2) {
   FUNC_1(VAR_1, "Unable to set DMA mask: %d\n", VAR_2);
   goto bail;
  }
  VAR_2 = FUNC_6(VAR_3, FUNC_0(32));
 } else {
  VAR_2 = FUNC_6(VAR_3, FUNC_0(64));
 }
 if (VAR_2) {
  FUNC_1(VAR_1, "Unable to set DMA consistent mask: %d\n", VAR_2);
  goto bail;
 }

 FUNC_8(VAR_3);
 (void)FUNC_4(VAR_3);
 return 0;

bail:
 FUNC_2(VAR_3);
 return VAR_2;
}
