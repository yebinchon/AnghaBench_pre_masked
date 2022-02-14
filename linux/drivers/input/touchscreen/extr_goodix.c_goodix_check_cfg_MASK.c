
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct goodix_ts_data {TYPE_2__* chip; TYPE_1__* client; } ;
struct firmware {scalar_t__ size; } ;
struct TYPE_4__ {int (* check_config ) (struct goodix_ts_data*,struct firmware const*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct goodix_ts_data*,struct firmware const*) ;

__attribute__((used)) static int FUNC_2(struct goodix_ts_data *VAR_2,
       const struct firmware *VAR_3)
{
 if (VAR_3->size > VAR_1) {
  FUNC_0(&VAR_2->client->dev,
   "The length of the config fw is not correct");
  return -VAR_0;
 }

 return VAR_2->chip->check_config(VAR_2, VAR_3);
}
