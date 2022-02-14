
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_uvis25_hw {int trig; int regmap; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iio_dev*) ;
 struct st_uvis25_hw* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 u8 VAR_4[FUNC_0(sizeof(u8), sizeof(s64)) + sizeof(s64)];
 struct iio_poll_func *VAR_5 = VAR_3;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct st_uvis25_hw *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_5(VAR_7->regmap, VAR_1, (int *)VAR_4);
 if (VAR_8 < 0)
  goto out;

 FUNC_3(VAR_6, VAR_4,
        FUNC_1(VAR_6));

out:
 FUNC_4(VAR_7->trig);

 return VAR_0;
}
