
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcisel {int dummy; } ;
struct pci_io {long pi_reg; int pi_width; int pi_data; struct pcisel pi_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,struct pci_io*) ;

uint32_t
FUNC_2(int VAR_1, struct pcisel *VAR_2, long VAR_3, int VAR_4)
{
 struct pci_io VAR_5;

 VAR_5.pi_sel = *VAR_2;
 VAR_5.pi_reg = VAR_3;
 VAR_5.pi_width = VAR_4;

 if (FUNC_1(VAR_1, VAR_0, &VAR_5) < 0)
  FUNC_0(1, "ioctl(PCIOCREAD)");

 return (VAR_5.pi_data);
}
