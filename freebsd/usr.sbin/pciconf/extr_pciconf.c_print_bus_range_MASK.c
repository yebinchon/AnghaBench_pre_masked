
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pci_conf {int pc_sel; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,int *,int,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, struct pci_conf *VAR_1, int VAR_2, int VAR_3)
{
 uint8_t VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, &VAR_1->pc_sel, VAR_2, 1);
 VAR_5 = FUNC_1(VAR_0, &VAR_1->pc_sel, VAR_3, 1);
 FUNC_0("    bus range  = %u-%u\n", VAR_4, VAR_5);
}
