
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct berlin2_adc_priv {int data_available; int data; int lock; int regmap; int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct berlin2_adc_priv* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_6, int VAR_7)
{
 struct berlin2_adc_priv *VAR_8 = FUNC_2(VAR_6);
 int VAR_9, VAR_10;

 FUNC_4(&VAR_8->lock);


 FUNC_7(VAR_8->regmap, VAR_0,
       FUNC_0(VAR_7));


 FUNC_6(VAR_8->regmap, VAR_1,
      VAR_2 |
      VAR_3 |
      VAR_4,
      FUNC_1(VAR_7) |
      VAR_4);

 VAR_10 = FUNC_8(VAR_8->wq, VAR_8->data_available,
            FUNC_3(1000));


 FUNC_6(VAR_8->regmap, VAR_0,
      FUNC_0(VAR_7), 0);

 if (VAR_10 == 0)
  VAR_10 = -VAR_5;
 if (VAR_10 < 0) {
  FUNC_5(&VAR_8->lock);
  return VAR_10;
 }

 FUNC_6(VAR_8->regmap, VAR_1,
      VAR_4, 0);

 VAR_9 = VAR_8->data;
 VAR_8->data_available = 0;

 FUNC_5(&VAR_8->lock);

 return VAR_9;
}
