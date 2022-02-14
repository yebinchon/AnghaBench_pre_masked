
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pci_pbm_info {int config_space_reg_bits; int chip_type; void* chip_revision; void* chip_version; int name; scalar_t__ sync_reg; scalar_t__ controller_regs; scalar_t__ pbm_regs; struct platform_device* op; int portid; scalar_t__ index; int * pci_ops; int numa_node; struct pci_pbm_info* next; } ;
struct linux_prom64_registers {scalar_t__ phys_addr; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;



 struct linux_prom64_registers* FUNC_0 (struct device_node*,char*,int *) ;
 void* FUNC_1 (struct device_node*,char*,int ) ;
 int FUNC_2 (struct pci_pbm_info*) ;
 int FUNC_3 (struct pci_pbm_info*) ;
 int VAR_1 ;
 struct pci_pbm_info* VAR_2 ;
 int FUNC_4 (char*,int ,char const*,void*,void*) ;
 int FUNC_5 (struct pci_pbm_info*) ;
 int FUNC_6 (struct pci_pbm_info*) ;
 int FUNC_7 (struct pci_pbm_info*) ;
 int FUNC_8 (struct pci_pbm_info*,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct pci_pbm_info *VAR_4,
      struct platform_device *VAR_5, u32 VAR_6,
      int VAR_7)
{
 const struct linux_prom64_registers *VAR_8;
 struct device_node *VAR_9 = VAR_5->dev.of_node;
 const char *VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 128:
  VAR_10 = "TOMATILLO";
  break;

 case 129:
  VAR_10 = "SCHIZO+";
  break;

 case 130:
 default:
  VAR_10 = "SCHIZO";
  break;
 }
 VAR_8 = FUNC_0(VAR_9, "reg", ((void*)0));

 VAR_4->next = VAR_2;
 VAR_2 = VAR_4;

 VAR_4->numa_node = VAR_0;

 VAR_4->pci_ops = &VAR_3;
 VAR_4->config_space_reg_bits = 8;

 VAR_4->index = VAR_1++;

 VAR_4->portid = VAR_6;
 VAR_4->op = VAR_5;

 VAR_4->chip_type = VAR_7;
 VAR_4->chip_version = FUNC_1(VAR_9, "version#", 0);
 VAR_4->chip_revision = FUNC_1(VAR_9, "module-version#", 0);

 VAR_4->pbm_regs = VAR_8[0].phys_addr;
 VAR_4->controller_regs = VAR_8[1].phys_addr - 0x10000UL;

 if (VAR_7 == 128)
  VAR_4->sync_reg = VAR_8[3].phys_addr + 0x1a18UL;

 VAR_4->name = VAR_9->full_name;

 FUNC_4("%s: %s PCI Bus Module ver[%x:%x]\n",
        VAR_4->name, VAR_10,
        VAR_4->chip_version, VAR_4->chip_revision);

 FUNC_5(VAR_4);

 FUNC_2(VAR_4);

 FUNC_3(VAR_4);

 VAR_11 = FUNC_6(VAR_4);
 if (VAR_11)
  return VAR_11;

 FUNC_7(VAR_4);

 FUNC_8(VAR_4, &VAR_5->dev);

 return 0;
}
