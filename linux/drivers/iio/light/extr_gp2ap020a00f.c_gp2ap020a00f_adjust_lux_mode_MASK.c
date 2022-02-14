
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gp2ap020a00f_data {TYPE_1__* client; int flags; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct gp2ap020a00f_data*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct gp2ap020a00f_data *VAR_13,
     int VAR_14)
{
 u8 VAR_15 = 0xff;
 int VAR_16;

 if (!FUNC_5(VAR_3, &VAR_13->flags)) {
  if (VAR_14 > 16000) {
   FUNC_4(VAR_3, &VAR_13->flags);
   VAR_15 = VAR_9;
  }
 } else {
  if (VAR_14 < 1000) {
   FUNC_0(VAR_3, &VAR_13->flags);
   VAR_15 = VAR_10;
  }
 }

 if (VAR_15 != 0xff) {



  VAR_16 = FUNC_2(VAR_13,
     VAR_11, 0);
  if (VAR_16 < 0) {
   FUNC_1(&VAR_13->client->dev,
    "Clearing als threshold register failed.\n");
   return 0;
  }

  VAR_16 = FUNC_2(VAR_13,
     VAR_12, 0);
  if (VAR_16 < 0) {
   FUNC_1(&VAR_13->client->dev,
    "Clearing als threshold register failed.\n");
   return 0;
  }


  VAR_16 = FUNC_3(VAR_13->regmap,
   VAR_7,
   VAR_4,
   VAR_6);

  if (VAR_16 < 0) {
   FUNC_1(&VAR_13->client->dev,
    "Shutting down the device failed.\n");
   return 0;
  }

  VAR_16 = FUNC_3(VAR_13->regmap,
   VAR_0,
   VAR_8,
   VAR_15);

  if (VAR_16 < 0) {
   FUNC_1(&VAR_13->client->dev,
    "Adjusting device lux mode failed.\n");
   return 0;
  }

  VAR_16 = FUNC_3(VAR_13->regmap,
   VAR_7,
   VAR_4,
   VAR_5);

  if (VAR_16 < 0) {
   FUNC_1(&VAR_13->client->dev,
    "Powering up the device failed.\n");
   return 0;
  }


  if (FUNC_5(VAR_2, &VAR_13->flags)) {
   VAR_16 = FUNC_2(VAR_13,
     VAR_11, 1);
   if (VAR_16 < 0) {
    FUNC_1(&VAR_13->client->dev,
    "Adjusting als threshold value failed.\n");
    return 0;
   }
  }

  if (FUNC_5(VAR_1, &VAR_13->flags)) {
   VAR_16 = FUNC_2(VAR_13,
     VAR_12, 1);
   if (VAR_16 < 0) {
    FUNC_1(&VAR_13->client->dev,
    "Adjusting als threshold value failed.\n");
    return 0;
   }
  }

  return 1;
 }

 return 0;
}
