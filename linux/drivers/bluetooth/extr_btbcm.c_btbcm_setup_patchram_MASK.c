
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int quirks; int dev; } ;
struct firmware {int dummy; } ;
typedef int fw_name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,char*,char*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,char*,int,int) ;
 int FUNC_5 (struct hci_dev*,struct firmware const*) ;
 struct sk_buff* FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char*,int *) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct hci_dev *VAR_1)
{
 char VAR_2[64];
 const struct firmware *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_4(VAR_1, VAR_2, sizeof(VAR_2), 0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_9(&VAR_3, VAR_2, &VAR_1->dev);
 if (VAR_5 < 0) {
  FUNC_2(VAR_1, "BCM: Patch %s not found", VAR_2);
  goto done;
 }

 FUNC_5(VAR_1, VAR_3);

 FUNC_8(VAR_3);


 VAR_5 = FUNC_4(VAR_1, VAR_2, sizeof(VAR_2), 1);
 if (VAR_5)
  return VAR_5;


 VAR_4 = FUNC_6(VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_2(VAR_1, "%s", (char *)(VAR_4->data + 1));
 FUNC_7(VAR_4);

done:
 FUNC_3(VAR_1);

 FUNC_10(VAR_0, &VAR_1->quirks);

 return 0;
}
