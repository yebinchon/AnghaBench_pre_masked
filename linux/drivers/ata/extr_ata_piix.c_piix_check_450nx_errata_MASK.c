
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int revision; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 struct pci_dev* FUNC_1 (int ,int ,struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = ((void*)0);
 u16 VAR_4;
 int VAR_5 = 0;

 while ((VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_3)) != ((void*)0)) {


  FUNC_2(VAR_3, 0x41, &VAR_4);

  if (VAR_3->revision == 0x00)
   VAR_5 = 1;

  else if (VAR_4 & (1<<14) && VAR_3->revision < 5)
   VAR_5 = 2;
 }
 if (VAR_5)
  FUNC_0(&VAR_2->dev,
    "450NX errata present, disabling IDE DMA%s\n",
    VAR_5 == 2 ? " - a BIOS update may resolve this"
    : "");

 return VAR_5;
}
