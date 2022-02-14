
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,struct device_node*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device * VAR_1, struct device_attribute * VAR_2, char * VAR_3)
{
 struct pci_dev *VAR_4;
 struct device_node *VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = VAR_4->dev.of_node;

 return FUNC_0 (VAR_3, VAR_0, "%pOF\n", VAR_5);
}
