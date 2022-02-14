
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxcjk1013_data {scalar_t__ chipset; TYPE_1__* client; scalar_t__ dready_trigger_on; int timestamp; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct kxcjk1013_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct iio_dev *VAR_11 = VAR_10;
 struct kxcjk1013_data *VAR_12 = FUNC_3(VAR_11);
 int VAR_13;

 VAR_13 = FUNC_2(VAR_12->client, VAR_6);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_12->client->dev, "Error reading reg_int_src1\n");
  goto ack_intr;
 }

 if (VAR_13 & VAR_7) {
  if (VAR_12->chipset == VAR_8)
   FUNC_4(VAR_11,
           FUNC_0(VAR_0,
           0,
           VAR_3,
           VAR_2,
           VAR_1),
           VAR_12->timestamp);
  else
   FUNC_5(VAR_11);
 }

ack_intr:
 if (VAR_12->dready_trigger_on)
  return VAR_4;

 VAR_13 = FUNC_2(VAR_12->client, VAR_5);
 if (VAR_13 < 0)
  FUNC_1(&VAR_12->client->dev, "Error reading reg_int_rel\n");

 return VAR_4;
}
