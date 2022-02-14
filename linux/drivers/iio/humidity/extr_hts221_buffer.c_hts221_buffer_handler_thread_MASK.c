
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {struct iio_chan_spec* channels; } ;
struct iio_chan_spec {int address; } ;
struct hts221_hw {int trig; int regmap; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iio_dev*) ;
 struct hts221_hw* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 u8 VAR_6[FUNC_0(2 * VAR_0, sizeof(s64)) + sizeof(s64)];
 struct iio_poll_func *VAR_7 = VAR_5;
 struct iio_dev *VAR_8 = VAR_7->indio_dev;
 struct hts221_hw *VAR_9 = FUNC_2(VAR_8);
 struct iio_chan_spec const *VAR_10;
 int VAR_11;


 VAR_10 = &VAR_8->channels[VAR_1];
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_10->address,
          VAR_6, VAR_0);
 if (VAR_11 < 0)
  goto out;


 VAR_10 = &VAR_8->channels[VAR_2];
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_10->address,
          VAR_6 + VAR_0, VAR_0);
 if (VAR_11 < 0)
  goto out;

 FUNC_3(VAR_8, VAR_6,
        FUNC_1(VAR_8));

out:
 FUNC_4(VAR_9->trig);

 return VAR_3;
}
