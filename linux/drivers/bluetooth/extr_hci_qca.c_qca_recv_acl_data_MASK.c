
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct hci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{





 if (FUNC_0(VAR_2->data) == VAR_0)
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_2(VAR_1, VAR_2);
}
