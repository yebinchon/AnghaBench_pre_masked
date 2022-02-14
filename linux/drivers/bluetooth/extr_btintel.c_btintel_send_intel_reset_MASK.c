
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct intel_reset {int member_0; int member_1; int member_2; int member_3; int member_4; int boot_param; } ;
struct hci_dev {int dummy; } ;
typedef int params ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,struct intel_reset*,int ) ;
 int FUNC_3 (struct hci_dev*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct hci_dev *VAR_1, u32 VAR_2)
{
 struct intel_reset VAR_3 = { 0x00, 0x01, 0x00, 0x01, 0x00000000 };
 struct sk_buff *VAR_4;

 VAR_3.boot_param = FUNC_4(VAR_2);

 VAR_4 = FUNC_2(VAR_1, 0xfc01, sizeof(VAR_3), &VAR_3,
        VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_1, "Failed to send Intel Reset command");
  return FUNC_1(VAR_4);
 }

 FUNC_5(VAR_4);

 return 0;
}
