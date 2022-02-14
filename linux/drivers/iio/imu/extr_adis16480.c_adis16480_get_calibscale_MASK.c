
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis16480 {int adis; } ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (int *,unsigned int,int *) ;
 struct adis16480* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, int *VAR_4)
{
 unsigned int VAR_5 = VAR_1[VAR_3->scan_index];
 struct adis16480 *VAR_6 = FUNC_1(VAR_2);
 uint16_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_6->adis, VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_4 = FUNC_2(VAR_7, 15);
 return VAR_0;
}
