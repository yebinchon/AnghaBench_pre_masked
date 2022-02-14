
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_adc {scalar_t__ base; int completion; int lock; struct mxs_lradc* lradc; } ;
struct mxs_lradc {unsigned long buffer_vchans; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct iio_dev*) ;
 struct mxs_lradc_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (struct mxs_lradc*) ;
 unsigned long FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_4, void *VAR_5)
{
 struct iio_dev *VAR_6 = VAR_5;
 struct mxs_lradc_adc *VAR_7 = FUNC_3(VAR_6);
 struct mxs_lradc *VAR_8 = VAR_7->lradc;
 unsigned long VAR_9 = FUNC_6(VAR_7->base + VAR_2);
 unsigned long VAR_10;

 if (!(VAR_9 & FUNC_5(VAR_8)))
  return VAR_1;

 if (FUNC_2(VAR_6)) {
  if (VAR_9 & VAR_8->buffer_vchans) {
   FUNC_7(&VAR_7->lock, VAR_10);
   FUNC_4(VAR_6->trig);
   FUNC_8(&VAR_7->lock, VAR_10);
  }
 } else if (VAR_9 & FUNC_0(0)) {
  FUNC_1(&VAR_7->completion);
 }

 FUNC_9(VAR_9 & FUNC_5(VAR_8),
        VAR_7->base + VAR_2 + VAR_3);

 return VAR_0;
}
