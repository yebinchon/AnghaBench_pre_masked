
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pci_pbm_info {int config_space_reg_bits; struct pci_pbm_info* next; int pci_bus; int name; scalar_t__ controller_regs; scalar_t__ pbm_regs; struct platform_device* op; int portid; scalar_t__ index; int * pci_ops; int numa_node; } ;
struct linux_prom64_registers {scalar_t__ phys_addr; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 struct linux_prom64_registers* FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (struct pci_pbm_info*) ;
 int FUNC_2 (struct pci_pbm_info*) ;
 int FUNC_3 (struct pci_pbm_info*) ;
 int FUNC_4 (struct pci_pbm_info*) ;
 int FUNC_5 (struct pci_pbm_info*) ;
 int VAR_1 ;
 struct pci_pbm_info* VAR_2 ;
 int FUNC_6 (struct pci_pbm_info*,TYPE_1__*) ;
 int FUNC_7 (char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct pci_pbm_info *VAR_4,
        struct platform_device *VAR_5, u32 VAR_6)
{
 const struct linux_prom64_registers *VAR_7;
 struct device_node *VAR_8 = VAR_5->dev.of_node;
 int VAR_9;

 VAR_4->numa_node = VAR_0;

 VAR_4->pci_ops = &VAR_3;
 VAR_4->config_space_reg_bits = 12;

 VAR_4->index = VAR_1++;

 VAR_4->portid = VAR_6;
 VAR_4->op = VAR_5;
 VAR_4->name = VAR_8->full_name;

 VAR_7 = FUNC_0(VAR_8, "reg", ((void*)0));
 VAR_4->pbm_regs = VAR_7[0].phys_addr;
 VAR_4->controller_regs = VAR_7[1].phys_addr - 0x410000UL;

 FUNC_7("%s: SUN4U PCIE Bus Module\n", VAR_4->name);

 FUNC_1(VAR_4);

 FUNC_5(VAR_4);

 FUNC_2(VAR_4);

 VAR_9 = FUNC_4(VAR_4);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_4);

 VAR_4->pci_bus = FUNC_6(VAR_4, &VAR_5->dev);



 VAR_4->next = VAR_2;
 VAR_2 = VAR_4;

 return 0;
}
