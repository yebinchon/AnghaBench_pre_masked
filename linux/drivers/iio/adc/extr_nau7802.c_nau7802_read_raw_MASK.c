
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nau7802_state {size_t sample_rate; int vref_mv; TYPE_1__* client; int lock; int conversion_count; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 struct nau7802_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_8 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_8,
       struct iio_chan_spec const *VAR_9,
       int *VAR_10, int *VAR_11, long VAR_12)
{
 struct nau7802_state *VAR_13 = FUNC_4(VAR_8);
 int VAR_14;

 switch (VAR_12) {
 case 130:
  FUNC_5(&VAR_13->lock);





  VAR_14 = FUNC_2(VAR_13->client, VAR_6);
  if (VAR_14 < 0) {
   FUNC_6(&VAR_13->lock);
   return VAR_14;
  }

  if (((VAR_14 & VAR_4) && !VAR_9->channel) ||
    (!(VAR_14 & VAR_4) &&
     VAR_9->channel)) {
   VAR_13->conversion_count = 0;
   VAR_14 = FUNC_3(VAR_13->client,
     VAR_6,
     FUNC_0(VAR_9->channel) |
     FUNC_1(VAR_13->sample_rate));

   if (VAR_14 < 0) {
    FUNC_6(&VAR_13->lock);
    return VAR_14;
   }
  }

  if (VAR_13->client->irq)
   VAR_14 = FUNC_7(VAR_8, VAR_9, VAR_10);
  else
   VAR_14 = FUNC_8(VAR_8, VAR_9, VAR_10);

  FUNC_6(&VAR_13->lock);
  return VAR_14;

 case 128:
  VAR_14 = FUNC_2(VAR_13->client, VAR_5);
  if (VAR_14 < 0)
   return VAR_14;





  *VAR_10 = VAR_13->vref_mv;
  *VAR_11 = 23 + (VAR_14 & VAR_3);

  return VAR_1;

 case 129:
  *VAR_10 = VAR_7[VAR_13->sample_rate];
  *VAR_11 = 0;
  return VAR_2;

 default:
  break;
 }

 return -VAR_0;
}
