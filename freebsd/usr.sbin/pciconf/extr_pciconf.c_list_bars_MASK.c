
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_conf {int pc_hdr; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,struct pci_conf*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_4, struct pci_conf *VAR_5)
{
 int VAR_6, VAR_7;

 switch (VAR_5->pc_hdr & VAR_0) {
 case 128:
  VAR_7 = VAR_1;
  break;
 case 130:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 default:
  return;
 }

 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++)
  FUNC_1(VAR_4, VAR_5, "bar   ", FUNC_0(VAR_6));
}
