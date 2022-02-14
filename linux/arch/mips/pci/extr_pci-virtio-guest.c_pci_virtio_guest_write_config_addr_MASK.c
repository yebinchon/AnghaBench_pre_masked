
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pci_config_address {int register_number; unsigned int devfn_number; int enable_bit; int w; int bus_number; } ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_bus *VAR_1,
     unsigned int VAR_2, int VAR_3)
{
 union pci_config_address VAR_4 = { .w = 0 };

 VAR_4.register_number = VAR_3;
 VAR_4.devfn_number = VAR_2;
 VAR_4.bus_number = VAR_1->number;
 VAR_4.enable_bit = 1;

 FUNC_0(VAR_4.w, VAR_0);
}
