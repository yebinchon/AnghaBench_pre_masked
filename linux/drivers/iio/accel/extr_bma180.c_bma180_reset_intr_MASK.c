
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bma180_data {TYPE_2__* client; TYPE_1__* part_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int int_reset_mask; int int_reset_reg; } ;


 int FUNC_0 (struct bma180_data*,int ,int ,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct bma180_data *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0, VAR_0->part_info->int_reset_reg,
  VAR_0->part_info->int_reset_mask, 1);

 if (VAR_1)
  FUNC_1(&VAR_0->client->dev, "failed to reset interrupt\n");

 return VAR_1;
}
