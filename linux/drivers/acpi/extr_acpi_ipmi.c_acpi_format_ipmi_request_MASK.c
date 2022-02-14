
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_ipmi_msg {scalar_t__ data_len; int data; int cmd; int netfn; } ;
struct TYPE_2__ {scalar_t__* data; int channel; int addr_type; } ;
struct acpi_ipmi_msg {scalar_t__ tx_msgid; struct acpi_ipmi_device* device; TYPE_1__ addr; int data; struct kernel_ipmi_msg tx_message; } ;
struct acpi_ipmi_device {int tx_msg_lock; scalar_t__ curr_msgid; int dev; } ;
struct acpi_ipmi_buffer {scalar_t__ length; int data; } ;
typedef int acpi_physical_address ;
typedef int acpi_integer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct acpi_ipmi_msg *VAR_4,
        acpi_physical_address VAR_5,
        acpi_integer *VAR_6)
{
 struct kernel_ipmi_msg *VAR_7;
 struct acpi_ipmi_buffer *VAR_8;
 struct acpi_ipmi_device *VAR_9;
 unsigned long VAR_10;

 VAR_7 = &VAR_4->tx_message;





 VAR_7->netfn = FUNC_1(VAR_5);
 VAR_7->cmd = FUNC_0(VAR_5);
 VAR_7->data = VAR_4->data;





 VAR_8 = (struct acpi_ipmi_buffer *)VAR_6;


 if (VAR_8->length > VAR_0) {
  FUNC_2(VAR_4->device->dev, 1,
         "Unexpected request (msg len %d).\n",
         VAR_8->length);
  return -VAR_1;
 }
 VAR_7->data_len = VAR_8->length;
 FUNC_3(VAR_4->data, VAR_8->data, VAR_7->data_len);
 VAR_4->addr.addr_type = VAR_3;
 VAR_4->addr.channel = VAR_2;
 VAR_4->addr.data[0] = 0;


 VAR_9 = VAR_4->device;

 FUNC_4(&VAR_9->tx_msg_lock, VAR_10);
 VAR_9->curr_msgid++;
 VAR_4->tx_msgid = VAR_9->curr_msgid;
 FUNC_5(&VAR_9->tx_msg_lock, VAR_10);

 return 0;
}
