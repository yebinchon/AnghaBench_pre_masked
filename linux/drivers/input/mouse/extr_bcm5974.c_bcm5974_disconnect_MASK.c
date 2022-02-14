
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_3__ {int bt_datalen; int tp_datalen; } ;
struct bcm5974 {TYPE_2__* bt_urb; TYPE_2__* tp_urb; int bt_data; TYPE_1__ cfg; int udev; int tp_data; int input; } ;
struct TYPE_4__ {int transfer_dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm5974*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 struct bcm5974* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct bcm5974 *VAR_1 = FUNC_4(VAR_0);

 FUNC_5(VAR_0, ((void*)0));

 FUNC_0(VAR_1->input);
 FUNC_2(VAR_1->udev, VAR_1->cfg.tp_datalen,
     VAR_1->tp_data, VAR_1->tp_urb->transfer_dma);
 if (VAR_1->bt_urb)
  FUNC_2(VAR_1->udev, VAR_1->cfg.bt_datalen,
      VAR_1->bt_data, VAR_1->bt_urb->transfer_dma);
 FUNC_3(VAR_1->tp_urb);
 FUNC_3(VAR_1->bt_urb);
 FUNC_1(VAR_1);
}
