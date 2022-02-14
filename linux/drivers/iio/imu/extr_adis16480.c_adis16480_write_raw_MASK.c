
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct iio_dev*,struct iio_chan_spec const*,int) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int) ;
 int FUNC_3 (struct iio_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 switch (VAR_5) {
 case 131:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 130:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_3(VAR_1, VAR_3, VAR_4);

 default:
  return -VAR_0;
 }
}
