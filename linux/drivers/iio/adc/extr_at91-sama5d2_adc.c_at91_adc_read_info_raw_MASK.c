
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {char sign; } ;
struct iio_chan_spec {scalar_t__ type; int channel; TYPE_1__ scan_type; int channel2; scalar_t__ differential; } ;
struct at91_adc_state {int conversion_done; int conversion_value; int lock; int wq_data_available; struct iio_chan_spec const* chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct at91_adc_state*,int*) ;
 int FUNC_2 (struct at91_adc_state*,int ,int*) ;
 int FUNC_3 (struct at91_adc_state*,int ,int*) ;
 int FUNC_4 (struct at91_adc_state*,int ) ;
 int FUNC_5 (struct at91_adc_state*,int ,int) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int ,int,int ) ;

__attribute__((used)) static int FUNC_14(struct iio_dev *VAR_12,
      struct iio_chan_spec const *VAR_13, int *VAR_14)
{
 struct at91_adc_state *VAR_15 = FUNC_8(VAR_12);
 u32 VAR_16 = 0;
 u16 VAR_17;
 int VAR_18;





 if (VAR_13->type == VAR_10) {
  VAR_18 = FUNC_6(VAR_12);
  if (VAR_18)
   return VAR_18;
  FUNC_10(&VAR_15->lock);

  VAR_18 = FUNC_2(VAR_15, VAR_13->channel,
          &VAR_17);
  *VAR_14 = VAR_17;
  FUNC_11(&VAR_15->lock);
  FUNC_7(VAR_12);

  return FUNC_1(VAR_15, VAR_14);
 }
 if (VAR_13->type == VAR_11) {
  VAR_18 = FUNC_6(VAR_12);
  if (VAR_18)
   return VAR_18;
  FUNC_10(&VAR_15->lock);

  VAR_18 = FUNC_3(VAR_15, VAR_13->channel,
          &VAR_17);
  *VAR_14 = VAR_17;
  FUNC_11(&VAR_15->lock);
  FUNC_7(VAR_12);

  return FUNC_1(VAR_15, VAR_14);
 }



 VAR_18 = FUNC_6(VAR_12);
 if (VAR_18)
  return VAR_18;
 FUNC_10(&VAR_15->lock);

 VAR_15->chan = VAR_13;

 if (VAR_13->differential)
  VAR_16 = (FUNC_0(VAR_13->channel) | FUNC_0(VAR_13->channel2)) <<
        VAR_3;

 FUNC_5(VAR_15, VAR_2, VAR_16);
 FUNC_5(VAR_15, VAR_1, FUNC_0(VAR_13->channel));
 FUNC_5(VAR_15, VAR_7, FUNC_0(VAR_13->channel));
 FUNC_5(VAR_15, VAR_4, VAR_5);

 VAR_18 = FUNC_13(VAR_15->wq_data_available,
            VAR_15->conversion_done,
            FUNC_9(1000));
 if (VAR_18 == 0)
  VAR_18 = -VAR_9;

 if (VAR_18 > 0) {
  *VAR_14 = VAR_15->conversion_value;
  VAR_18 = FUNC_1(VAR_15, VAR_14);
  if (VAR_13->scan_type.sign == 's')
   *VAR_14 = FUNC_12(*VAR_14, 11);
  VAR_15->conversion_done = 0;
 }

 FUNC_5(VAR_15, VAR_6, FUNC_0(VAR_13->channel));
 FUNC_5(VAR_15, VAR_0, FUNC_0(VAR_13->channel));


 FUNC_4(VAR_15, VAR_8);

 FUNC_11(&VAR_15->lock);

 FUNC_7(VAR_12);
 return VAR_18;
}
