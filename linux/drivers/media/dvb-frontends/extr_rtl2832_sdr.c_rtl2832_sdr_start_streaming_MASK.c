
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct rtl2832_sdr_platform_data {int dvb_frontend; struct dvb_usb_device* dvb_usb_device; } ;
struct rtl2832_sdr_dev {int v4l2_lock; scalar_t__ sequence; int v4l2_subdev; int flags; int udev; struct platform_device* pdev; } ;
struct TYPE_4__ {struct rtl2832_sdr_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct dvb_usb_device {TYPE_1__* props; } ;
struct TYPE_3__ {int (* frontend_ctrl ) (int ,int) ;int (* power_ctrl ) (struct dvb_usb_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtl2832_sdr_dev*) ;
 int FUNC_5 (struct rtl2832_sdr_dev*) ;
 int FUNC_6 (struct rtl2832_sdr_dev*) ;
 int FUNC_7 (struct rtl2832_sdr_dev*) ;
 int FUNC_8 (struct rtl2832_sdr_dev*) ;
 int FUNC_9 (struct rtl2832_sdr_dev*) ;
 int VAR_4 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct dvb_usb_device*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,int ,int) ;
 struct rtl2832_sdr_dev* FUNC_14 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_15(struct vb2_queue *VAR_5, unsigned int VAR_6)
{
 struct rtl2832_sdr_dev *VAR_7 = FUNC_14(VAR_5);
 struct platform_device *VAR_8 = VAR_7->pdev;
 struct rtl2832_sdr_platform_data *VAR_9 = VAR_8->dev.platform_data;
 struct dvb_usb_device *VAR_10 = VAR_9->dvb_usb_device;
 int VAR_11;

 FUNC_1(&VAR_8->dev, "\n");

 if (!VAR_7->udev)
  return -VAR_0;

 if (FUNC_2(&VAR_7->v4l2_lock))
  return -VAR_1;

 if (VAR_10->props->power_ctrl)
  VAR_10->props->power_ctrl(VAR_10, 1);


 if (VAR_10->props->frontend_ctrl)
  VAR_10->props->frontend_ctrl(VAR_9->dvb_frontend, 1);

 FUNC_10(VAR_2, &VAR_7->flags);


 if (FUNC_0(VAR_7->v4l2_subdev, VAR_3, VAR_4))
  VAR_11 = FUNC_13(VAR_7->v4l2_subdev, VAR_3, VAR_4, 1);
 else
  VAR_11 = FUNC_7(VAR_7);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_8(VAR_7);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_4(VAR_7);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_5(VAR_7);
 if (VAR_11)
  goto err;

 VAR_7->sequence = 0;

 VAR_11 = FUNC_9(VAR_7);
 if (VAR_11)
  goto err;

err:
 FUNC_3(&VAR_7->v4l2_lock);

 return VAR_11;
}
