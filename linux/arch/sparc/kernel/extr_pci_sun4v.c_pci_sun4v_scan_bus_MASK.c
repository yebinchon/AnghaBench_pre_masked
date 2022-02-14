
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct property {int dummy; } ;
struct pci_pbm_info {int pci_bus; int is_66mhz_capable; TYPE_2__* op; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct property* FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (struct pci_pbm_info*,struct device*) ;

__attribute__((used)) static void FUNC_2(struct pci_pbm_info *VAR_0, struct device *VAR_1)
{
 struct property *VAR_2;
 struct device_node *VAR_3;

 VAR_3 = VAR_0->op->dev.of_node;
 VAR_2 = FUNC_0(VAR_3, "66mhz-capable", ((void*)0));
 VAR_0->is_66mhz_capable = (VAR_2 != ((void*)0));
 VAR_0->pci_bus = FUNC_1(VAR_0, VAR_1);


}
