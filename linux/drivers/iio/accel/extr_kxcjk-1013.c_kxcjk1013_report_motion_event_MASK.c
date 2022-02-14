
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxcjk1013_data {int timestamp; TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct kxcjk1013_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct iio_dev *VAR_14)
{
 struct kxcjk1013_data *VAR_15 = FUNC_3(VAR_14);

 int VAR_16 = FUNC_2(VAR_15->client,
        VAR_7);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "Error reading reg_int_src2\n");
  return;
 }

 if (VAR_16 & VAR_8)
  FUNC_4(VAR_14,
          FUNC_0(VAR_0,
        0,
        VAR_4,
        VAR_3,
        VAR_1),
          VAR_15->timestamp);

 if (VAR_16 & VAR_9)
  FUNC_4(VAR_14,
          FUNC_0(VAR_0,
        0,
        VAR_4,
        VAR_3,
        VAR_2),
          VAR_15->timestamp);

 if (VAR_16 & VAR_10)
  FUNC_4(VAR_14,
          FUNC_0(VAR_0,
        0,
        VAR_5,
        VAR_3,
        VAR_1),
          VAR_15->timestamp);

 if (VAR_16 & VAR_11)
  FUNC_4(VAR_14,
          FUNC_0(VAR_0,
        0,
        VAR_5,
        VAR_3,
        VAR_2),
          VAR_15->timestamp);

 if (VAR_16 & VAR_12)
  FUNC_4(VAR_14,
          FUNC_0(VAR_0,
        0,
        VAR_6,
        VAR_3,
        VAR_1),
          VAR_15->timestamp);

 if (VAR_16 & VAR_13)
  FUNC_4(VAR_14,
          FUNC_0(VAR_0,
        0,
        VAR_6,
        VAR_3,
        VAR_2),
          VAR_15->timestamp);
}
