
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, struct pci_conf *VAR_3, uint8_t VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = FUNC_2(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_1, 2);
 FUNC_1("EHCI Debug Port at offset 0x%x in map 0x%x", VAR_5 &
     VAR_0, FUNC_0(VAR_5 >> 13));
}
