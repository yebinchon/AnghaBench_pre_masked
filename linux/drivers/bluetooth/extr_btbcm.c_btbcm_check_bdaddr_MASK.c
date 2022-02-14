
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct hci_rp_read_bd_addr {int bdaddr; } ;
struct hci_dev {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int FUNC_5 (struct hci_dev*,char*,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct hci_dev *VAR_12)
{
 struct hci_rp_read_bd_addr *VAR_13;
 struct sk_buff *VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_10, 0, ((void*)0),
        VAR_9);
 if (FUNC_0(VAR_14)) {
  int VAR_15 = FUNC_1(VAR_14);
  FUNC_4(VAR_12, "BCM: Reading device address failed (%d)", VAR_15);
  return VAR_15;
 }

 if (VAR_14->len != sizeof(*VAR_13)) {
  FUNC_4(VAR_12, "BCM: Device address length mismatch");
  FUNC_6(VAR_14);
  return -VAR_8;
 }

 VAR_13 = (struct hci_rp_read_bd_addr *)VAR_14->data;
 if (!FUNC_3(&VAR_13->bdaddr, VAR_0) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_1) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_2) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_3) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_4) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_7) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_6) ||
     !FUNC_3(&VAR_13->bdaddr, VAR_5)) {
  FUNC_5(VAR_12, "BCM: Using default device address (%pMR)",
       &VAR_13->bdaddr);
  FUNC_7(VAR_11, &VAR_12->quirks);
 }

 FUNC_6(VAR_14);

 return 0;
}
