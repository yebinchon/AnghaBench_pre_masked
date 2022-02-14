
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,char*,int) ;
 int FUNC_10 (int *,char*,int) ;

int FUNC_11(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_10(&VAR_1->dev, "pci enable failed: error %d\n",
         -VAR_3);
  goto done;
 }

 VAR_3 = FUNC_5(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_9(VAR_1, "pci_request_regions fails: err %d\n", -VAR_3);
  goto bail;
 }

 VAR_3 = FUNC_7(VAR_1, FUNC_0(64));
 if (VAR_3) {





  VAR_3 = FUNC_7(VAR_1, FUNC_0(32));
  if (VAR_3) {
   FUNC_9(VAR_1, "Unable to set DMA mask: %d\n", VAR_3);
   goto bail;
  }
  VAR_3 = FUNC_6(VAR_1, FUNC_0(32));
 } else
  VAR_3 = FUNC_6(VAR_1, FUNC_0(64));
 if (VAR_3) {
  FUNC_10(&VAR_1->dev,
         "Unable to set DMA consistent mask: %d\n", VAR_3);
  goto bail;
 }

 FUNC_8(VAR_1);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_10(&VAR_1->dev,
         "Unable to enable pcie error reporting: %d\n",
         VAR_3);
  VAR_3 = 0;
 }
 goto done;

bail:
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
done:
 return VAR_3;
}
