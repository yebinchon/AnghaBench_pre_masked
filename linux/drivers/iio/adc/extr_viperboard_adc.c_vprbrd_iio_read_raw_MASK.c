
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_adc_msg {int val; int chan; int cmd; } ;
struct vprbrd_adc {struct vprbrd* vb; } ;
struct vprbrd {int lock; int usb_dev; scalar_t__ buf; } ;
struct iio_dev {int dev; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct vprbrd_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,int,int,struct vprbrd_adc_msg*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_8,
    struct iio_chan_spec const *VAR_9,
    int *VAR_10,
    int *VAR_11,
    long VAR_12)
{
 int VAR_13, VAR_14 = 0;
 struct vprbrd_adc *VAR_15 = FUNC_1(VAR_8);
 struct vprbrd *VAR_16 = VAR_15->vb;
 struct vprbrd_adc_msg *VAR_17 = (struct vprbrd_adc_msg *)VAR_16->buf;

 switch (VAR_12) {
 case 128:
  FUNC_2(&VAR_16->lock);

  VAR_17->cmd = VAR_3;
  VAR_17->chan = VAR_9->channel;
  VAR_17->val = 0x00;

  VAR_13 = FUNC_4(VAR_16->usb_dev,
   FUNC_6(VAR_16->usb_dev, 0), VAR_4,
   VAR_7, 0x0000, 0x0000, VAR_17,
   sizeof(struct vprbrd_adc_msg), VAR_5);
  if (VAR_13 != sizeof(struct vprbrd_adc_msg)) {
   FUNC_0(&VAR_8->dev, "usb send error on adc read\n");
   VAR_14 = -VAR_1;
  }

  VAR_13 = FUNC_4(VAR_16->usb_dev,
   FUNC_5(VAR_16->usb_dev, 0), VAR_4,
   VAR_6, 0x0000, 0x0000, VAR_17,
   sizeof(struct vprbrd_adc_msg), VAR_5);

  *VAR_10 = VAR_17->val;

  FUNC_3(&VAR_16->lock);

  if (VAR_13 != sizeof(struct vprbrd_adc_msg)) {
   FUNC_0(&VAR_8->dev, "usb recv error on adc read\n");
   VAR_14 = -VAR_1;
  }

  if (VAR_14)
   goto error;

  return VAR_2;
 default:
  VAR_14 = -VAR_0;
  break;
 }
error:
 return VAR_14;
}
