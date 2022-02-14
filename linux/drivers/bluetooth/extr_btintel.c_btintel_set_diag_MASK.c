
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,int*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct hci_dev*,int) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct hci_dev *VAR_2, bool VAR_3)
{
 struct sk_buff *VAR_4;
 u8 VAR_5[3];
 int VAR_6;

 if (VAR_3) {
  VAR_5[0] = 0x03;
  VAR_5[1] = 0x03;
  VAR_5[2] = 0x03;
 } else {
  VAR_5[0] = 0x00;
  VAR_5[1] = 0x00;
  VAR_5[2] = 0x00;
 }

 VAR_4 = FUNC_2(VAR_2, 0xfc43, 3, VAR_5, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6 == -VAR_0)
   goto done;
  FUNC_3(VAR_2, "Changing Intel diagnostic mode failed (%d)",
      VAR_6);
  return VAR_6;
 }
 FUNC_5(VAR_4);

done:
 FUNC_4(VAR_2, VAR_3);
 return 0;
}
