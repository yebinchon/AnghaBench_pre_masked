
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ipmi_msg {int msg_done; struct acpi_ipmi_device* device; int head; int tx_complete; int kref; } ;
struct acpi_ipmi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct acpi_ipmi_device* FUNC_1 () ;
 int FUNC_2 (struct acpi_ipmi_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct acpi_ipmi_msg* FUNC_5 (int,int ) ;

__attribute__((used)) static struct acpi_ipmi_msg *FUNC_6(void)
{
 struct acpi_ipmi_device *VAR_2;
 struct acpi_ipmi_msg *VAR_3;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_5(sizeof(struct acpi_ipmi_msg), VAR_1);
 if (!VAR_3) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_4(&VAR_3->kref);
 FUNC_3(&VAR_3->tx_complete);
 FUNC_0(&VAR_3->head);
 VAR_3->device = VAR_2;
 VAR_3->msg_done = VAR_0;

 return VAR_3;
}
