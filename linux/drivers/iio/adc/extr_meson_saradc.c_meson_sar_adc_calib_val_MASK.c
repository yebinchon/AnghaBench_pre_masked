
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_sar_adc_priv {int calibscale; int calibbias; TYPE_1__* param; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ) ;
 struct meson_sar_adc_priv* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1, int VAR_2)
{
 struct meson_sar_adc_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;


 VAR_4 = FUNC_1((s64)VAR_2 * VAR_3->calibscale, VAR_0) + VAR_3->calibbias;

 return FUNC_0(VAR_4, 0, (1 << VAR_3->param->resolution) - 1);
}
