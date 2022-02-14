
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct regulator {int dummy; } ;
struct lm87_data {int channel; int config; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,struct i2c_client*) ;
 struct regulator* FUNC_8 (TYPE_1__*,char*) ;
 struct lm87_data* FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int VAR_6 ;
 int FUNC_11 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct regulator*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7)
{
 struct lm87_data *VAR_8 = FUNC_9(VAR_7);
 int VAR_9;
 struct device_node *VAR_10 = VAR_7->dev.of_node;
 u8 VAR_11 = 0;
 struct regulator *VAR_12 = ((void*)0);

 if (VAR_10) {
  if (FUNC_12(VAR_10, "has-temp3"))
   VAR_11 |= VAR_0;
  if (FUNC_12(VAR_10, "has-in6"))
   VAR_11 |= FUNC_0(0);
  if (FUNC_12(VAR_10, "has-in7"))
   VAR_11 |= FUNC_0(1);
  VAR_12 = FUNC_8(&VAR_7->dev, "vcc");
  if (!FUNC_1(VAR_12)) {
   if (FUNC_13(VAR_12) == 5000000)
    VAR_11 |= VAR_1;
  }
  VAR_8->channel = VAR_11;
  FUNC_11(VAR_7,
    VAR_2, VAR_8->channel);
 } else if (FUNC_6(&VAR_7->dev)) {
  VAR_8->channel = *(u8 *)FUNC_6(&VAR_7->dev);
  FUNC_11(VAR_7,
     VAR_2, VAR_8->channel);
 } else {
  VAR_8->channel = FUNC_10(VAR_7, VAR_2);
 }
 VAR_8->config = FUNC_10(VAR_7, VAR_3) & 0x6F;

 VAR_9 = FUNC_7(&VAR_7->dev, VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;

 if (!(VAR_8->config & 0x01)) {
  int VAR_13;


  for (VAR_13 = 1; VAR_13 < 6; VAR_13++) {
   FUNC_11(VAR_7, FUNC_5(VAR_13), 0x00);
   FUNC_11(VAR_7, FUNC_4(VAR_13), 0xFF);
  }
  for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
   FUNC_11(VAR_7, VAR_4[VAR_13], 0x7F);
   FUNC_11(VAR_7, VAR_5[VAR_13], 0x00);
   FUNC_11(VAR_7, FUNC_3(VAR_13), 0x00);
   FUNC_11(VAR_7, FUNC_2(VAR_13), 0xFF);
  }
  if (VAR_8->channel & VAR_0) {
   FUNC_11(VAR_7, VAR_4[2], 0x7F);
   FUNC_11(VAR_7, VAR_5[2], 0x00);
  } else {
   FUNC_11(VAR_7, FUNC_5(0), 0x00);
   FUNC_11(VAR_7, FUNC_4(0), 0xFF);
  }
 }


 if ((VAR_8->config & 0x09) != 0x01)
  FUNC_11(VAR_7, VAR_3,
     (VAR_8->config & 0x77) | 0x01);
 return 0;
}
