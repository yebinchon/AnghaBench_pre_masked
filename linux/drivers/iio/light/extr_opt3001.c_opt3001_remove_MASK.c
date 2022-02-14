
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct opt3001 {int dev; int client; scalar_t__ use_irq; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct opt3001* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct opt3001*,int*,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_2(VAR_2);
 struct opt3001 *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 u16 VAR_6;

 if (VAR_4->use_irq)
  FUNC_1(VAR_2->irq, VAR_3);

 VAR_5 = FUNC_3(VAR_4->client, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "failed to read register %02x\n",
    VAR_0);
  return VAR_5;
 }

 VAR_6 = VAR_5;
 FUNC_6(VAR_4, &VAR_6, VAR_1);

 VAR_5 = FUNC_4(VAR_4->client, VAR_0,
   VAR_6);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "failed to write register %02x\n",
    VAR_0);
  return VAR_5;
 }

 return 0;
}
