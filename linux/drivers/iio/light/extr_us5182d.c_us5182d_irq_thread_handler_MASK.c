
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct us5182d_data {TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct iio_dev*) ;
 struct us5182d_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct iio_dev *VAR_10 = VAR_9;
 struct us5182d_data *VAR_11 = FUNC_5(VAR_10);
 enum iio_event_direction VAR_12;
 int VAR_13;
 u64 VAR_14;

 VAR_13 = FUNC_2(VAR_11->client, VAR_7);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_11->client->dev, "i2c transfer error in irq\n");
  return VAR_4;
 }

 VAR_12 = VAR_13 & VAR_5 ? VAR_1 : VAR_0;
 VAR_14 = FUNC_0(VAR_3, 1, VAR_2, VAR_12);

 FUNC_6(VAR_10, VAR_14, FUNC_4(VAR_10));

 VAR_13 = FUNC_3(VAR_11->client, VAR_7,
     VAR_13 & ~VAR_6);
 if (VAR_13 < 0)
  FUNC_1(&VAR_11->client->dev, "i2c transfer error in irq\n");

 return VAR_4;
}
