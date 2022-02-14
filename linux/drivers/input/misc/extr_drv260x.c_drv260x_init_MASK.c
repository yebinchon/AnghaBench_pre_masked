
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drv260x_data {unsigned int rated_voltage; unsigned int overdrive_voltage; int mode; TYPE_1__* client; int regmap; int library; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct drv260x_data *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_5(VAR_9->regmap,
        VAR_5, VAR_9->rated_voltage);
 if (VAR_10) {
  FUNC_1(&VAR_9->client->dev,
   "Failed to write DRV260X_RATED_VOLT register: %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_9->regmap,
        VAR_4, VAR_9->overdrive_voltage);
 if (VAR_10) {
  FUNC_1(&VAR_9->client->dev,
   "Failed to write DRV260X_OD_CLAMP_VOLT register: %d\n",
   VAR_10);
  return VAR_10;
 }

 switch (VAR_9->mode) {
 case 128:
  VAR_10 = FUNC_3(VAR_9->regmap,
           VAR_7,
           FUNC_0(VAR_7));
  if (VAR_10) {
   FUNC_1(&VAR_9->client->dev,
    "Failed to write LRA calibration registers: %d\n",
    VAR_10);
   return VAR_10;
  }

  break;

 case 129:
  VAR_10 = FUNC_3(VAR_9->regmap,
           VAR_6,
           FUNC_0(VAR_6));
  if (VAR_10) {
   FUNC_1(&VAR_9->client->dev,
    "Failed to write ERM calibration registers: %d\n",
    VAR_10);
   return VAR_10;
  }

  VAR_10 = FUNC_4(VAR_9->regmap, VAR_2,
        VAR_3,
        VAR_9->library);
  if (VAR_10) {
   FUNC_1(&VAR_9->client->dev,
    "Failed to write DRV260X_LIB_SEL register: %d\n",
    VAR_10);
   return VAR_10;
  }

  break;

 default:
  VAR_10 = FUNC_3(VAR_9->regmap,
           VAR_8,
           FUNC_0(VAR_8));
  if (VAR_10) {
   FUNC_1(&VAR_9->client->dev,
    "Failed to write LRA init registers: %d\n",
    VAR_10);
   return VAR_10;
  }

  VAR_10 = FUNC_4(VAR_9->regmap, VAR_2,
        VAR_3,
        VAR_9->library);
  if (VAR_10) {
   FUNC_1(&VAR_9->client->dev,
    "Failed to write DRV260X_LIB_SEL register: %d\n",
    VAR_10);
   return VAR_10;
  }


  return 0;
 }

 VAR_10 = FUNC_5(VAR_9->regmap, VAR_0, VAR_1);
 if (VAR_10) {
  FUNC_1(&VAR_9->client->dev,
   "Failed to write GO register: %d\n",
   VAR_10);
  return VAR_10;
 }

 do {
  VAR_10 = FUNC_2(VAR_9->regmap, VAR_0, &VAR_11);
  if (VAR_10) {
   FUNC_1(&VAR_9->client->dev,
    "Failed to read GO register: %d\n",
    VAR_10);
   return VAR_10;
  }
 } while (VAR_11 == VAR_1);

 return 0;
}
