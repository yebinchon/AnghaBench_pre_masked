
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max30102_data {scalar_t__ chip_id; int regmap; TYPE_1__* client; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (unsigned int,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct device_node*,char*,unsigned int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct max30102_data *VAR_4)
{
 struct device *VAR_5 = &VAR_4->client->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_3(VAR_6, "maxim,red-led-current-microamp", &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_5, "no red-led-current-microamp set\n");


  VAR_7 = 7000;
 }

 VAR_9 = FUNC_2(VAR_7, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_5, "invalid RED LED current setting %d\n", VAR_7);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_4->regmap, VAR_1, VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_4->chip_id == VAR_3) {
  VAR_9 = FUNC_3(VAR_6,
   "maxim,green-led-current-microamp", &VAR_7);
  if (VAR_9) {
   FUNC_1(VAR_5, "no green-led-current-microamp set\n");


   VAR_7 = 7000;
  }

  VAR_9 = FUNC_2(VAR_7, &VAR_8);
  if (VAR_9) {
   FUNC_0(VAR_5, "invalid green LED current setting %d\n",
    VAR_7);
   return VAR_9;
  }

  VAR_9 = FUNC_4(VAR_4->regmap, VAR_2,
       VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_6, "maxim,ir-led-current-microamp", &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_5, "no ir-led-current-microamp set\n");


  VAR_7 = 7000;
 }

 VAR_9 = FUNC_2(VAR_7, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_5, "invalid IR LED current setting %d\n", VAR_7);
  return VAR_9;
 }

 return FUNC_4(VAR_4->regmap, VAR_0, VAR_8);
}
