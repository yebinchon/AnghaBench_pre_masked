
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {int data_lock; int lock; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct nau7802_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct nau7802_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->lock);
 FUNC_4(&VAR_2->data_lock);
 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_1);

 return 0;
}
