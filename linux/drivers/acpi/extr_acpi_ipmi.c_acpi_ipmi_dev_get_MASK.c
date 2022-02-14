
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ipmi_device {int kref; } ;
struct TYPE_2__ {int ipmi_lock; struct acpi_ipmi_device* selected_smi; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct acpi_ipmi_device *FUNC_3(void)
{
 struct acpi_ipmi_device *VAR_1 = ((void*)0);

 FUNC_1(&VAR_0.ipmi_lock);
 if (VAR_0.selected_smi) {
  VAR_1 = VAR_0.selected_smi;
  FUNC_0(&VAR_1->kref);
 }
 FUNC_2(&VAR_0.ipmi_lock);

 return VAR_1;
}
