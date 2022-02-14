
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_adc {struct mxs_lradc* lradc; } ;
struct mxs_lradc {scalar_t__ touchscreen_wire; scalar_t__ use_touchbutton; } ;
struct iio_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (unsigned long const*,unsigned long*,int ) ;
 int FUNC_1 (unsigned long const*,int ) ;
 struct mxs_lradc_adc* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static bool FUNC_3(struct iio_dev *VAR_7,
          const unsigned long *VAR_8)
{
 struct mxs_lradc_adc *VAR_9 = FUNC_2(VAR_7);
 struct mxs_lradc *VAR_10 = VAR_9->lradc;
 const int VAR_11 = FUNC_1(VAR_8, VAR_4);
 int VAR_12 = 0;
 unsigned long VAR_13 = 0;

 if (VAR_10->use_touchbutton)
  VAR_13 |= VAR_0;
 if (VAR_10->touchscreen_wire == VAR_5)
  VAR_13 |= VAR_1;
 if (VAR_10->touchscreen_wire == VAR_6)
  VAR_13 |= VAR_2;

 if (VAR_10->use_touchbutton)
  VAR_12++;
 if (VAR_10->touchscreen_wire)
  VAR_12 += 2;


 if (FUNC_0(VAR_8, &VAR_13, VAR_4))
  return 0;


 if (VAR_11 + VAR_12 > VAR_3)
  return 0;

 return 1;
}
