
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_data {int flags; } ;
struct hci_uart {struct hci_dev* hdev; struct qca_data* priv; } ;
struct hci_dev {int set_bdaddr; int shutdown; int quirks; } ;
typedef enum qca_btsoc_type { ____Placeholder_qca_btsoc_type } qca_btsoc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hci_dev*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (struct hci_dev*) ;
 unsigned int FUNC_4 (unsigned int) ;
 char* FUNC_5 (struct hci_uart*) ;
 unsigned int FUNC_6 (struct hci_uart*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_9 ;
 int FUNC_8 (struct hci_dev*,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct hci_uart*,int ) ;
 int FUNC_10 (struct hci_uart*) ;
 int FUNC_11 (struct hci_dev*,unsigned int,int,int,char const*) ;
 int FUNC_12 (struct hci_uart*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct hci_uart *VAR_12)
{
 struct hci_dev *VAR_13 = VAR_12->hdev;
 struct qca_data *VAR_14 = VAR_12->priv;
 unsigned int VAR_15, VAR_16 = VAR_5;
 enum qca_btsoc_type VAR_17 = FUNC_10(VAR_12);
 const char *VAR_18 = FUNC_5(VAR_12);
 int VAR_19;
 int VAR_20 = 0;

 VAR_19 = FUNC_2(VAR_12);
 if (VAR_19)
  return VAR_19;


 FUNC_1(VAR_6, &VAR_14->flags);




 FUNC_13(VAR_3, &VAR_13->quirks);

 if (FUNC_7(VAR_17)) {
  FUNC_0(VAR_13, "setting up wcn3990");




  FUNC_13(VAR_2, &VAR_13->quirks);
  FUNC_13(VAR_4, &VAR_13->quirks);
  VAR_12->hdev->shutdown = VAR_9;
  VAR_19 = FUNC_12(VAR_12);
  if (VAR_19)
   return VAR_19;

  VAR_19 = FUNC_8(VAR_13, &VAR_20);
  if (VAR_19)
   return VAR_19;
 } else {
  FUNC_0(VAR_13, "ROME setup");
  FUNC_9(VAR_12, VAR_7);
 }


 VAR_15 = FUNC_6(VAR_12, VAR_8);
 if (VAR_15) {
  VAR_19 = FUNC_9(VAR_12, VAR_8);
  if (VAR_19)
   return VAR_19;

  VAR_16 = FUNC_4(VAR_15);
 }

 if (!FUNC_7(VAR_17)) {

  VAR_19 = FUNC_8(VAR_13, &VAR_20);
  if (VAR_19)
   return VAR_19;
 }

 FUNC_0(VAR_13, "QCA controller version 0x%08x", VAR_20);

 VAR_19 = FUNC_11(VAR_13, VAR_16, VAR_17, VAR_20,
   VAR_18);
 if (!VAR_19) {
  FUNC_13(VAR_6, &VAR_14->flags);
  FUNC_3(VAR_13);
 } else if (VAR_19 == -VAR_1) {

  VAR_19 = 0;
 } else if (VAR_19 == -VAR_0) {




  VAR_19 = 0;
 }


 if (FUNC_7(VAR_17))
  VAR_12->hdev->set_bdaddr = VAR_10;
 else
  VAR_12->hdev->set_bdaddr = VAR_11;

 return VAR_19;
}
