
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{




 FUNC_0(&VAR_1->dev, "Setting max latency to 32\n");
 VAR_0 = 32;
}
