
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pci_bus {unsigned char number; } ;
struct msp_pci_regs {unsigned long if_status; unsigned char config_addr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long* VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int ,char*,struct msp_pci_regs*) ;

int FUNC_6(unsigned char VAR_13,
    struct pci_bus *VAR_14,
    unsigned int VAR_15,
    unsigned char VAR_16,
    u32 *VAR_17)
{
 struct msp_pci_regs *VAR_18 = (void *)VAR_9;
 unsigned char VAR_19 = VAR_14->number;
 unsigned char VAR_20 = (unsigned char)VAR_15;
 unsigned long VAR_21;
 unsigned long VAR_22;
 static char VAR_23;
 int VAR_24;
 if (VAR_23 == 0) {
  VAR_24 = FUNC_5(VAR_6,
    VAR_11,
    VAR_5,
    "PMC MSP PCI Host",
    VAR_18);
  if (VAR_24 != 0)
   return VAR_24;
  VAR_23 = ~0;
 }
 VAR_18->if_status = ~(VAR_3 | VAR_4);


 VAR_18->config_addr = VAR_1 |
  (VAR_19 << VAR_0) |
  (VAR_20 << VAR_2) |
  (VAR_16 & 0xFC);


 if (VAR_13 == VAR_8) {
  VAR_22 = FUNC_0(*VAR_17);
  *VAR_10 = VAR_22;
 } else {

  VAR_22 = FUNC_3(*VAR_10);
  *VAR_17 = VAR_22;
 }





 VAR_21 = VAR_18->if_status;


 VAR_18->config_addr = 0;


 if (VAR_21 & ~(VAR_3 | VAR_4)) {

  VAR_18->if_status = ~(VAR_3 | VAR_4);





  return -1;
 }





 return VAR_7;
}
