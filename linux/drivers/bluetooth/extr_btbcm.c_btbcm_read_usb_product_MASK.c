
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int,int ,int *,int ) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct hci_dev *VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_3(VAR_2, 0xfc5a, 0, ((void*)0), VAR_1);
 if (FUNC_1(VAR_3)) {
  FUNC_4(VAR_2, "BCM: Read USB product info failed (%ld)",
      FUNC_2(VAR_3));
  return VAR_3;
 }

 if (VAR_3->len != 5) {
  FUNC_4(VAR_2, "BCM: USB product length mismatch");
  FUNC_5(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
