
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct hci_dev {int name; } ;
struct btusb_data {int bulk_anchor; int udev; TYPE_1__* bulk_rx_ep; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,char*,struct urb*,int) ;
 int VAR_5 ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 unsigned char* FUNC_3 (int,int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,unsigned int,unsigned char*,int,int ,struct hci_dev*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ) ;
 int FUNC_11 (struct urb*) ;

__attribute__((used)) static int FUNC_12(struct hci_dev *VAR_6, gfp_t VAR_7)
{
 struct btusb_data *VAR_8 = FUNC_2(VAR_6);
 struct urb *VAR_9;
 unsigned char *VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13 = VAR_3;

 FUNC_0("%s", VAR_6->name);

 if (!VAR_8->bulk_rx_ep)
  return -VAR_0;

 VAR_9 = FUNC_4(0, VAR_7);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_13, VAR_7);
 if (!VAR_10) {
  FUNC_7(VAR_9);
  return -VAR_1;
 }

 VAR_11 = FUNC_9(VAR_8->udev, VAR_8->bulk_rx_ep->bEndpointAddress);

 FUNC_6(VAR_9, VAR_8->udev, VAR_11, VAR_10, VAR_13,
     VAR_5, VAR_6);

 VAR_9->transfer_flags |= VAR_4;

 FUNC_8(VAR_8->udev);
 FUNC_5(VAR_9, &VAR_8->bulk_anchor);

 VAR_12 = FUNC_10(VAR_9, VAR_7);
 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_2 && VAR_12 != -VAR_0)
   FUNC_1(VAR_6, "urb %p submission failed (%d)",
       VAR_9, -VAR_12);
  FUNC_11(VAR_9);
 }

 FUNC_7(VAR_9);

 return VAR_12;
}
