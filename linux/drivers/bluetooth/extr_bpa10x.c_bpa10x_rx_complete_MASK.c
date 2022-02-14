
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer; int pipe; int status; struct hci_dev* context; } ;
struct TYPE_2__ {int err_rx; } ;
struct hci_dev {TYPE_1__ stat; int flags; int name; } ;
struct bpa10x_data {int rx_anchor; int ** rx_skb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct urb*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 int * FUNC_4 (struct hci_dev*,int *,int ,int ,int ,int ) ;
 struct bpa10x_data* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_3->context;
 struct bpa10x_data *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 FUNC_1("%s urb %p status %d count %d", VAR_4->name,
     VAR_3, VAR_3->status, VAR_3->actual_length);

 if (!FUNC_6(VAR_1, &VAR_4->flags))
  return;

 if (VAR_3->status == 0) {
  bool VAR_7 = FUNC_8(VAR_3->pipe);

  VAR_5->rx_skb[VAR_7] = FUNC_4(VAR_4, VAR_5->rx_skb[VAR_7],
      VAR_3->transfer_buffer,
      VAR_3->actual_length,
      VAR_2,
      FUNC_0(VAR_2));
  if (FUNC_2(VAR_5->rx_skb[VAR_7])) {
   FUNC_3(VAR_4, "corrupted event packet");
   VAR_4->stat.err_rx++;
   VAR_5->rx_skb[VAR_7] = ((void*)0);
  }
 }

 FUNC_7(VAR_3, &VAR_5->rx_anchor);

 VAR_6 = FUNC_9(VAR_3, VAR_0);
 if (VAR_6 < 0) {
  FUNC_3(VAR_4, "urb %p failed to resubmit (%d)", VAR_3, -VAR_6);
  FUNC_10(VAR_3);
 }
}
