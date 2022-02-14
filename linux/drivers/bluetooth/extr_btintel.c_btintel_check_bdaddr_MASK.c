
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
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct hci_dev *VAR_5)
{
 struct hci_rp_read_bd_addr *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_3, 0, ((void*)0),
        VAR_2);
 if (FUNC_0(VAR_7)) {
  int VAR_8 = FUNC_1(VAR_7);
  FUNC_4(VAR_5, "Reading Intel device address failed (%d)",
      VAR_8);
  return VAR_8;
 }

 if (VAR_7->len != sizeof(*VAR_6)) {
  FUNC_4(VAR_5, "Intel device address length mismatch");
  FUNC_5(VAR_7);
  return -VAR_1;
 }

 VAR_6 = (struct hci_rp_read_bd_addr *)VAR_7->data;






 if (!FUNC_3(&VAR_6->bdaddr, VAR_0)) {
  FUNC_4(VAR_5, "Found Intel default device address (%pMR)",
      &VAR_6->bdaddr);
  FUNC_6(VAR_4, &VAR_5->quirks);
 }

 FUNC_5(VAR_7);

 return 0;
}
