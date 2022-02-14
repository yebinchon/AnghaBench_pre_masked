
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct rtl_download_response {int dummy; } ;
struct rtl_download_cmd {int index; int data; } ;
struct hci_rp_read_local_version {int lmp_subver; int hci_rev; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_4 ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int,int,struct rtl_download_cmd*,int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct rtl_download_cmd*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct rtl_download_cmd* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,unsigned char const*,int) ;
 int FUNC_10 (struct hci_dev*,char*,...) ;
 int FUNC_11 (struct hci_dev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct hci_dev *VAR_5,
     const unsigned char *VAR_6, int VAR_7)
{
 struct rtl_download_cmd *VAR_8;
 int VAR_9 = VAR_7 / VAR_4 + 1;
 int VAR_10 = VAR_4;
 int VAR_11 = 0;
 int VAR_12;
 struct sk_buff *VAR_13;
 struct hci_rp_read_local_version *VAR_14;

 VAR_8 = FUNC_8(sizeof(struct rtl_download_cmd), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  struct sk_buff *VAR_15;

  FUNC_0("download fw (%d/%d)", VAR_12, VAR_9);

  if (VAR_12 > 0x7f)
   VAR_8->index = (VAR_12 & 0x7f) + 1;
  else
   VAR_8->index = VAR_12;

  if (VAR_12 == (VAR_9 - 1)) {
   VAR_8->index |= 0x80;
   VAR_10 = VAR_7 % VAR_4;
  }
  FUNC_9(VAR_8->data, VAR_6, VAR_10);


  VAR_15 = FUNC_3(VAR_5, 0xfc20, VAR_10 + 1, VAR_8,
         VAR_3);
  if (FUNC_1(VAR_15)) {
   FUNC_10(VAR_5, "download fw command failed (%ld)",
        FUNC_2(VAR_15));
   VAR_11 = -FUNC_2(VAR_15);
   goto out;
  }

  if (VAR_15->len != sizeof(struct rtl_download_response)) {
   FUNC_10(VAR_5, "download fw event length mismatch");
   FUNC_7(VAR_15);
   VAR_11 = -VAR_0;
   goto out;
  }

  FUNC_7(VAR_15);
  VAR_6 += VAR_4;
 }

 VAR_13 = FUNC_5(VAR_5);
 if (FUNC_1(VAR_13)) {
  VAR_11 = FUNC_2(VAR_13);
  FUNC_10(VAR_5, "read local version failed");
  goto out;
 }

 VAR_14 = (struct hci_rp_read_local_version *)VAR_13->data;
 FUNC_11(VAR_5, "fw version 0x%04x%04x",
       FUNC_4(VAR_14->hci_rev), FUNC_4(VAR_14->lmp_subver));
 FUNC_7(VAR_13);

out:
 FUNC_6(VAR_8);
 return VAR_11;
}
