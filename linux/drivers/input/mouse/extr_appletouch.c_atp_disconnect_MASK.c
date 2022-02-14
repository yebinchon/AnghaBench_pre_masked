
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct atp {TYPE_2__* urb; int data; TYPE_1__* info; int udev; int input; } ;
struct TYPE_5__ {int transfer_dma; } ;
struct TYPE_4__ {int datalen; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct atp*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 struct atp* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct atp *VAR_1 = FUNC_5(VAR_0);

 FUNC_7(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_6(VAR_1->urb);
  FUNC_1(VAR_1->input);
  FUNC_3(VAR_1->udev, VAR_1->info->datalen,
      VAR_1->data, VAR_1->urb->transfer_dma);
  FUNC_4(VAR_1->urb);
  FUNC_2(VAR_1);
 }
 FUNC_0(&VAR_0->dev, "input: appletouch disconnected\n");
}
