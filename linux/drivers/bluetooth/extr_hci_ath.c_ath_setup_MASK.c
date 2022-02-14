
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {TYPE_1__* hdev; } ;
struct TYPE_2__ {int set_bdaddr; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hci_uart *VAR_1)
{
 FUNC_0("hu %p", VAR_1);

 VAR_1->hdev->set_bdaddr = VAR_0;

 return 0;
}
