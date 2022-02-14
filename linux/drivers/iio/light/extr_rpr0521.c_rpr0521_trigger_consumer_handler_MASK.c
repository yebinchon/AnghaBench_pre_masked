
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rpr0521_data {TYPE_1__* client; int regmap; scalar_t__ irq_timestamp; } ;
struct iio_poll_func {scalar_t__ timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct iio_dev*) ;
 struct rpr0521_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ,int ,int **,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct rpr0521_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 u8 VAR_8[16];


 if (FUNC_5(VAR_5) && VAR_6->irq_timestamp) {
  VAR_4->timestamp = VAR_6->irq_timestamp;
  VAR_6->irq_timestamp = 0;
 }

 if (!VAR_4->timestamp)
  VAR_4->timestamp = FUNC_1(VAR_5);

 VAR_7 = FUNC_6(VAR_6->regmap, VAR_1,
  &VAR_8,
  (3 * 2) + 1);
 if (!VAR_7)
  FUNC_3(VAR_5,
         VAR_8, VAR_4->timestamp);
 else
  FUNC_0(&VAR_6->client->dev,
   "Trigger consumer can't read from sensor.\n");
 VAR_4->timestamp = 0;

 FUNC_4(VAR_5->trig);

 return VAR_0;
}
