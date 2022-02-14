
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; int type; } ;
struct adis16480 {int adis; } ;


 int VAR_0 ;




 int VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_0 (int *,unsigned int,int *) ;
 int FUNC_1 (int *,unsigned int,int *) ;
 struct adis16480* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, int *VAR_5)
{
 unsigned int VAR_6 = VAR_2[VAR_4->scan_index];
 struct adis16480 *VAR_7 = FUNC_2(VAR_3);
 uint16_t VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 switch (VAR_4->type) {
 case 129:
 case 128:
  VAR_10 = FUNC_0(&VAR_7->adis, VAR_6, &VAR_8);
  *VAR_5 = FUNC_3(VAR_8, 15);
  break;
 case 130:
 case 131:
  VAR_10 = FUNC_1(&VAR_7->adis, VAR_6, &VAR_9);
  *VAR_5 = FUNC_3(VAR_9, 31);
  break;
 default:
   VAR_10 = -VAR_0;
 }

 if (VAR_10 < 0)
  return VAR_10;

 return VAR_1;
}
