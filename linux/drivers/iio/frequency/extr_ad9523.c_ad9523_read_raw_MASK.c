
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad9523_state {int* vco_out_freq; size_t* vco_out_map; int lock; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct iio_dev*,int ) ;
 struct ad9523_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6,
      int *VAR_7,
      long VAR_8)
{
 struct ad9523_state *VAR_9 = FUNC_4(VAR_4);
 unsigned int VAR_10;
 int VAR_11;

 FUNC_5(&VAR_9->lock);
 VAR_11 = FUNC_3(VAR_4, FUNC_0(VAR_5->channel));
 FUNC_6(&VAR_9->lock);

 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_8) {
 case 128:
  *VAR_6 = !(VAR_11 & VAR_0);
  return VAR_2;
 case 130:
  *VAR_6 = VAR_9->vco_out_freq[VAR_9->vco_out_map[VAR_5->channel]] /
   FUNC_2(VAR_11);
  return VAR_2;
 case 129:
  VAR_10 = (FUNC_1(VAR_11) * 3141592) /
   FUNC_2(VAR_11);
  *VAR_6 = VAR_10 / 1000000;
  *VAR_7 = VAR_10 % 1000000;
  return VAR_3;
 default:
  return -VAR_1;
 }
}
