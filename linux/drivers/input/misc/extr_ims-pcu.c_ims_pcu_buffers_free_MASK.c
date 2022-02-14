
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int ctrl_dma; int urb_ctrl_buf; int max_ctrl_size; int udev; int urb_ctrl; int urb_out_buf; int read_dma; int urb_in_buf; int max_out_size; int urb_in; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ims_pcu *VAR_0)
{
 FUNC_3(VAR_0->urb_in);
 FUNC_2(VAR_0->urb_in);

 FUNC_1(VAR_0->udev, VAR_0->max_out_size,
     VAR_0->urb_in_buf, VAR_0->read_dma);

 FUNC_0(VAR_0->urb_out_buf);

 FUNC_3(VAR_0->urb_ctrl);
 FUNC_2(VAR_0->urb_ctrl);

 FUNC_1(VAR_0->udev, VAR_0->max_ctrl_size,
     VAR_0->urb_ctrl_buf, VAR_0->ctrl_dma);
}
