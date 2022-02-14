
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {struct pci_dev* addr_source_data; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct si_sm_io *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->addr_source_data;

 FUNC_0(VAR_1);
}
