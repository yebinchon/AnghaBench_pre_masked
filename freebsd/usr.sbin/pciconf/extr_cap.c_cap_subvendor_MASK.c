
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, struct pci_conf *VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;
 uint16_t VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_1, &VAR_2->pc_sel, VAR_3 + VAR_0, 4);
 VAR_5 = VAR_4 >> 16;
 VAR_6 = VAR_4 & 0xffff;
 FUNC_0("PCI Bridge subvendor=0x%04x subdevice=0x%04x", VAR_6, VAR_5);
}
