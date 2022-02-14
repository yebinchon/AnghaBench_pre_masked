
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mma9551_data {int* irqs; int mutex; TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct iio_dev*) ;
 struct mma9551_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int *) ;



 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct iio_dev *VAR_10 = VAR_9;
 struct mma9551_data *VAR_11 = FUNC_4(VAR_10);
 int VAR_12, VAR_13, VAR_14 = -1;
 u16 VAR_15;
 u8 VAR_16;

 FUNC_7(&VAR_11->mutex);

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  if (VAR_8 == VAR_11->irqs[VAR_12]) {
   VAR_14 = VAR_12;
   break;
  }

 if (VAR_14 == -1) {

  FUNC_2(&VAR_11->client->dev,
    "irq triggered on unused line %d\n", VAR_11->irqs[3]);
  goto out;
 }

 switch (VAR_14) {
 case 130:
  VAR_15 = VAR_7;
  break;
 case 129:
  VAR_15 = VAR_6;
  break;
 case 128:
  VAR_15 = VAR_5;
  break;
 }





 VAR_13 = FUNC_6(VAR_11->client, VAR_4,
           VAR_15, &VAR_16);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_11->client->dev,
   "error %d reading tilt register in IRQ\n", VAR_13);
  goto out;
 }

 FUNC_5(VAR_10,
         FUNC_0(VAR_2, 0, (VAR_14 + 1),
       VAR_1, VAR_0),
         FUNC_3(VAR_10));

out:
 FUNC_8(&VAR_11->mutex);

 return VAR_3;
}
