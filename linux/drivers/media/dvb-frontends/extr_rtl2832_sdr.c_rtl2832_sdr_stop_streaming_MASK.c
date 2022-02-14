
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct rtl2832_sdr_platform_data {int dvb_frontend; struct dvb_usb_device* dvb_usb_device; } ;
struct rtl2832_sdr_dev {int v4l2_lock; int flags; int v4l2_subdev; struct platform_device* pdev; } ;
struct TYPE_4__ {struct rtl2832_sdr_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct dvb_usb_device {TYPE_1__* props; } ;
struct TYPE_3__ {int (* power_ctrl ) (struct dvb_usb_device*,int ) ;int (* frontend_ctrl ) (int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtl2832_sdr_dev*) ;
 int FUNC_6 (struct rtl2832_sdr_dev*) ;
 int FUNC_7 (struct rtl2832_sdr_dev*) ;
 int FUNC_8 (struct rtl2832_sdr_dev*) ;
 int FUNC_9 (struct rtl2832_sdr_dev*) ;
 int FUNC_10 (struct rtl2832_sdr_dev*) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct dvb_usb_device*,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 struct rtl2832_sdr_dev* FUNC_14 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_15(struct vb2_queue *VAR_3)
{
 struct rtl2832_sdr_dev *VAR_4 = FUNC_14(VAR_3);
 struct platform_device *VAR_5 = VAR_4->pdev;
 struct rtl2832_sdr_platform_data *VAR_6 = VAR_5->dev.platform_data;
 struct dvb_usb_device *VAR_7 = VAR_6->dvb_usb_device;

 FUNC_2(&VAR_5->dev, "\n");

 FUNC_3(&VAR_4->v4l2_lock);

 FUNC_8(VAR_4);
 FUNC_7(VAR_4);
 FUNC_6(VAR_4);
 FUNC_5(VAR_4);
 FUNC_9(VAR_4);


 if (FUNC_0(VAR_4->v4l2_subdev, VAR_1, VAR_2))
  FUNC_13(VAR_4->v4l2_subdev, VAR_1, VAR_2, 0);
 else
  FUNC_10(VAR_4);

 FUNC_1(VAR_0, &VAR_4->flags);


 if (VAR_7->props->frontend_ctrl)
  VAR_7->props->frontend_ctrl(VAR_6->dvb_frontend, 0);

 if (VAR_7->props->power_ctrl)
  VAR_7->props->power_ctrl(VAR_7, 0);

 FUNC_4(&VAR_4->v4l2_lock);
}
