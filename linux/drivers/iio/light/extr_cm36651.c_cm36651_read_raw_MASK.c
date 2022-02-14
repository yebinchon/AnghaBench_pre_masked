
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm36651_data {int lock; } ;


 int VAR_0 ;


 int FUNC_0 (struct cm36651_data*,struct iio_chan_spec const*,int*) ;
 int FUNC_1 (struct cm36651_data*,struct iio_chan_spec const*,int*) ;
 struct cm36651_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int *VAR_3, int *VAR_4, long VAR_5)
{
 struct cm36651_data *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 FUNC_3(&VAR_6->lock);

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3);
  break;
 case 129:
  *VAR_3 = 0;
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_4);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 FUNC_4(&VAR_6->lock);

 return VAR_7;
}
