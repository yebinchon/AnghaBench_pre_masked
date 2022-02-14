
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {int data; scalar_t__ cb; void* dev; } ;
struct bfusb_data_scb {struct urb* urb; } ;
struct bfusb_data {int pending_q; TYPE_1__* hdev; int udev; int bulk_in_ep; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,struct bfusb_data*,struct urb*) ;
 int FUNC_1 (char*,int ,struct urb*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int ,int,int ,int,int ,struct sk_buff*) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_11(struct bfusb_data *VAR_4, struct urb *VAR_5)
{
 struct bfusb_data_scb *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8, VAR_9, VAR_10 = VAR_2 + 32;

 FUNC_0("bfusb %p urb %p", VAR_4, VAR_5);

 if (!VAR_5) {
  VAR_5 = FUNC_6(0, VAR_1);
  if (!VAR_5)
   return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_10, VAR_1);
 if (!VAR_7) {
  FUNC_8(VAR_5);
  return -VAR_0;
 }

 VAR_7->dev = (void *) VAR_4;

 VAR_6 = (struct bfusb_data_scb *) VAR_7->cb;
 VAR_6->urb = VAR_5;

 VAR_9 = FUNC_9(VAR_4->udev, VAR_4->bulk_in_ep);

 FUNC_7(VAR_5, VAR_4->udev, VAR_9, VAR_7->data, VAR_10,
   VAR_3, VAR_7);

 FUNC_4(&VAR_4->pending_q, VAR_7);

 VAR_8 = FUNC_10(VAR_5, VAR_1);
 if (VAR_8) {
  FUNC_1("%s bulk rx submit failed urb %p err %d",
     VAR_4->hdev->name, VAR_5, VAR_8);
  FUNC_5(VAR_7, &VAR_4->pending_q);
  FUNC_3(VAR_7);
  FUNC_8(VAR_5);
 }

 return VAR_8;
}
