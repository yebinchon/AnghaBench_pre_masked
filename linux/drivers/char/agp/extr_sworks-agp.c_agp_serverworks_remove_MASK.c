
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct agp_bridge_data {int * dev; } ;
struct TYPE_2__ {int * svrwrks_dev; } ;


 int FUNC_0 (struct agp_bridge_data*) ;
 int FUNC_1 (struct agp_bridge_data*) ;
 int FUNC_2 (int *) ;
 struct agp_bridge_data* FUNC_3 (struct pci_dev*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct agp_bridge_data *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->dev);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_2(VAR_0.svrwrks_dev);
 VAR_0.svrwrks_dev = ((void*)0);
}
