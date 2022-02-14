
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcnl4035_data {int als_it_val; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct vcnl4035_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct vcnl4035_data*,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
    struct iio_chan_spec const *VAR_4,
    int VAR_5, int VAR_6, long VAR_7)
{
 int VAR_8;
 struct vcnl4035_data *VAR_9 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 128:
  if (VAR_5 <= 0 || VAR_5 > 800)
   return -VAR_0;

  VAR_8 = FUNC_2(VAR_9, 1);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_1(VAR_9->regmap, VAR_1,
      VAR_2,
      VAR_5 / 100);
  if (!VAR_8)
   VAR_9->als_it_val = VAR_5 / 100;

  FUNC_2(VAR_9, 0);
  return VAR_8;
 default:
  return -VAR_0;
 }
}
