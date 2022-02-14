
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sx9500_data {int* prox_stat; int * event_enabled; TYPE_1__* client; int regmap; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned int,int ,int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct sx9500_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;
 int FUNC_6 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_7(struct iio_dev *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10;
 struct sx9500_data *VAR_11 = FUNC_4(VAR_7);

 VAR_8 = FUNC_6(VAR_11->regmap, VAR_6, &VAR_9);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_11->client->dev, "i2c transfer error in irq\n");
  return;
 }

 VAR_9 >>= VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  int VAR_12;
  u64 VAR_13;
  bool VAR_14 = VAR_9 & FUNC_0(VAR_10);

  if (!VAR_11->event_enabled[VAR_10])
   continue;
  if (VAR_14 == VAR_11->prox_stat[VAR_10])

   continue;

  VAR_12 = VAR_14 ? VAR_0 : VAR_1;
  VAR_13 = FUNC_1(VAR_3, VAR_10,
       VAR_2, VAR_12);
  FUNC_5(VAR_7, VAR_13, FUNC_3(VAR_7));
  VAR_11->prox_stat[VAR_10] = VAR_14;
 }
}
