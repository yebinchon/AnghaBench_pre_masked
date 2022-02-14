
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpadc {int dev; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct palmas_gpadc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct palmas_gpadc*,int,int) ;
 int FUNC_5 (struct palmas_gpadc*,int) ;
 int FUNC_6 (struct palmas_gpadc*,int) ;
 int FUNC_7 (struct palmas_gpadc*,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct palmas_gpadc *VAR_8 = FUNC_1(VAR_3);
 int VAR_9 = VAR_4->channel;
 int VAR_10 = 0;

 if (VAR_9 > VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_3->mlock);

 switch (VAR_7) {
 case 128:
 case 129:
  VAR_10 = FUNC_6(VAR_8, VAR_9);
  if (VAR_10 < 0)
   goto out;

  VAR_10 = FUNC_7(VAR_8, VAR_9);
  if (VAR_10 < 0) {
   FUNC_0(VAR_8->dev,
   "ADC start conversion failed\n");
   goto out;
  }

  if (VAR_7 == 129)
   VAR_10 = FUNC_4(
       VAR_8, VAR_9, VAR_10);

  *VAR_5 = VAR_10;

  VAR_10 = VAR_1;
  goto out;
 }

 FUNC_3(&VAR_3->mlock);
 return VAR_10;

out:
 FUNC_5(VAR_8, VAR_9);
 FUNC_3(&VAR_3->mlock);

 return VAR_10;
}
