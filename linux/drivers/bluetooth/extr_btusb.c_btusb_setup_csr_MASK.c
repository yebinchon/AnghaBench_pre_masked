
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct hci_rp_read_local_version {int lmp_subver; int manufacturer; } ;
struct hci_dev {int quirks; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_5)
{
 struct hci_rp_read_local_version *VAR_6;
 struct sk_buff *VAR_7;

 FUNC_0("%s", VAR_5->name);

 VAR_7 = FUNC_3(VAR_5, VAR_2, 0, ((void*)0),
        VAR_1);
 if (FUNC_1(VAR_7)) {
  int VAR_8 = FUNC_2(VAR_7);
  FUNC_4(VAR_5, "CSR: Local version failed (%d)", VAR_8);
  return VAR_8;
 }

 if (VAR_7->len != sizeof(struct hci_rp_read_local_version)) {
  FUNC_4(VAR_5, "CSR: Local version length mismatch");
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 VAR_6 = (struct hci_rp_read_local_version *)VAR_7->data;


 if (FUNC_7(VAR_6->manufacturer) != 10 ||
     FUNC_7(VAR_6->lmp_subver) == 0x0c5c) {



  FUNC_5(VAR_4, &VAR_5->quirks);




  FUNC_8(VAR_3, &VAR_5->quirks);
 }

 FUNC_6(VAR_7);

 return 0;
}
