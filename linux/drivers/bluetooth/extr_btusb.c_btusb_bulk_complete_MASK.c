
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int actual_length; int transfer_buffer; struct hci_dev* context; } ;
struct TYPE_2__ {int err_rx; int byte_rx; } ;
struct hci_dev {TYPE_1__ stat; int flags; int name; } ;
struct btusb_data {scalar_t__ (* recv_bulk ) (struct btusb_data*,int ,int ) ;int udev; int bulk_anchor; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct urb*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hci_dev*,char*,...) ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct btusb_data*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct urb*,int ) ;
 int FUNC_8 (struct urb*) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_6)
{
 struct hci_dev *VAR_7 = VAR_6->context;
 struct btusb_data *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 FUNC_0("%s urb %p status %d count %d", VAR_7->name, VAR_6, VAR_6->status,
        VAR_6->actual_length);

 if (!FUNC_4(VAR_5, &VAR_7->flags))
  return;

 if (VAR_6->status == 0) {
  VAR_7->stat.byte_rx += VAR_6->actual_length;

  if (VAR_8->recv_bulk(VAR_8, VAR_6->transfer_buffer,
        VAR_6->actual_length) < 0) {
   FUNC_1(VAR_7, "corrupted ACL packet");
   VAR_7->stat.err_rx++;
  }
 } else if (VAR_6->status == -VAR_2) {

  return;
 }

 if (!FUNC_4(VAR_0, &VAR_8->flags))
  return;

 FUNC_5(VAR_6, &VAR_8->bulk_anchor);
 FUNC_6(VAR_8->udev);

 VAR_9 = FUNC_7(VAR_6, VAR_4);
 if (VAR_9 < 0) {



  if (VAR_9 != -VAR_3 && VAR_9 != -VAR_1)
   FUNC_1(VAR_7, "urb %p failed to resubmit (%d)",
       VAR_6, -VAR_9);
  FUNC_8(VAR_6);
 }
}
