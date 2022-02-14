
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct agp_bridge_data {size_t aperture_size_idx; int gatt_table_real; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 int FUNC_1 (struct agp_bridge_data*) ;
 TYPE_1__* VAR_1 ;
 struct agp_bridge_data* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 struct agp_bridge_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(FUNC_4(VAR_3->gatt_table_real),
      VAR_1[VAR_3->aperture_size_idx].size);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 VAR_0--;
}
