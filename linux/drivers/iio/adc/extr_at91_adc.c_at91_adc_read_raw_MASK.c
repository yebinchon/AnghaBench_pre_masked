
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int channel; } ;
struct at91_adc_state {int done; int last_value; int vref_mv; int lock; int wq_data_avail; int chnb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct at91_adc_state*,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 struct at91_adc_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_10,
        struct iio_chan_spec const *VAR_11,
        int *VAR_12, int *VAR_13, long VAR_14)
{
 struct at91_adc_state *VAR_15 = FUNC_4(VAR_10);
 int VAR_16;

 switch (VAR_14) {
 case 129:
  FUNC_6(&VAR_15->lock);

  VAR_15->chnb = VAR_11->channel;
  FUNC_2(VAR_15, VAR_1,
    FUNC_0(VAR_11->channel));
  FUNC_2(VAR_15, VAR_4, FUNC_1(VAR_11->channel));
  FUNC_2(VAR_15, VAR_2, VAR_5);

  VAR_16 = FUNC_8(VAR_15->wq_data_avail,
             VAR_15->done,
             FUNC_5(1000));




  FUNC_2(VAR_15, VAR_0,
    FUNC_0(VAR_11->channel));
  FUNC_2(VAR_15, VAR_3, FUNC_1(VAR_11->channel));

  if (VAR_16 > 0) {

   *VAR_12 = VAR_15->last_value;
   VAR_15->last_value = 0;
   VAR_15->done = 0;
   VAR_16 = VAR_9;
  } else if (VAR_16 == 0) {

   FUNC_3(&VAR_10->dev, "ADC Channel %d timeout.\n",
    VAR_11->channel);
   VAR_16 = -VAR_7;
  }

  FUNC_7(&VAR_15->lock);
  return VAR_16;

 case 128:
  *VAR_12 = VAR_15->vref_mv;
  *VAR_13 = VAR_11->scan_type.realbits;
  return VAR_8;
 default:
  break;
 }
 return -VAR_6;
}
