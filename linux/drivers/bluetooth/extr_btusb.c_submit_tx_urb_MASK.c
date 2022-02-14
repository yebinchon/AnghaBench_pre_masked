
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int setup_packet; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {int udev; int tx_anchor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,char*,struct urb*,int) ;
 struct btusb_data* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct urb*,int *) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_3, struct urb *VAR_4)
{
 struct btusb_data *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 FUNC_3(VAR_4, &VAR_5->tx_anchor);

 VAR_6 = FUNC_6(VAR_4, VAR_2);
 if (VAR_6 < 0) {
  if (VAR_6 != -VAR_1 && VAR_6 != -VAR_0)
   FUNC_0(VAR_3, "urb %p submission failed (%d)",
       VAR_4, -VAR_6);
  FUNC_2(VAR_4->setup_packet);
  FUNC_7(VAR_4);
 } else {
  FUNC_5(VAR_5->udev);
 }

 FUNC_4(VAR_4);
 return VAR_6;
}
