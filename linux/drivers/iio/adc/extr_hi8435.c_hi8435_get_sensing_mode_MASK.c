
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct hi8435_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hi8435_priv*,int ,int*) ;
 struct hi8435_priv* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
       const struct iio_chan_spec *VAR_2)
{
 struct hi8435_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 return !!(VAR_5 & FUNC_0(VAR_2->channel / 8));
}
