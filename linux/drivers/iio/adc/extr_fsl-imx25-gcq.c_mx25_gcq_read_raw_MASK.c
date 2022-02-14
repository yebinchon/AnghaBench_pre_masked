
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mx25_gcq_priv {int* channel_vref_mv; } ;
struct iio_dev {int mlock; int dev; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct mx25_gcq_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct iio_chan_spec const*,struct mx25_gcq_priv*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3, int *VAR_4,
        int *VAR_5, long VAR_6)
{
 struct mx25_gcq_priv *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 129:
  FUNC_1(&VAR_2->mlock);
  VAR_8 = FUNC_3(&VAR_2->dev, VAR_3, VAR_7, VAR_4);
  FUNC_2(&VAR_2->mlock);
  return VAR_8;

 case 128:
  *VAR_4 = VAR_7->channel_vref_mv[VAR_3->channel];
  *VAR_5 = 12;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
