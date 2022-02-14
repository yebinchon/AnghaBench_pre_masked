
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int actual_length; int transfer_buffer; struct hci_dev* context; } ;
struct sk_buff {int dummy; } ;
struct hci_dev {int name; } ;
struct btusb_data {int udev; int diag_anchor; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct urb*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,char*,struct urb*,int) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 struct btusb_data* FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_5)
{
 struct hci_dev *VAR_6 = VAR_5->context;
 struct btusb_data *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 FUNC_0("%s urb %p status %d count %d", VAR_6->name, VAR_5, VAR_5->status,
        VAR_5->actual_length);

 if (VAR_5->status == 0) {
  struct sk_buff *VAR_9;

  VAR_9 = FUNC_2(VAR_5->actual_length, VAR_4);
  if (VAR_9) {
   FUNC_5(VAR_9, VAR_5->transfer_buffer,
         VAR_5->actual_length);
   FUNC_4(VAR_6, VAR_9);
  }
 } else if (VAR_5->status == -VAR_2) {

  return;
 }

 if (!FUNC_6(VAR_0, &VAR_7->flags))
  return;

 FUNC_7(VAR_5, &VAR_7->diag_anchor);
 FUNC_8(VAR_7->udev);

 VAR_8 = FUNC_9(VAR_5, VAR_4);
 if (VAR_8 < 0) {



  if (VAR_8 != -VAR_3 && VAR_8 != -VAR_1)
   FUNC_1(VAR_6, "urb %p failed to resubmit (%d)",
       VAR_5, -VAR_8);
  FUNC_10(VAR_5);
 }
}
