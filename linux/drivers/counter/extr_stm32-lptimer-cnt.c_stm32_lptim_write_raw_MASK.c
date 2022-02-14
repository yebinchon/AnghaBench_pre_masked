
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct stm32_lptim_cnt* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct stm32_lptim_cnt*) ;
 int FUNC_2 (struct stm32_lptim_cnt*,int) ;
 int FUNC_3 (struct stm32_lptim_cnt*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
     struct iio_chan_spec const *VAR_3,
     int VAR_4, int VAR_5, long VAR_6)
{
 struct stm32_lptim_cnt *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
  if (VAR_4 < 0 || VAR_4 > 1)
   return -VAR_1;


  VAR_8 = FUNC_1(VAR_7);
  if ((VAR_8 < 0) || (!VAR_8 && !VAR_4))
   return VAR_8;
  if (VAR_4 && VAR_8)
   return -VAR_0;

  VAR_8 = FUNC_3(VAR_7, VAR_4);
  if (VAR_8)
   return VAR_8;
  return FUNC_2(VAR_7, VAR_4);

 default:
  return -VAR_1;
 }
}
