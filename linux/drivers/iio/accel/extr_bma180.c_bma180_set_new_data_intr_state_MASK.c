
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bma180_data {TYPE_2__* client; TYPE_1__* part_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int int_enable_mask; int int_enable_reg; } ;


 int FUNC_0 (struct bma180_data*) ;
 int FUNC_1 (struct bma180_data*,int ,int ,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(struct bma180_data *VAR_0, bool VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_0->part_info->int_enable_reg,
   VAR_0->part_info->int_enable_mask, VAR_1);
 if (VAR_2)
  goto err;
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto err;

 return 0;

err:
 FUNC_2(&VAR_0->client->dev,
  "failed to set new data interrupt state %d\n", VAR_1);
 return VAR_2;
}
