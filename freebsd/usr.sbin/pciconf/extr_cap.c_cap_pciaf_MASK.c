
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int,int *,int,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, struct pci_conf *VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_4->pc_sel, VAR_5 + VAR_2, 1);
 FUNC_0("PCI Advanced Features:%s%s",
     VAR_6 & VAR_0 ? " FLR" : "",
     VAR_6 & VAR_1 ? " TP" : "");
}
