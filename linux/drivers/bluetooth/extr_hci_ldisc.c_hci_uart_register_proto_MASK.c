
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart_proto {size_t id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hci_uart_proto const** VAR_3 ;

int FUNC_1(const struct hci_uart_proto *VAR_4)
{
 if (VAR_4->id >= VAR_2)
  return -VAR_1;

 if (VAR_3[VAR_4->id])
  return -VAR_0;

 VAR_3[VAR_4->id] = VAR_4;

 FUNC_0("HCI UART protocol %s registered", VAR_4->name);

 return 0;
}
