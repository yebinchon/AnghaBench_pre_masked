
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mxs_lradc_adc {scalar_t__ const base; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 scalar_t__ const FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mxs_lradc_adc* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int ,scalar_t__ const) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_3, bool VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_2(VAR_3);
 struct mxs_lradc_adc *VAR_6 = FUNC_1(VAR_5);
 const u32 VAR_7 = VAR_4 ? VAR_2 : VAR_1;

 FUNC_3(VAR_0, VAR_6->base + (FUNC_0(0) + VAR_7));

 return 0;
}
