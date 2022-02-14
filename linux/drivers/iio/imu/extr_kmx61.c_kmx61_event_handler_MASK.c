
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kmx61_data {TYPE_1__* client; struct iio_dev* acc_indio_dev; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_20, void *VAR_21)
{
 struct kmx61_data *VAR_22 = VAR_21;
 struct iio_dev *VAR_23 = VAR_22->acc_indio_dev;
 int VAR_24;

 VAR_24 = FUNC_2(VAR_22->client, VAR_11);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_22->client->dev, "Error reading reg_ins1\n");
  goto ack_intr;
 }

 if (VAR_24 & VAR_12) {
  VAR_24 = FUNC_2(VAR_22->client, VAR_13);
  if (VAR_24 < 0) {
   FUNC_1(&VAR_22->client->dev, "Error reading reg_ins2\n");
   goto ack_intr;
  }

  if (VAR_24 & VAR_14)
   FUNC_4(VAR_23,
           FUNC_0(VAR_0,
           0,
           VAR_4,
           VAR_3,
           VAR_1),
           0);

  if (VAR_24 & VAR_15)
   FUNC_4(VAR_23,
           FUNC_0(VAR_0,
           0,
           VAR_4,
           VAR_3,
           VAR_2),
           0);

  if (VAR_24 & VAR_16)
   FUNC_4(VAR_23,
           FUNC_0(VAR_0,
           0,
           VAR_5,
           VAR_3,
           VAR_1),
           0);

  if (VAR_24 & VAR_17)
   FUNC_4(VAR_23,
           FUNC_0(VAR_0,
           0,
           VAR_5,
           VAR_3,
           VAR_2),
           0);

  if (VAR_24 & VAR_18)
   FUNC_4(VAR_23,
           FUNC_0(VAR_0,
           0,
           VAR_6,
           VAR_3,
           VAR_1),
           0);

  if (VAR_24 & VAR_19)
   FUNC_4(VAR_23,
           FUNC_0(VAR_0,
           0,
           VAR_6,
           VAR_3,
           VAR_2),
           0);
 }

ack_intr:
 VAR_24 = FUNC_2(VAR_22->client, VAR_8);
 if (VAR_24 < 0)
  FUNC_1(&VAR_22->client->dev, "Error reading reg_ctrl1\n");

 VAR_24 |= VAR_9;
 VAR_24 = FUNC_3(VAR_22->client, VAR_8, VAR_24);
 if (VAR_24 < 0)
  FUNC_1(&VAR_22->client->dev, "Error writing reg_ctrl1\n");

 VAR_24 = FUNC_2(VAR_22->client, VAR_10);
 if (VAR_24 < 0)
  FUNC_1(&VAR_22->client->dev, "Error reading reg_inl\n");

 return VAR_7;
}
