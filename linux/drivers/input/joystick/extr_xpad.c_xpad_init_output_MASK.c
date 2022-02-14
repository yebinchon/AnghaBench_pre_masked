
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_xpad {scalar_t__ xtype; int odata_dma; int odata; int udev; TYPE_1__* irq_out; int odata_lock; int irq_out_anchor; } ;
struct usb_interface {int dummy; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct TYPE_3__ {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int ,struct usb_xpad*,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_6, struct usb_xpad *VAR_7,
   struct usb_endpoint_descriptor *VAR_8)
{
 int VAR_9;

 if (VAR_7->xtype == VAR_4)
  return 0;

 FUNC_0(&VAR_7->irq_out_anchor);

 VAR_7->odata = FUNC_2(VAR_7->udev, VAR_3,
      VAR_1, &VAR_7->odata_dma);
 if (!VAR_7->odata)
  return -VAR_0;

 FUNC_1(&VAR_7->odata_lock);

 VAR_7->irq_out = FUNC_3(0, VAR_1);
 if (!VAR_7->irq_out) {
  VAR_9 = -VAR_0;
  goto err_free_coherent;
 }

 FUNC_4(VAR_7->irq_out, VAR_7->udev,
    FUNC_6(VAR_7->udev, VAR_8->bEndpointAddress),
    VAR_7->odata, VAR_3,
    VAR_5, VAR_7, VAR_8->bInterval);
 VAR_7->irq_out->transfer_dma = VAR_7->odata_dma;
 VAR_7->irq_out->transfer_flags |= VAR_2;

 return 0;

err_free_coherent:
 FUNC_5(VAR_7->udev, VAR_3, VAR_7->odata, VAR_7->odata_dma);
 return VAR_9;
}
