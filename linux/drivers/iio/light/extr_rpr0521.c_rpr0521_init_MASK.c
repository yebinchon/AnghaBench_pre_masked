
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpr0521_data {scalar_t__ irq_timestamp; int regmap; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct rpr0521_data*,int ) ;
 int FUNC_5 (struct rpr0521_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct rpr0521_data *VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8->regmap, VAR_6, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_8->client->dev, "Failed to read REG_ID register\n");
  return VAR_9;
 }

 if (VAR_10 != VAR_2) {
  FUNC_0(&VAR_8->client->dev, "Wrong id, got %x, expected %x\n",
   VAR_10, VAR_2);
  return -VAR_0;
 }


 VAR_9 = FUNC_3(VAR_8->regmap, VAR_7,
     VAR_4,
     VAR_1);
 if (VAR_9) {
  FUNC_1("regmap_update_bits returned %d\n", VAR_9);
  return VAR_9;
 }


 VAR_9 = FUNC_4(VAR_8, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_5(VAR_8, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8->irq_timestamp = 0;

 return 0;
}
