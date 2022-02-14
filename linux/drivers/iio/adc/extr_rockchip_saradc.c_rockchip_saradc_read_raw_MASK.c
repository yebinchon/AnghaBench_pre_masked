
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_saradc {int last_val; TYPE_1__* data; int vref; scalar_t__ regs; int completion; } ;
struct iio_dev {int dev; int mlock; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int num_bits; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 struct rockchip_saradc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_10,
        struct iio_chan_spec const *VAR_11,
        int *VAR_12, int *VAR_13, long VAR_14)
{
 struct rockchip_saradc *VAR_15 = FUNC_1(VAR_10);
 int VAR_16;

 switch (VAR_14) {
 case 129:
  FUNC_2(&VAR_10->mlock);

  FUNC_5(&VAR_15->completion);


  FUNC_8(8, VAR_15->regs + VAR_8);


  FUNC_7(VAR_7
    | (VAR_11->channel & VAR_5)
    | VAR_6,
         VAR_15->regs + VAR_4);

  if (!FUNC_6(&VAR_15->completion,
       VAR_9)) {
   FUNC_8(0, VAR_15->regs + VAR_4);
   FUNC_3(&VAR_10->mlock);
   return -VAR_1;
  }

  *VAR_12 = VAR_15->last_val;
  FUNC_3(&VAR_10->mlock);
  return VAR_3;
 case 128:
  VAR_16 = FUNC_4(VAR_15->vref);
  if (VAR_16 < 0) {
   FUNC_0(&VAR_10->dev, "failed to get voltage\n");
   return VAR_16;
  }

  *VAR_12 = VAR_16 / 1000;
  *VAR_13 = VAR_15->data->num_bits;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
