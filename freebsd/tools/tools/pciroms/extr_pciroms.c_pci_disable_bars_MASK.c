
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pci_io {int pi_width; scalar_t__ pi_data; int pi_reg; int pi_sel; } ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct pci_io*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, struct pci_conf *VAR_4, uint16_t *VAR_5)
{
 struct pci_io VAR_6;




 VAR_6.pi_sel = VAR_4->pc_sel;
 VAR_6.pi_reg = VAR_2;
 VAR_6.pi_width = 4;
 VAR_6.pi_data = 0;
 if (FUNC_0(VAR_3, VAR_0, &VAR_6) == -1)
  return 0;




 VAR_6.pi_sel = VAR_4->pc_sel;
 VAR_6.pi_reg = VAR_1;
 VAR_6.pi_width = 2;
 VAR_6.pi_data = *VAR_5;
 if (FUNC_0(VAR_3, VAR_0, &VAR_6) == -1) {
  FUNC_1("ioctl");
  return 0;
 }

 return 0;
}
