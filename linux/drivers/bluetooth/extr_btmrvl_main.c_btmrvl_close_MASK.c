
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct btmrvl_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int tx_queue; } ;


 struct btmrvl_private* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hci_dev *VAR_0)
{
 struct btmrvl_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->adapter->tx_queue);

 return 0;
}
