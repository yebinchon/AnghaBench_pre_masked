
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct intel_version {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int ,int *,int ) ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct intel_version*,int ,int) ;

int FUNC_6(struct hci_dev *VAR_2, struct intel_version *VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_2(VAR_2, 0xfc05, 0, ((void*)0), VAR_1);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_2, "Reading Intel version information failed (%ld)",
      FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 if (VAR_4->len != sizeof(*VAR_3)) {
  FUNC_3(VAR_2, "Intel version event size mismatch");
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 FUNC_5(VAR_3, VAR_4->data, sizeof(*VAR_3));

 FUNC_4(VAR_4);

 return 0;
}
