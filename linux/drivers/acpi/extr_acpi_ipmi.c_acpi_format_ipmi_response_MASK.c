
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ipmi_msg {scalar_t__ msg_done; int rx_len; int data; } ;
struct acpi_ipmi_buffer {scalar_t__ status; int data; int length; } ;
typedef int acpi_integer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct acpi_ipmi_msg *VAR_1,
          acpi_integer *VAR_2)
{
 struct acpi_ipmi_buffer *VAR_3;





 VAR_3 = (struct acpi_ipmi_buffer *)VAR_2;





 VAR_3->status = VAR_1->msg_done;
 if (VAR_1->msg_done != VAR_0)
  return;





 VAR_3->length = VAR_1->rx_len;
 FUNC_0(VAR_3->data, VAR_1->data, VAR_1->rx_len);
}
