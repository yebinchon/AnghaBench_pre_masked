
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct pci_conf {int pc_sel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,struct pci_conf*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int,struct pci_conf*,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int *,scalar_t__,int) ;

void
FUNC_4(int VAR_13, struct pci_conf *VAR_14)
{
 uint32_t VAR_15, VAR_16;
 uint16_t VAR_17, VAR_18;
 uint8_t VAR_19;


 VAR_17 = FUNC_3(VAR_13, &VAR_14->pc_sel, VAR_5, 2);
 FUNC_2("PCI errors", VAR_11, VAR_17 & VAR_8);


 VAR_19 = FUNC_0(VAR_13, VAR_14, VAR_6);
 if (VAR_19 == 0)
  return;


 VAR_17 = FUNC_3(VAR_13, &VAR_14->pc_sel, VAR_19 + VAR_0, 2);
 FUNC_2("PCI-e errors", VAR_12, VAR_17 & VAR_1);


 VAR_18 = FUNC_1(VAR_13, VAR_14, VAR_7);
 if (VAR_18 == 0)
  return;


 VAR_15 = FUNC_3(VAR_13, &VAR_14->pc_sel, VAR_18 + VAR_4, 4);
        VAR_16 = FUNC_3(VAR_13, &VAR_14->pc_sel, VAR_18 + VAR_3, 4);
 FUNC_2("Fatal", VAR_10, VAR_15 & VAR_16);
 FUNC_2("Non-fatal", VAR_10, VAR_15 & ~VAR_16);


 VAR_15 = FUNC_3(VAR_13, &VAR_14->pc_sel, VAR_18 + VAR_2, 4);
 FUNC_2("Corrected", VAR_9, VAR_15);
}
