
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct adis16136 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct iio_dev*,int) ;
 int FUNC_1 (int *,int ,int) ;
 struct adis16136* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, int VAR_4, int VAR_5, long VAR_6)
{
 struct adis16136 *VAR_7 = FUNC_2(VAR_2);

 switch (VAR_6) {
 case 129:
  return FUNC_1(&VAR_7->adis,
   VAR_0, VAR_4);
 case 128:
  return FUNC_0(VAR_2, VAR_4);
 default:
  break;
 }

 return -VAR_1;
}
