
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, struct pci_conf *VAR_4, uint16_t VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7;

 FUNC_0("VC %d", VAR_6);
 if (VAR_6 < 1)
  return;
 VAR_7 = FUNC_1(VAR_3, &VAR_4->pc_sel, VAR_5 + VAR_2, 4);
 FUNC_0(" max VC%d", VAR_7 & VAR_0);
 if ((VAR_7 & VAR_1) != 0)
  FUNC_0(" lowpri VC0-VC%d",
      (VAR_7 & VAR_1) >> 4);
 FUNC_0("\n");
}
