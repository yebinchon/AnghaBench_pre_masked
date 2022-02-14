
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct dpot_dac {long long max_ohms; int vref; int dpot; } ;


 int VAR_0 ;





 int FUNC_0 (unsigned long long,long long) ;
 struct dpot_dac* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int *VAR_3, int *VAR_4, long VAR_5)
{
 struct dpot_dac *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;
 unsigned long long VAR_8;

 switch (VAR_5) {
 case 132:
  return FUNC_2(VAR_6->dpot, VAR_3);

 case 131:
  VAR_7 = FUNC_3(VAR_6->dpot, VAR_3, VAR_4);
  switch (VAR_7) {
  case 129:
   VAR_8 = *VAR_3 * 1000000000LL;
   FUNC_0(VAR_8, VAR_6->max_ohms);
   VAR_8 *= FUNC_4(VAR_6->vref) / 1000;
   FUNC_0(VAR_8, 1000000000LL);
   *VAR_3 = VAR_8;
   return VAR_7;
  case 128:




   *VAR_4 = 1;
   VAR_7 = 130;

  case 130:
   *VAR_3 *= FUNC_4(VAR_6->vref) / 1000;
   *VAR_4 *= VAR_6->max_ohms;
   break;
  }

  return VAR_7;
 }

 return -VAR_0;
}
