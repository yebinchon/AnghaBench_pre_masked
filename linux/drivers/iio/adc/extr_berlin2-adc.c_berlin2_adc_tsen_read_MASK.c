
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct berlin2_adc_priv {int data_available; int data; int lock; int regmap; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct berlin2_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_11)
{
 struct berlin2_adc_priv *VAR_12 = FUNC_1(VAR_11);
 int VAR_13, VAR_14;

 FUNC_3(&VAR_12->lock);


 FUNC_6(VAR_12->regmap, VAR_8,
       VAR_9);


 FUNC_5(VAR_12->regmap, VAR_0,
      VAR_2 |
      VAR_1,
      VAR_1);


 FUNC_5(VAR_12->regmap, VAR_3,
      VAR_7 |
      VAR_5 |
      VAR_6,
      FUNC_0(3) |
      VAR_4 |
      VAR_6);

 VAR_14 = FUNC_7(VAR_12->wq, VAR_12->data_available,
            FUNC_2(1000));


 FUNC_5(VAR_12->regmap, VAR_8,
      VAR_9, 0);

 if (VAR_14 == 0)
  VAR_14 = -VAR_10;
 if (VAR_14 < 0) {
  FUNC_4(&VAR_12->lock);
  return VAR_14;
 }

 FUNC_5(VAR_12->regmap, VAR_3,
      VAR_6, 0);

 VAR_13 = VAR_12->data;
 VAR_12->data_available = 0;

 FUNC_4(&VAR_12->lock);

 return VAR_13;
}
