
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcnl4035_data {int als_it_val; int als_persistence; void* als_thresh_low; TYPE_1__* client; int regmap; void* als_thresh_high; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (struct vcnl4035_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct vcnl4035_data *VAR_14)
{
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_1(VAR_14->regmap, VAR_10, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_0(&VAR_14->client->dev, "Failed to read DEV_ID register\n");
  return VAR_15;
 }

 if (VAR_16 != VAR_11) {
  FUNC_0(&VAR_14->client->dev, "Wrong id, got %x, expected %x\n",
   VAR_16, VAR_11);
  return -VAR_0;
 }

 VAR_15 = FUNC_4(VAR_14, VAR_12);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_2(VAR_14->regmap, VAR_1,
     VAR_13,
     1);
 if (VAR_15) {
  FUNC_0(&VAR_14->client->dev, "set white channel enable %d\n",
   VAR_15);
  return VAR_15;
 }


 VAR_15 = FUNC_2(VAR_14->regmap, VAR_1,
     VAR_3,
     VAR_2);
 if (VAR_15) {
  FUNC_0(&VAR_14->client->dev, "set default ALS IT returned %d\n",
   VAR_15);
  return VAR_15;
 }
 VAR_14->als_it_val = VAR_2;


 VAR_15 = FUNC_2(VAR_14->regmap, VAR_1,
     VAR_5,
     VAR_4);
 if (VAR_15) {
  FUNC_0(&VAR_14->client->dev, "set default PERS returned %d\n",
   VAR_15);
  return VAR_15;
 }
 VAR_14->als_persistence = VAR_4;


 VAR_15 = FUNC_3(VAR_14->regmap, VAR_6,
    VAR_7);
 if (VAR_15) {
  FUNC_0(&VAR_14->client->dev, "set default THDH returned %d\n",
   VAR_15);
  return VAR_15;
 }
 VAR_14->als_thresh_high = VAR_7;


 VAR_15 = FUNC_3(VAR_14->regmap, VAR_8,
    VAR_9);
 if (VAR_15) {
  FUNC_0(&VAR_14->client->dev, "set default THDL returned %d\n",
   VAR_15);
  return VAR_15;
 }
 VAR_14->als_thresh_low = VAR_9;

 return 0;
}
