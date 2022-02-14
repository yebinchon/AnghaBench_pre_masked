
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct dpot_dac {int dpot; } ;


 int VAR_0 ;

 struct dpot_dac* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
         struct iio_chan_spec const *VAR_2,
         int VAR_3, int VAR_4, long VAR_5)
{
 struct dpot_dac *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 128:
  return FUNC_1(VAR_6->dpot, VAR_3);
 }

 return -VAR_0;
}
