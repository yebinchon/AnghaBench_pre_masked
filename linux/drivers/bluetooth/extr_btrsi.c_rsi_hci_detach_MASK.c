
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hci_adapter {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct rsi_hci_adapter*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct rsi_hci_adapter *VAR_1 = VAR_0;
 struct hci_dev *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->hdev;
 if (VAR_2) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2);
  VAR_1->hdev = ((void*)0);
 }

 FUNC_2(VAR_1);
}
