
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_version {int lmp_subver; int hci_rev; } ;
struct hci_dev {scalar_t__ bus; } ;
struct bcm_subver_table {char* name; int subver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct bcm_subver_table* VAR_1 ;
 struct bcm_subver_table* VAR_2 ;
 int FUNC_2 (struct hci_dev*,char*,char const*,int,int,int,int) ;
 int FUNC_3 (struct hci_dev*) ;
 struct sk_buff* FUNC_4 (struct hci_dev*) ;
 struct sk_buff* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,size_t,char*,char const*,...) ;

int FUNC_11(struct hci_dev *VAR_3, char *VAR_4, size_t VAR_5,
       bool VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9, VAR_10;
 const char *VAR_11 = "BCM";
 struct sk_buff *VAR_12;
 struct hci_rp_read_local_version *VAR_13;
 const struct bcm_subver_table *VAR_14;
 int VAR_15, VAR_16;


 VAR_16 = FUNC_6(VAR_3);
 if (VAR_16)
  return VAR_16;


 VAR_12 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_13 = (struct hci_rp_read_local_version *)VAR_12->data;
 VAR_8 = FUNC_9(VAR_13->hci_rev);
 VAR_7 = FUNC_9(VAR_13->lmp_subver);
 FUNC_8(VAR_12);


 if (!VAR_6) {
  VAR_16 = FUNC_3(VAR_3);
  if (VAR_16)
   return VAR_16;
 }


 if (((VAR_8 & 0xf000) >> 12) > 3)
  return 0;

 VAR_14 = (VAR_3->bus == VAR_0) ? VAR_2 :
          VAR_1;

 for (VAR_15 = 0; VAR_14[VAR_15].name; VAR_15++) {
  if (VAR_7 == VAR_14[VAR_15].subver) {
   VAR_11 = VAR_14[VAR_15].name;
   break;
  }
 }

 if (VAR_3->bus == VAR_0) {

  VAR_12 = FUNC_5(VAR_3);
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);

  VAR_10 = FUNC_7(VAR_12->data + 1);
  VAR_9 = FUNC_7(VAR_12->data + 3);
  FUNC_8(VAR_12);

  FUNC_10(VAR_4, VAR_5, "brcm/%s-%4.4x-%4.4x.hcd",
    VAR_11, VAR_10, VAR_9);
 } else {
  FUNC_10(VAR_4, VAR_5, "brcm/%s.hcd", VAR_11);
 }

 FUNC_2(VAR_3, "%s (%3.3u.%3.3u.%3.3u) build %4.4u",
      VAR_11, (VAR_7 & 0xe000) >> 13,
      (VAR_7 & 0x1f00) >> 8, (VAR_7 & 0x00ff), VAR_8 & 0x0fff);

 return 0;
}
