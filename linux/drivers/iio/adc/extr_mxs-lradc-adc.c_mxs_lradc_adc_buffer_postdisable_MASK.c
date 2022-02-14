
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_adc {scalar_t__ base; struct mxs_lradc* lradc; } ;
struct mxs_lradc {int buffer_vchans; scalar_t__ soc; } ;
struct iio_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct mxs_lradc_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_7)
{
 struct mxs_lradc_adc *VAR_8 = FUNC_1(VAR_7);
 struct mxs_lradc *VAR_9 = VAR_8->lradc;

 FUNC_2(VAR_5 | VAR_4,
        VAR_8->base + FUNC_0(0) + VAR_6);

 FUNC_2(VAR_9->buffer_vchans,
        VAR_8->base + VAR_1 + VAR_6);
 if (VAR_9->soc == VAR_0)
  FUNC_2(VAR_9->buffer_vchans << VAR_3,
         VAR_8->base + VAR_2 + VAR_6);

 return 0;
}
