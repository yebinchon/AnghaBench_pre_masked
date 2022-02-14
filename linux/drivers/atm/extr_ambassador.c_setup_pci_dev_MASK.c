
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned char) ;
 unsigned char VAR_3 ;
 int FUNC_1 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_4)
{
 unsigned char VAR_5;


 FUNC_2(VAR_4);


 FUNC_1 (VAR_4, VAR_2, &VAR_5);

 if (!VAR_3)
  VAR_3 = (VAR_5 < VAR_1) ? VAR_1 : VAR_5;

 if (VAR_5 != VAR_3) {
  FUNC_0 (VAR_0, "Changing PCI latency timer from %hu to %hu",
   VAR_5, VAR_3);
  FUNC_3(VAR_4, VAR_2, VAR_3);
 }
}
