
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_conf {int pc_hdr; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct pci_conf*) ;
 int FUNC_1 (int,struct pci_conf*,int ,int ) ;
 int FUNC_2 (int,struct pci_conf*) ;

__attribute__((used)) static void
FUNC_3(int VAR_5, struct pci_conf *VAR_6)
{

 switch (VAR_6->pc_hdr & VAR_0) {
 case 129:
  FUNC_1(VAR_5, VAR_6, VAR_1, VAR_3);
  FUNC_0(VAR_5, VAR_6);
  break;
 case 128:
  FUNC_1(VAR_5, VAR_6, VAR_2, VAR_4);
  FUNC_2(VAR_5, VAR_6);
  break;
 }
}
