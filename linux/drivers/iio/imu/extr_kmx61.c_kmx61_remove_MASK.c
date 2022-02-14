
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmx61_data {int lock; int motion_trig; int mag_dready_trig; int acc_dready_trig; int mag_indio_dev; int acc_indio_dev; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kmx61_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kmx61_data*,int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_3)
{
 struct kmx61_data *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->acc_indio_dev);
 FUNC_1(VAR_4->mag_indio_dev);

 FUNC_7(&VAR_3->dev);
 FUNC_9(&VAR_3->dev);
 FUNC_8(&VAR_3->dev);

 if (VAR_3->irq > 0) {
  FUNC_3(VAR_4->acc_indio_dev);
  FUNC_3(VAR_4->mag_indio_dev);
  FUNC_2(VAR_4->acc_dready_trig);
  FUNC_2(VAR_4->mag_dready_trig);
  FUNC_2(VAR_4->motion_trig);
 }

 FUNC_5(&VAR_4->lock);
 FUNC_4(VAR_4, VAR_1, VAR_0 | VAR_2, 1);
 FUNC_6(&VAR_4->lock);

 return 0;
}
