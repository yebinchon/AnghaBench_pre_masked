
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct gp2ap020a00f_data {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gp2ap020a00f_data*,struct iio_chan_spec const*,int*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct gp2ap020a00f_data* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6,
      long VAR_7)
{
 struct gp2ap020a00f_data *VAR_8 = FUNC_3(VAR_3);
 int VAR_9 = -VAR_0;

 if (VAR_7 == VAR_1) {
  VAR_9 = FUNC_1(VAR_3);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_5);
  FUNC_2(VAR_3);
 }
 return VAR_9 < 0 ? VAR_9 : VAR_2;
}
