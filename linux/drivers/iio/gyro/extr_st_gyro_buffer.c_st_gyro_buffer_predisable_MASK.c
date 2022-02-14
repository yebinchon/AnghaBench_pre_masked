
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int ) ;
 int FUNC_2 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_2(VAR_1, 0);
 if (VAR_2 < 0)
  goto st_gyro_buffer_predisable;

 VAR_2 = FUNC_1(VAR_1, VAR_0);

st_gyro_buffer_predisable:
 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_2)
  VAR_2 = VAR_3;

 return VAR_2;
}
