
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 unsigned char VAR_2;
 if (!FUNC_1(VAR_0))
  return;

 FUNC_2(VAR_1, 0x50, &VAR_2);
 if (VAR_2 & 0x40) {
  FUNC_3(VAR_1, 0x50, VAR_2 & (~0x40));


  FUNC_2(VAR_1, 0x50, &VAR_2);
  if (VAR_2 & 0x40)
   FUNC_0(&VAR_1->dev, "Detected MSI K8T Neo2-FIR; "
     "can't enable onboard soundcard!\n");
  else
   FUNC_0(&VAR_1->dev, "Detected MSI K8T Neo2-FIR; "
     "enabled onboard soundcard\n");
 }
}
