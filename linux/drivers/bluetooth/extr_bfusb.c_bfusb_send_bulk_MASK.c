
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {int len; int data; scalar_t__ cb; } ;
struct bfusb_data_scb {struct urb* urb; } ;
struct bfusb_data {int pending_tx; int pending_q; TYPE_1__* hdev; int udev; int bulk_out_ep; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,struct bfusb_data*,struct sk_buff*,int ) ;
 int FUNC_1 (char*,int ,struct urb*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct urb* FUNC_3 (struct bfusb_data*) ;
 int VAR_2 ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int ,int,int ,int ,int ,struct sk_buff*) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_11(struct bfusb_data *VAR_3, struct sk_buff *VAR_4)
{
 struct bfusb_data_scb *VAR_5 = (void *) VAR_4->cb;
 struct urb *VAR_6 = FUNC_3(VAR_3);
 int VAR_7, VAR_8;

 FUNC_0("bfusb %p skb %p len %d", VAR_3, VAR_4, VAR_4->len);

 if (!VAR_6) {
  VAR_6 = FUNC_6(0, VAR_1);
  if (!VAR_6)
   return -VAR_0;
 }

 VAR_8 = FUNC_9(VAR_3->udev, VAR_3->bulk_out_ep);

 FUNC_7(VAR_6, VAR_3->udev, VAR_8, VAR_4->data, VAR_4->len,
   VAR_2, VAR_4);

 VAR_5->urb = VAR_6;

 FUNC_4(&VAR_3->pending_q, VAR_4);

 VAR_7 = FUNC_10(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_1("%s bulk tx submit failed urb %p err %d",
     VAR_3->hdev->name, VAR_6, VAR_7);
  FUNC_5(VAR_4, &VAR_3->pending_q);
  FUNC_8(VAR_6);
 } else
  FUNC_2(&VAR_3->pending_tx);

 return VAR_7;
}
