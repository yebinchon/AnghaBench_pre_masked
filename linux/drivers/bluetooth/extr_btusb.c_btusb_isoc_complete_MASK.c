
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; int status; scalar_t__ transfer_buffer; TYPE_1__* iso_frame_desc; int actual_length; struct hci_dev* context; } ;
struct TYPE_4__ {unsigned int byte_rx; int err_rx; } ;
struct hci_dev {TYPE_2__ stat; int flags; int name; } ;
struct btusb_data {int isoc_anchor; int flags; } ;
struct TYPE_3__ {unsigned int offset; unsigned int actual_length; scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct urb*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hci_dev*,char*,...) ;
 scalar_t__ FUNC_2 (struct btusb_data*,scalar_t__,unsigned int) ;
 struct btusb_data* FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_6)
{
 struct hci_dev *VAR_7 = VAR_6->context;
 struct btusb_data *VAR_8 = FUNC_3(VAR_7);
 int VAR_9, VAR_10;

 FUNC_0("%s urb %p status %d count %d", VAR_7->name, VAR_6, VAR_6->status,
        VAR_6->actual_length);

 if (!FUNC_4(VAR_5, &VAR_7->flags))
  return;

 if (VAR_6->status == 0) {
  for (VAR_9 = 0; VAR_9 < VAR_6->number_of_packets; VAR_9++) {
   unsigned int VAR_11 = VAR_6->iso_frame_desc[VAR_9].offset;
   unsigned int VAR_12 = VAR_6->iso_frame_desc[VAR_9].actual_length;

   if (VAR_6->iso_frame_desc[VAR_9].status)
    continue;

   VAR_7->stat.byte_rx += VAR_12;

   if (FUNC_2(VAR_8, VAR_6->transfer_buffer + VAR_11,
         VAR_12) < 0) {
    FUNC_1(VAR_7, "corrupted SCO packet");
    VAR_7->stat.err_rx++;
   }
  }
 } else if (VAR_6->status == -VAR_2) {

  return;
 }

 if (!FUNC_4(VAR_0, &VAR_8->flags))
  return;

 FUNC_5(VAR_6, &VAR_8->isoc_anchor);

 VAR_10 = FUNC_6(VAR_6, VAR_4);
 if (VAR_10 < 0) {



  if (VAR_10 != -VAR_3 && VAR_10 != -VAR_1)
   FUNC_1(VAR_7, "urb %p failed to resubmit (%d)",
       VAR_6, -VAR_10);
  FUNC_7(VAR_6);
 }
}
