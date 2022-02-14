
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcisel {int dummy; } ;
struct pci_io {long pi_reg; int pi_width; int pi_data; struct pcisel pi_sel; } ;
typedef int pi ;


 int VAR_0 ;
 int FUNC_0 (struct pci_io*,int) ;
 int FUNC_1 (int ,int ,struct pci_io*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(const struct pcisel *VAR_2, long VAR_3, int VAR_4, uint32_t VAR_5)
{
 struct pci_io VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.pi_sel = *VAR_2;
 VAR_6.pi_reg = VAR_3;
 VAR_6.pi_width = VAR_4;
 VAR_6.pi_data = VAR_5;

 (void)FUNC_1(VAR_1, VAR_0, &VAR_6);
}
