
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rome_version {int rome_ver; int soc_id; int patch_ver; int product_id; } ;
struct hci_dev {int name; } ;
struct edl_event_hdr {scalar_t__ rtype; scalar_t__ data; int cresp; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int ,char*,int ,int ) ;
 int FUNC_4 (struct hci_dev*,char*) ;
 int FUNC_5 (struct hci_dev*,char*,...) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct hci_dev *VAR_9, u32 *VAR_10)
{
 struct sk_buff *VAR_11;
 struct edl_event_hdr *VAR_12;
 struct rome_version *VAR_13;
 char VAR_14;
 int VAR_15 = 0;

 FUNC_4(VAR_9, "QCA Version Request");

 VAR_14 = VAR_4;
 VAR_11 = FUNC_3(VAR_9, VAR_3, VAR_2,
    &VAR_14, VAR_7, VAR_8);
 if (FUNC_1(VAR_11)) {
  VAR_15 = FUNC_2(VAR_11);
  FUNC_5(VAR_9, "Reading QCA version information failed (%d)",
      VAR_15);
  return VAR_15;
 }

 if (VAR_11->len != sizeof(*VAR_12) + sizeof(*VAR_13)) {
  FUNC_5(VAR_9, "QCA Version size mismatch len %d", VAR_11->len);
  VAR_15 = -VAR_5;
  goto out;
 }

 VAR_12 = (struct edl_event_hdr *)(VAR_11->data);
 if (!VAR_12) {
  FUNC_5(VAR_9, "QCA TLV with no header");
  VAR_15 = -VAR_5;
  goto out;
 }

 if (VAR_12->cresp != VAR_1 ||
     VAR_12->rtype != VAR_0) {
  FUNC_5(VAR_9, "QCA Wrong packet received %d %d", VAR_12->cresp,
      VAR_12->rtype);
  VAR_15 = -VAR_6;
  goto out;
 }

 VAR_13 = (struct rome_version *)(VAR_12->data);

 FUNC_0("%s: Product:0x%08x", VAR_9->name, FUNC_8(VAR_13->product_id));
 FUNC_0("%s: Patch  :0x%08x", VAR_9->name, FUNC_7(VAR_13->patch_ver));
 FUNC_0("%s: ROM    :0x%08x", VAR_9->name, FUNC_7(VAR_13->rome_ver));
 FUNC_0("%s: SOC    :0x%08x", VAR_9->name, FUNC_8(VAR_13->soc_id));





 *VAR_10 = (FUNC_8(VAR_13->soc_id) << 16) |
   (FUNC_7(VAR_13->rome_ver) & 0x0000ffff);
 if (*VAR_10 == 0)
  VAR_15 = -VAR_5;

out:
 FUNC_6(VAR_11);
 if (VAR_15)
  FUNC_5(VAR_9, "QCA Failed to get version (%d)", VAR_15);

 return VAR_15;
}
