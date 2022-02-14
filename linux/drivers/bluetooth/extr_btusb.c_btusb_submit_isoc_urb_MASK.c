
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct hci_dev {int name; } ;
struct btusb_data {int isoc_anchor; TYPE_1__* isoc_rx_ep; int udev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct urb*,int,int) ;
 int FUNC_2 (struct hci_dev*,char*,struct urb*,int) ;
 int VAR_6 ;
 struct btusb_data* FUNC_3 (struct hci_dev*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 struct urb* FUNC_6 (int,int ) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (struct urb*,int ,unsigned int,unsigned char*,int,int ,struct hci_dev*,int ) ;
 int FUNC_9 (struct urb*) ;
 unsigned int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (struct urb*) ;

__attribute__((used)) static int FUNC_13(struct hci_dev *VAR_7, gfp_t VAR_8)
{
 struct btusb_data *VAR_9 = FUNC_3(VAR_7);
 struct urb *VAR_10;
 unsigned char *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;

 FUNC_0("%s", VAR_7->name);

 if (!VAR_9->isoc_rx_ep)
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_0, VAR_8);
 if (!VAR_10)
  return -VAR_2;

 VAR_14 = FUNC_5(VAR_9->isoc_rx_ep->wMaxPacketSize) *
      VAR_0;

 VAR_11 = FUNC_4(VAR_14, VAR_8);
 if (!VAR_11) {
  FUNC_9(VAR_10);
  return -VAR_2;
 }

 VAR_12 = FUNC_10(VAR_9->udev, VAR_9->isoc_rx_ep->bEndpointAddress);

 FUNC_8(VAR_10, VAR_9->udev, VAR_12, VAR_11, VAR_14, VAR_6,
    VAR_7, VAR_9->isoc_rx_ep->bInterval);

 VAR_10->transfer_flags = VAR_4 | VAR_5;

 FUNC_1(VAR_10, VAR_14,
          FUNC_5(VAR_9->isoc_rx_ep->wMaxPacketSize));

 FUNC_7(VAR_10, &VAR_9->isoc_anchor);

 VAR_13 = FUNC_11(VAR_10, VAR_8);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_3 && VAR_13 != -VAR_1)
   FUNC_2(VAR_7, "urb %p submission failed (%d)",
       VAR_10, -VAR_13);
  FUNC_12(VAR_10);
 }

 FUNC_9(VAR_10);

 return VAR_13;
}
