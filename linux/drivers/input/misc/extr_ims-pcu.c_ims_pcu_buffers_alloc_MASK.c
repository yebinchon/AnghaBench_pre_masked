
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ims_pcu {int read_dma; void* urb_in_buf; int max_in_size; int udev; TYPE_3__* urb_in; int urb_out_buf; int ctrl_dma; void* urb_ctrl_buf; int max_ctrl_size; TYPE_2__* ep_ctrl; TYPE_4__* urb_ctrl; int dev; int max_out_size; TYPE_1__* ep_in; } ;
struct TYPE_9__ {int transfer_dma; int transfer_flags; } ;
struct TYPE_8__ {int transfer_dma; int transfer_flags; } ;
struct TYPE_7__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_6__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int ,int ,int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,void*,int ,int ,struct ims_pcu*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,void*,int ,int ,struct ims_pcu*,int ) ;
 int FUNC_7 (int ,int ,void*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct ims_pcu *VAR_4)
{
 int VAR_5;

 VAR_4->urb_in_buf = FUNC_3(VAR_4->udev, VAR_4->max_in_size,
          VAR_1, &VAR_4->read_dma);
 if (!VAR_4->urb_in_buf) {
  FUNC_0(VAR_4->dev,
   "Failed to allocate memory for read buffer\n");
  return -VAR_0;
 }

 VAR_4->urb_in = FUNC_4(0, VAR_1);
 if (!VAR_4->urb_in) {
  FUNC_0(VAR_4->dev, "Failed to allocate input URB\n");
  VAR_5 = -VAR_0;
  goto err_free_urb_in_buf;
 }

 VAR_4->urb_in->transfer_flags |= VAR_2;
 VAR_4->urb_in->transfer_dma = VAR_4->read_dma;

 FUNC_5(VAR_4->urb_in, VAR_4->udev,
     FUNC_9(VAR_4->udev,
       VAR_4->ep_in->bEndpointAddress),
     VAR_4->urb_in_buf, VAR_4->max_in_size,
     VAR_3, VAR_4);





 VAR_4->urb_out_buf = FUNC_2(VAR_4->max_out_size, VAR_1);
 if (!VAR_4->urb_out_buf) {
  FUNC_0(VAR_4->dev, "Failed to allocate memory for write buffer\n");
  VAR_5 = -VAR_0;
  goto err_free_in_urb;
 }

 VAR_4->urb_ctrl_buf = FUNC_3(VAR_4->udev, VAR_4->max_ctrl_size,
            VAR_1, &VAR_4->ctrl_dma);
 if (!VAR_4->urb_ctrl_buf) {
  FUNC_0(VAR_4->dev,
   "Failed to allocate memory for read buffer\n");
  VAR_5 = -VAR_0;
  goto err_free_urb_out_buf;
 }

 VAR_4->urb_ctrl = FUNC_4(0, VAR_1);
 if (!VAR_4->urb_ctrl) {
  FUNC_0(VAR_4->dev, "Failed to allocate input URB\n");
  VAR_5 = -VAR_0;
  goto err_free_urb_ctrl_buf;
 }

 VAR_4->urb_ctrl->transfer_flags |= VAR_2;
 VAR_4->urb_ctrl->transfer_dma = VAR_4->ctrl_dma;

 FUNC_6(VAR_4->urb_ctrl, VAR_4->udev,
     FUNC_10(VAR_4->udev,
      VAR_4->ep_ctrl->bEndpointAddress),
     VAR_4->urb_ctrl_buf, VAR_4->max_ctrl_size,
     VAR_3, VAR_4, VAR_4->ep_ctrl->bInterval);

 return 0;

err_free_urb_ctrl_buf:
 FUNC_7(VAR_4->udev, VAR_4->max_ctrl_size,
     VAR_4->urb_ctrl_buf, VAR_4->ctrl_dma);
err_free_urb_out_buf:
 FUNC_1(VAR_4->urb_out_buf);
err_free_in_urb:
 FUNC_8(VAR_4->urb_in);
err_free_urb_in_buf:
 FUNC_7(VAR_4->udev, VAR_4->max_in_size,
     VAR_4->urb_in_buf, VAR_4->read_dma);
 return VAR_5;
}
