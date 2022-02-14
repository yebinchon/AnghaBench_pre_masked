
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct hi8435_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (struct hi8435_priv*,int ,int*) ;
 struct hi8435_priv* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
      const struct iio_chan_spec *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 struct hi8435_priv *VAR_8 = FUNC_2(VAR_3);
 u32 VAR_9;
 int VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 = FUNC_1(VAR_8, VAR_1, &VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_5 = !!(VAR_9 & FUNC_0(VAR_4->channel));
  return VAR_2;
 default:
  return -VAR_0;
 }
}
