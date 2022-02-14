
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_io {int pi_width; int pi_data; int pi_reg; int pi_sel; } ;
struct pci_conf {int pc_hdr; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct pci_io*) ;

__attribute__((used)) static uint32_t
FUNC_1(int VAR_4, struct pci_conf *VAR_5)
{
 struct pci_io VAR_6;
 uint32_t VAR_7;

 VAR_7 = 0;




 if (VAR_5->pc_hdr != 0x00)
  return VAR_7;




 VAR_6.pi_sel = VAR_5->pc_sel;
 VAR_6.pi_reg = VAR_2;
 VAR_6.pi_width = 4;
 VAR_6.pi_data = 0xFFFFFFFF;
 if (FUNC_0(VAR_4, VAR_1, &VAR_6) == -1)
  return VAR_7;




 if (FUNC_0(VAR_4, VAR_0, &VAR_6) == -1)
  return 0;




 if (VAR_6.pi_data & VAR_3)
  VAR_7 = -(VAR_6.pi_data & VAR_3);




 VAR_6.pi_data = 0;
 if (FUNC_0(VAR_4, VAR_1, &VAR_6) == -1)
  return 0;

 return VAR_7;
}
