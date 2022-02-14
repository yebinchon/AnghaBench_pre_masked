
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart_proto {int dummy; } ;
struct hci_uart {int flags; struct hci_uart_proto const* proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hci_uart_proto* FUNC_0 (int) ;
 int FUNC_1 (struct hci_uart*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hci_uart *VAR_2, int VAR_3)
{
 const struct hci_uart_proto *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_2->proto = VAR_4;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  return VAR_5;
 }

 FUNC_2(VAR_1, &VAR_2->flags);
 return 0;
}
