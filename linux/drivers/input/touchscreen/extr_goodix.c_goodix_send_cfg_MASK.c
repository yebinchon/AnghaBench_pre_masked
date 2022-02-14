
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct goodix_ts_data {TYPE_2__* client; TYPE_1__* chip; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int config_addr; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct goodix_ts_data*,struct firmware const*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct goodix_ts_data *VAR_0,
      const struct firmware *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_0->client, VAR_0->chip->config_addr, VAR_1->data,
     VAR_1->size);
 if (VAR_2) {
  FUNC_1(&VAR_0->client->dev, "Failed to write config data: %d",
   VAR_2);
  return VAR_2;
 }
 FUNC_0(&VAR_0->client->dev, "Config sent successfully.");


 FUNC_4(10000, 11000);

 return 0;
}
