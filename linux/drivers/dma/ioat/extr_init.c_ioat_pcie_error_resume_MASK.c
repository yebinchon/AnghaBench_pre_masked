
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ioatdma_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct ioatdma_device*) ;
 struct ioatdma_device* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct ioatdma_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_1->dev, "%s: AER handling resuming\n", VAR_0);


 FUNC_1(VAR_2);
}
