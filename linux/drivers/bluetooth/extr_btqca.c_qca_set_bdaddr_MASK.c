
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int,int const*,int ,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct hci_dev *VAR_3, const bdaddr_t *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_0, 6, VAR_4,
    VAR_1, VAR_2);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_3(VAR_3, "QCA Change address cmd failed (%d)", VAR_6);
  return VAR_6;
 }

 FUNC_4(VAR_5);

 return 0;
}
