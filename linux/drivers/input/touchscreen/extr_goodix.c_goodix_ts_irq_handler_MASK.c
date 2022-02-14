
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct goodix_ts_data {TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct goodix_ts_data*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct goodix_ts_data *VAR_4 = VAR_3;

 FUNC_2(VAR_4);

 if (FUNC_1(VAR_4->client, VAR_0, 0) < 0)
  FUNC_0(&VAR_4->client->dev, "I2C write end_cmd error\n");

 return VAR_1;
}
