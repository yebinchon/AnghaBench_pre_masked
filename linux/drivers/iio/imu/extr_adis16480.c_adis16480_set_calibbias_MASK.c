
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; int type; } ;
struct adis16480 {int adis; } ;


 int VAR_0 ;




 unsigned int* VAR_1 ;
 int FUNC_0 (int *,unsigned int,int) ;
 int FUNC_1 (int *,unsigned int,int) ;
 struct adis16480* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_1[VAR_3->scan_index];
 struct adis16480 *VAR_6 = FUNC_2(VAR_2);

 switch (VAR_3->type) {
 case 129:
 case 128:
  if (VAR_4 < -0x8000 || VAR_4 >= 0x8000)
   return -VAR_0;
  return FUNC_0(&VAR_6->adis, VAR_5, VAR_4);
 case 130:
 case 131:
  return FUNC_1(&VAR_6->adis, VAR_5, VAR_4);
 default:
  break;
 }

 return -VAR_0;
}
