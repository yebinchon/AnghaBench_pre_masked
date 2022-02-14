
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,int const*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct hci_dev *VAR_1, const bdaddr_t *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1, 0xfc31, 6, VAR_2, VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_3(VAR_1, "Changing Intel device address failed (%d)",
      VAR_4);
  return VAR_4;
 }
 FUNC_4(VAR_3);

 return 0;
}
