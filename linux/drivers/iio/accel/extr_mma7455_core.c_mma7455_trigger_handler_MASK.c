
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma7455_data {int regmap; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 struct mma7455_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mma7455_data*) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct mma7455_data *VAR_6 = FUNC_1(VAR_5);
 u8 VAR_7[16];
 int VAR_8;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  goto done;

 VAR_8 = FUNC_5(VAR_6->regmap, VAR_1, VAR_7,
          sizeof(__le16) * 3);
 if (VAR_8)
  goto done;

 FUNC_2(VAR_5, VAR_7,
        FUNC_0(VAR_5));

done:
 FUNC_3(VAR_5->trig);

 return VAR_0;
}
