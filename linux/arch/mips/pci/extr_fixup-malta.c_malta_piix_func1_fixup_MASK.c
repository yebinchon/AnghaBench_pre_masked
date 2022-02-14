
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 unsigned char VAR_5;


 if (FUNC_0(VAR_4->devfn) == 10) {



  FUNC_1(VAR_4, VAR_0,
   &VAR_5);
  FUNC_2(VAR_4, VAR_0,
   VAR_5|VAR_1);
  FUNC_1(VAR_4, VAR_2,
   &VAR_5);
  FUNC_2(VAR_4, VAR_2,
   VAR_5|VAR_3);
 }
}
