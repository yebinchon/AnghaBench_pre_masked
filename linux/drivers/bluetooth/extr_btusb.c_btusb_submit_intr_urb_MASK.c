
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct hci_dev {int name; } ;
struct btusb_data {int intr_anchor; TYPE_1__* intr_ep; int udev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bInterval; int bEndpointAddress; int wMaxPacketSize; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_dev*,char*,struct urb*,int) ;
 int VAR_4 ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*,int ,unsigned int,unsigned char*,int,int ,struct hci_dev*,int ) ;
 int FUNC_8 (struct urb*) ;
 unsigned int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ) ;
 int FUNC_11 (struct urb*) ;

__attribute__((used)) static int FUNC_12(struct hci_dev *VAR_5, gfp_t VAR_6)
{
 struct btusb_data *VAR_7 = FUNC_2(VAR_5);
 struct urb *VAR_8;
 unsigned char *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 FUNC_0("%s", VAR_5->name);

 if (!VAR_7->intr_ep)
  return -VAR_0;

 VAR_8 = FUNC_5(0, VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_7->intr_ep->wMaxPacketSize);

 VAR_9 = FUNC_3(VAR_12, VAR_6);
 if (!VAR_9) {
  FUNC_8(VAR_8);
  return -VAR_1;
 }

 VAR_10 = FUNC_9(VAR_7->udev, VAR_7->intr_ep->bEndpointAddress);

 FUNC_7(VAR_8, VAR_7->udev, VAR_10, VAR_9, VAR_12,
    VAR_4, VAR_5, VAR_7->intr_ep->bInterval);

 VAR_8->transfer_flags |= VAR_3;

 FUNC_6(VAR_8, &VAR_7->intr_anchor);

 VAR_11 = FUNC_10(VAR_8, VAR_6);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_2 && VAR_11 != -VAR_0)
   FUNC_1(VAR_5, "urb %p submission failed (%d)",
       VAR_8, -VAR_11);
  FUNC_11(VAR_8);
 }

 FUNC_8(VAR_8);

 return VAR_11;
}
