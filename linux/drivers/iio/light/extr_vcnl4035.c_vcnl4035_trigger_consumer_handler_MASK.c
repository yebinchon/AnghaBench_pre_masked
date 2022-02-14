
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct vcnl4035_data {TYPE_1__* client; int regmap; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int s64 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct vcnl4035_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct vcnl4035_data *VAR_6 = FUNC_3(VAR_5);
 u8 VAR_7[FUNC_0(sizeof(u16), sizeof(s64)) + sizeof(s64)];
 int VAR_8;

 VAR_8 = FUNC_6(VAR_6->regmap, VAR_1, (int *)VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_6->client->dev,
   "Trigger consumer can't read from sensor.\n");
  goto fail_read;
 }
 FUNC_4(VAR_5, VAR_7,
     FUNC_2(VAR_5));

fail_read:
 FUNC_5(VAR_5->trig);

 return VAR_0;
}
