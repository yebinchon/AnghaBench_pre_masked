
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;





 struct isl29501_private* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct isl29501_private*,struct iio_chan_spec const*,int*) ;
 int FUNC_2 (struct isl29501_private*,int*,int*) ;
 int FUNC_3 (struct isl29501_private*,int*,int*) ;
 int FUNC_4 (struct isl29501_private*,struct iio_chan_spec const*,int*) ;
 int FUNC_5 (struct isl29501_private*,struct iio_chan_spec const*,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2, int *VAR_3,
        int *VAR_4, long VAR_5)
{
 struct isl29501_private *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 130:
  return FUNC_4(VAR_6, VAR_2, VAR_3);
 case 128:
  return FUNC_5(VAR_6, VAR_2, VAR_3, VAR_4);
 case 131:
  return FUNC_3(VAR_6, VAR_3, VAR_4);
 case 129:
  return FUNC_2(VAR_6, VAR_3, VAR_4);
 case 132:
  return FUNC_1(VAR_6, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
