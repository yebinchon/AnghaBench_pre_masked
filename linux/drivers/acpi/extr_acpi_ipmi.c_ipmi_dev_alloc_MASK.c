
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_user {int dummy; } ;
struct device {int dummy; } ;
struct acpi_ipmi_device {int ipmi_ifnum; struct ipmi_user* user_interface; int dev; int handle; int tx_msg_lock; int tx_msg_list; int head; int kref; } ;
typedef int acpi_handle ;
struct TYPE_2__ {int ipmi_hndlrs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int,int *,struct acpi_ipmi_device*,struct ipmi_user**) ;
 int FUNC_3 (struct acpi_ipmi_device*) ;
 int FUNC_4 (int *) ;
 struct acpi_ipmi_device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct acpi_ipmi_device *
FUNC_8(int VAR_2, struct device *VAR_3, acpi_handle VAR_4)
{
 struct acpi_ipmi_device *VAR_5;
 int VAR_6;
 struct ipmi_user *VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_4(&VAR_5->kref);
 FUNC_0(&VAR_5->head);
 FUNC_0(&VAR_5->tx_msg_list);
 FUNC_7(&VAR_5->tx_msg_lock);
 VAR_5->handle = VAR_4;
 VAR_5->dev = FUNC_1(VAR_3);
 VAR_5->ipmi_ifnum = VAR_2;

 VAR_6 = FUNC_2(VAR_2, &VAR_1.ipmi_hndlrs,
          VAR_5, &VAR_7);
 if (VAR_6) {
  FUNC_6(VAR_3);
  FUNC_3(VAR_5);
  return ((void*)0);
 }
 VAR_5->user_interface = VAR_7;

 return VAR_5;
}
