
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30102_data {int dummy; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*) ;
 struct max30102_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct max30102_data*,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int *VAR_5, int *VAR_6, long VAR_7)
{
 struct max30102_data *VAR_8 = FUNC_1(VAR_3);
 int VAR_9 = -VAR_0;

 switch (VAR_7) {
 case 129:




  FUNC_3(&VAR_3->mlock);
  if (!FUNC_0(VAR_3))
   VAR_9 = FUNC_2(VAR_8, VAR_5, 1);
  else
   VAR_9 = FUNC_2(VAR_8, VAR_5, 0);
  FUNC_4(&VAR_3->mlock);
  if (VAR_9)
   return VAR_9;

  VAR_9 = VAR_2;
  break;
 case 128:
  *VAR_5 = 1000;
  *VAR_6 = 16;
  VAR_9 = VAR_1;
  break;
 }

 return VAR_9;
}
