
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct hci_dev*,char*) ;
 int FUNC_4 (struct hci_dev*,char*,int) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct hci_dev *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 FUNC_3(VAR_3, "QCA pre shutdown cmd");

 VAR_4 = FUNC_2(VAR_3, VAR_2, 0,
    ((void*)0), VAR_0, VAR_1);

 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_4(VAR_3, "QCA preshutdown_cmd failed (%d)", VAR_5);
  return VAR_5;
 }

 FUNC_5(VAR_4);

 return 0;
}
