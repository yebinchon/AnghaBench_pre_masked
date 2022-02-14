
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sys_data {struct cns3xxx_pcie* private_data; } ;
struct cns3xxx_pcie {int dummy; } ;



__attribute__((used)) static struct cns3xxx_pcie *FUNC_0(void *VAR_0)
{
 struct pci_sys_data *VAR_1 = VAR_0;

 return VAR_1->private_data;
}
