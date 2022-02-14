
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_sar_adc_priv {int calibscale; scalar_t__ calibbias; TYPE_1__* param; } ;
struct iio_dev {int * channels; } ;
typedef int s64 ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 struct meson_sar_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ,int ,int*) ;
 int FUNC_3 (struct iio_dev*,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7)
{
 struct meson_sar_adc_priv *VAR_8 = FUNC_1(VAR_7);
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


 VAR_10 = (1 << VAR_8->param->resolution) / 4;
 VAR_11 = (1 << VAR_8->param->resolution) * 3 / 4;

 FUNC_3(VAR_7, VAR_1);
 FUNC_4(10, 20);
 VAR_9 = FUNC_2(VAR_7,
           &VAR_7->channels[7],
           VAR_5, VAR_3, &VAR_12);
 if (VAR_9 < 0)
  goto out;

 FUNC_3(VAR_7, VAR_2);
 FUNC_4(10, 20);
 VAR_9 = FUNC_2(VAR_7,
           &VAR_7->channels[7],
           VAR_5, VAR_3, &VAR_13);
 if (VAR_9 < 0)
  goto out;

 if (VAR_13 <= VAR_12) {
  VAR_9 = -VAR_4;
  goto out;
 }

 VAR_8->calibscale = FUNC_0((VAR_11 - VAR_10) * (s64)VAR_6,
       VAR_13 - VAR_12);
 VAR_8->calibbias = VAR_10 - FUNC_0((s64)VAR_12 * VAR_8->calibscale,
          VAR_6);
 VAR_9 = 0;
out:
 FUNC_3(VAR_7, VAR_0);

 return VAR_9;
}
