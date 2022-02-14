
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int res_mode; size_t sample_rate; } ;
struct vf610_adc {int value; int vref_uv; int* sample_freq_avail; TYPE_1__ adc_feature; int completion; scalar_t__ regs; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int type; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;

 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct iio_dev*) ;
 struct vf610_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (int *,int ) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_10,
   struct iio_chan_spec const *VAR_11,
   int *VAR_12,
   int *VAR_13,
   long VAR_14)
{
 struct vf610_adc *VAR_15 = FUNC_2(VAR_10);
 unsigned int VAR_16;
 long VAR_17;

 switch (VAR_14) {
 case 132:
 case 133:
  FUNC_3(&VAR_10->mlock);
  if (FUNC_1(VAR_10)) {
   FUNC_4(&VAR_10->mlock);
   return -VAR_0;
  }

  FUNC_5(&VAR_15->completion);
  VAR_16 = FUNC_0(VAR_11->channel);
  VAR_16 |= VAR_5;
  FUNC_7(VAR_16, VAR_15->regs + VAR_7);
  VAR_17 = FUNC_6
    (&VAR_15->completion, VAR_6);
  if (VAR_17 == 0) {
   FUNC_4(&VAR_10->mlock);
   return -VAR_2;
  }
  if (VAR_17 < 0) {
   FUNC_4(&VAR_10->mlock);
   return VAR_17;
  }

  switch (VAR_11->type) {
  case 128:
   *VAR_12 = VAR_15->value;
   break;
  case 129:





   *VAR_12 = 25000 - ((int)VAR_15->value - VAR_9) *
     1000000 / VAR_8;

   break;
  default:
   FUNC_4(&VAR_10->mlock);
   return -VAR_1;
  }

  FUNC_4(&VAR_10->mlock);
  return VAR_4;

 case 130:
  *VAR_12 = VAR_15->vref_uv / 1000;
  *VAR_13 = VAR_15->adc_feature.res_mode;
  return VAR_3;

 case 131:
  *VAR_12 = VAR_15->sample_freq_avail[VAR_15->adc_feature.sample_rate];
  *VAR_13 = 0;
  return VAR_4;

 default:
  break;
 }

 return -VAR_1;
}
