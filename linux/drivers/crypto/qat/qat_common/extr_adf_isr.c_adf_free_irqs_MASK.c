
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msix_entry {int vector; } ;
struct adf_hw_device_data {int num_banks; } ;
struct adf_etr_data {struct adf_accel_dev* banks; } ;
struct TYPE_2__ {int num_entries; struct msix_entry* entries; } ;
struct adf_accel_pci {TYPE_1__ msix_entries; } ;
struct adf_accel_dev {struct adf_etr_data* transport; struct adf_hw_device_data* hw_device; struct adf_accel_pci accel_pci_dev; } ;


 int FUNC_0 (int ,struct adf_accel_dev*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct adf_accel_dev *VAR_0)
{
 struct adf_accel_pci *VAR_1 = &VAR_0->accel_pci_dev;
 struct adf_hw_device_data *VAR_2 = VAR_0->hw_device;
 struct msix_entry *VAR_3 = VAR_1->msix_entries.entries;
 struct adf_etr_data *VAR_4 = VAR_0->transport;
 int VAR_5 = 0;

 if (VAR_1->msix_entries.num_entries > 1) {
  for (VAR_5 = 0; VAR_5 < VAR_2->num_banks; VAR_5++) {
   FUNC_1(VAR_3[VAR_5].vector, ((void*)0));
   FUNC_0(VAR_3[VAR_5].vector, &VAR_4->banks[VAR_5]);
  }
 }
 FUNC_1(VAR_3[VAR_5].vector, ((void*)0));
 FUNC_0(VAR_3[VAR_5].vector, VAR_0);
}
