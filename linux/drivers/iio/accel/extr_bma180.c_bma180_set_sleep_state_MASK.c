
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bma180_data {int sleep_state; TYPE_2__* client; TYPE_1__* part_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int sleep_mask; int sleep_reg; } ;


 int FUNC_0 (struct bma180_data*,int ,int ,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct bma180_data *VAR_0, bool VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_0->part_info->sleep_reg,
  VAR_0->part_info->sleep_mask, VAR_1);

 if (VAR_2) {
  FUNC_1(&VAR_0->client->dev,
   "failed to set sleep state %d\n", VAR_1);
  return VAR_2;
 }
 VAR_0->sleep_state = VAR_1;

 return 0;
}
