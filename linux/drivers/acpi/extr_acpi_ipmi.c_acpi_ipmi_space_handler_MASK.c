
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_ipmi_msg {int tx_complete; int tx_message; int tx_msgid; int addr; int head; struct acpi_ipmi_device* device; } ;
struct acpi_ipmi_device {int user_interface; int tx_msg_lock; int tx_msg_list; scalar_t__ dead; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;
typedef int acpi_integer ;
struct TYPE_2__ {int ipmi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct acpi_ipmi_msg*,int ,int *) ;
 int FUNC_1 (struct acpi_ipmi_msg*,int *) ;
 int FUNC_2 (struct acpi_ipmi_msg*) ;
 int FUNC_3 (struct acpi_ipmi_msg*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (struct acpi_ipmi_device*,struct acpi_ipmi_msg*) ;
 struct acpi_ipmi_msg* FUNC_5 () ;
 int FUNC_6 (struct acpi_ipmi_msg*) ;
 int FUNC_7 (int ,int *,int ,int *,int *,int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static acpi_status
FUNC_14(u32 VAR_8, acpi_physical_address VAR_9,
   u32 VAR_10, acpi_integer *VAR_11,
   void *VAR_12, void *VAR_13)
{
 struct acpi_ipmi_msg *VAR_14;
 struct acpi_ipmi_device *VAR_15;
 int VAR_16;
 acpi_status VAR_17;
 unsigned long VAR_18;







 if ((VAR_8 & VAR_0) == VAR_1)
  return VAR_5;

 VAR_14 = FUNC_5();
 if (!VAR_14)
  return VAR_3;
 VAR_15 = VAR_14->device;

 if (FUNC_0(VAR_14, VAR_9, VAR_11) != 0) {
  FUNC_6(VAR_14);
  return VAR_5;
 }

 FUNC_2(VAR_14);
 FUNC_9(&VAR_7.ipmi_lock);

 if (VAR_15->dead) {
  FUNC_10(&VAR_7.ipmi_lock);
  FUNC_6(VAR_14);
  return VAR_3;
 }
 FUNC_11(&VAR_15->tx_msg_lock, VAR_18);
 FUNC_8(&VAR_14->head, &VAR_15->tx_msg_list);
 FUNC_12(&VAR_15->tx_msg_lock, VAR_18);
 FUNC_10(&VAR_7.ipmi_lock);

 VAR_16 = FUNC_7(VAR_15->user_interface,
       &VAR_14->addr,
       VAR_14->tx_msgid,
       &VAR_14->tx_message,
       ((void*)0), 0, 0, VAR_6);
 if (VAR_16) {
  VAR_17 = VAR_2;
  goto out_msg;
 }
 FUNC_13(&VAR_14->tx_complete);

 FUNC_1(VAR_14, VAR_11);
 VAR_17 = VAR_4;

out_msg:
 FUNC_4(VAR_15, VAR_14);
 FUNC_3(VAR_14);
 return VAR_17;
}
