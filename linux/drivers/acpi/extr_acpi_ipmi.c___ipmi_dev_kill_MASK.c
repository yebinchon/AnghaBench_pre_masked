
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ipmi_device {int dead; int head; } ;
struct TYPE_2__ {struct acpi_ipmi_device* selected_smi; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct acpi_ipmi_device *VAR_1)
{
 FUNC_0(&VAR_1->head);
 if (VAR_0.selected_smi == VAR_1)
  VAR_0.selected_smi = ((void*)0);





 VAR_1->dead = 1;
}
