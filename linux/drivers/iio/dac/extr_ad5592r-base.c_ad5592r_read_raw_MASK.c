
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iio_dev {int mlock; } ;
struct TYPE_4__ {int realbits; } ;
struct iio_chan_spec {int channel; TYPE_2__ scan_type; int output; int type; } ;
struct ad5592r_state {int* cached_dac; int cached_gp_ctrl; int dev; TYPE_1__* ops; } ;
typedef int s64 ;
struct TYPE_3__ {int (* read_adc ) (struct ad5592r_state*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ad5592r_state*) ;
 int FUNC_2 (int ,char*,size_t,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,long long,int*) ;
 struct ad5592r_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ad5592r_state*,int,int*) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_8,
      struct iio_chan_spec const *VAR_9,
      int *VAR_10, int *VAR_11, long VAR_12)
{
 struct ad5592r_state *VAR_13 = FUNC_5(VAR_8);
 u16 VAR_14;
 int VAR_15;

 switch (VAR_12) {
 case 129:
  FUNC_6(&VAR_8->mlock);

  if (!VAR_9->output) {
   VAR_15 = VAR_13->ops->read_adc(VAR_13, VAR_9->channel, &VAR_14);
   if (VAR_15)
    goto unlock;

   if ((VAR_14 >> 12 & 0x7) != (VAR_9->channel & 0x7)) {
    FUNC_3(VAR_13->dev, "Error while reading channel %u\n",
      VAR_9->channel);
    VAR_15 = -VAR_3;
    goto unlock;
   }

   VAR_14 &= FUNC_0(11, 0);

  } else {
   VAR_14 = VAR_13->cached_dac[VAR_9->channel];
  }

  FUNC_2(VAR_13->dev, "Channel %u read: 0x%04hX\n",
    VAR_9->channel, VAR_14);

  *VAR_10 = (int) VAR_14;
  VAR_15 = VAR_6;
  break;
 case 128:
  *VAR_10 = FUNC_1(VAR_13);

  if (VAR_9->type == VAR_4) {
   s64 VAR_16 = *VAR_10 * (3767897513LL / 25LL);
   *VAR_10 = FUNC_4(VAR_16, 1000000000LL, VAR_11);

   VAR_15 = VAR_7;
  } else {
   int VAR_17;

   FUNC_6(&VAR_8->mlock);

   if (VAR_9->output)
    VAR_17 = !!(VAR_13->cached_gp_ctrl &
     VAR_1);
   else
    VAR_17 = !!(VAR_13->cached_gp_ctrl &
     VAR_0);

   *VAR_10 *= ++VAR_17;

   *VAR_11 = VAR_9->scan_type.realbits;
   VAR_15 = VAR_5;
  }
  break;
 case 130:
  VAR_15 = FUNC_1(VAR_13);

  FUNC_6(&VAR_8->mlock);

  if (VAR_13->cached_gp_ctrl & VAR_0)
   *VAR_10 = (-34365 * 25) / VAR_15;
  else
   *VAR_10 = (-75365 * 25) / VAR_15;
  VAR_15 = VAR_6;
  break;
 default:
  VAR_15 = -VAR_2;
 }

unlock:
 FUNC_7(&VAR_8->mlock);
 return VAR_15;
}
