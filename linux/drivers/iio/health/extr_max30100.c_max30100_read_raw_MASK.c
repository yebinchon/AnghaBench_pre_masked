
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int dummy; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 struct max30100_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct max30100_data*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int *VAR_6, int *VAR_7, long VAR_8)
{
 struct max30100_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10 = -VAR_1;

 switch (VAR_8) {
 case 129:




  FUNC_3(&VAR_4->mlock);

  if (!FUNC_0(VAR_4))
   VAR_10 = -VAR_0;
  else {
   VAR_10 = FUNC_2(VAR_9, VAR_6);
   if (!VAR_10)
    VAR_10 = VAR_3;

  }

  FUNC_4(&VAR_4->mlock);
  break;
 case 128:
  *VAR_6 = 1;
  *VAR_7 = 16;
  VAR_10 = VAR_2;
  break;
 }

 return VAR_10;
}
