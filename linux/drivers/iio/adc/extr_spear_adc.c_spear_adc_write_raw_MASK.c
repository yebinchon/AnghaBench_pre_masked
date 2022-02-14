
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_adc_state {int dummy; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct spear_adc_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spear_adc_state*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
          struct iio_chan_spec const *VAR_5,
          int VAR_6,
          int VAR_7,
          long VAR_8)
{
 struct spear_adc_state *VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = 0;

 if (VAR_8 != VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_4->mlock);

 if ((VAR_6 < VAR_3) ||
     (VAR_6 > VAR_2) ||
     (VAR_7 != 0)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_3(VAR_9, VAR_6);

out:
 FUNC_2(&VAR_4->mlock);
 return VAR_10;
}
