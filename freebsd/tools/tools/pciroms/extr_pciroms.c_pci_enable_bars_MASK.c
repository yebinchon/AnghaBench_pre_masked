
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pci_io {int pi_width; int pi_data; int pi_reg; int pi_sel; } ;
struct pci_conf {int pc_hdr; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,struct pci_io*) ;

__attribute__((used)) static int
FUNC_1(int VAR_7, struct pci_conf *VAR_8, uint16_t *VAR_9)
{
 struct pci_io VAR_10;


 if (VAR_8->pc_hdr != 0x00)
  return -1;


 VAR_10.pi_sel = VAR_8->pc_sel;
 VAR_10.pi_reg = VAR_2;
 VAR_10.pi_width = 2;
 if (FUNC_0(VAR_7, VAR_0, &VAR_10) == -1)
  return -1;
 *VAR_9 = (uint16_t)VAR_10.pi_data;

 VAR_10.pi_data |= VAR_4;
 if (FUNC_0(VAR_7, VAR_1, &VAR_10) == -1)
  return -1;




 VAR_10.pi_sel = VAR_8->pc_sel;
 VAR_10.pi_reg = VAR_3;
 VAR_10.pi_width = 4;
 VAR_10.pi_data = (VAR_6 | VAR_5);
 if (FUNC_0(VAR_7, VAR_1, &VAR_10) == -1)
  return -1;

 return 0;
}
