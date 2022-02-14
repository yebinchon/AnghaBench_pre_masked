
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_6, struct pci_conf *VAR_7, uint8_t VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint16_t VAR_15;

 VAR_15 = FUNC_2(VAR_6, &VAR_7->pc_sel, VAR_8 + VAR_3, 2);
 VAR_12 = (VAR_15 & VAR_1) + 1;

 VAR_11 = FUNC_2(VAR_6, &VAR_7->pc_sel, VAR_8 + VAR_5, 4);
 VAR_14 = FUNC_0(VAR_11 & VAR_2);
 VAR_10 = VAR_11 & ~VAR_2;

 VAR_11 = FUNC_2(VAR_6, &VAR_7->pc_sel, VAR_8 + VAR_4, 4);
 VAR_13 = FUNC_0(VAR_11 & VAR_2);
 VAR_9 = VAR_11 & ~VAR_2;

 FUNC_1("MSI-X supports %d message%s%s\n", VAR_12,
     (VAR_12 == 1) ? "" : "s",
     (VAR_15 & VAR_0) ? ", enabled" : "");

 FUNC_1("                 ");
 FUNC_1("Table in map 0x%x[0x%x], PBA in map 0x%x[0x%x]",
     VAR_14, VAR_10, VAR_13, VAR_9);
}
