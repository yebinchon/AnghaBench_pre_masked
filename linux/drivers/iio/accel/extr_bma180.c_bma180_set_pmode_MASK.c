
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bma180_data {int pmode; TYPE_2__* client; TYPE_1__* part_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int power_mask; int power_reg; int lowpower_val; } ;


 int FUNC_0 (struct bma180_data*,int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct bma180_data *VAR_0, bool VAR_1)
{
 u8 VAR_2 = VAR_1 ? VAR_0->part_info->lowpower_val : 0;
 int VAR_3 = FUNC_0(VAR_0, VAR_0->part_info->power_reg,
  VAR_0->part_info->power_mask, VAR_2);

 if (VAR_3) {
  FUNC_1(&VAR_0->client->dev, "failed to set power mode\n");
  return VAR_3;
 }
 VAR_0->pmode = VAR_1;

 return 0;
}
