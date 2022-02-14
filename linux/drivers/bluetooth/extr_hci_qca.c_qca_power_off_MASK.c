
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int dummy; } ;
struct hci_dev {int dummy; } ;


 struct hci_uart* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_uart*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_0)
{
 struct hci_uart *VAR_1 = FUNC_0(VAR_0);


 FUNC_2(VAR_0);

 FUNC_3(8000, 10000);

 FUNC_1(VAR_1);
 return 0;
}
