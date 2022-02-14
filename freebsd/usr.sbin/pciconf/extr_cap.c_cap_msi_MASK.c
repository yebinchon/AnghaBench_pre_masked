
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_6, struct pci_conf *VAR_7, uint8_t VAR_8)
{
 uint16_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_6, &VAR_7->pc_sel, VAR_8 + VAR_5, 2);
 VAR_10 = 1 << ((VAR_9 & VAR_1) >> 1);
 FUNC_0("MSI supports %d message%s%s%s ", VAR_10,
     (VAR_10 == 1) ? "" : "s",
     (VAR_9 & VAR_0) ? ", 64 bit" : "",
     (VAR_9 & VAR_4) ? ", vector masks" : "");
 if (VAR_9 & VAR_3) {
  VAR_10 = 1 << ((VAR_9 & VAR_2) >> 4);
  FUNC_0("enabled with %d message%s", VAR_10,
      (VAR_10 == 1) ? "" : "s");
 }
}
