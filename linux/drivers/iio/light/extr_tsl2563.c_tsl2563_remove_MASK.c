
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {int intr; int client; int poweroff_work; int int_enabled; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct tsl2563_chip* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct iio_dev*) ;
 struct iio_dev* FUNC_5 (struct tsl2563_chip*) ;
 int FUNC_6 (struct tsl2563_chip*,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct tsl2563_chip *VAR_3 = FUNC_2(VAR_2);
 struct iio_dev *VAR_4 = FUNC_5(VAR_3);

 FUNC_4(VAR_4);
 if (!VAR_3->int_enabled)
  FUNC_0(&VAR_3->poweroff_work);

 VAR_3->intr &= ~0x30;
 FUNC_3(VAR_3->client, VAR_0 | VAR_1,
      VAR_3->intr);
 FUNC_1();
 FUNC_6(VAR_3, 0);

 return 0;
}
