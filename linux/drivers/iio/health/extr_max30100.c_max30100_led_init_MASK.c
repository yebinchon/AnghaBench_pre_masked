
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max30100_data {int regmap; TYPE_1__* client; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (unsigned int,int*) ;
 int FUNC_3 (struct device_node*,char*,unsigned int*,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct max30100_data *VAR_5)
{
 struct device *VAR_6 = &VAR_5->client->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 unsigned int VAR_8[2];
 int VAR_9, VAR_10;

 VAR_10 = FUNC_3(VAR_7, "maxim,led-current-microamp",
     (unsigned int *) &VAR_8, 2);
 if (VAR_10) {

  VAR_9 = (VAR_1 <<
   VAR_4) |
   VAR_2;
  FUNC_1(VAR_6, "no led-current-microamp set");

  return FUNC_5(VAR_5->regmap, VAR_0, VAR_9);
 }


 VAR_10 = FUNC_2(VAR_8[0], &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_6, "invalid RED current setting %d", VAR_8[0]);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_5->regmap, VAR_0,
  VAR_3 <<
  VAR_4,
  VAR_9 << VAR_4);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_8[1], &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_6, "invalid IR current setting %d", VAR_8[1]);
  return VAR_10;
 }

 return FUNC_4(VAR_5->regmap, VAR_0,
  VAR_3, VAR_9);
}
