
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bma180_data {int bw; TYPE_1__* client; TYPE_2__* part_info; scalar_t__ sleep_state; } ;
struct TYPE_4__ {int num_bw; int* bw_table; int bw_mask; int bw_reg; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bma180_data*,int ,int ,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct bma180_data *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2->sleep_state)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->part_info->num_bw; ++VAR_5) {
  if (VAR_2->part_info->bw_table[VAR_5] == VAR_3) {
   VAR_4 = FUNC_0(VAR_2, VAR_2->part_info->bw_reg,
    VAR_2->part_info->bw_mask, VAR_5);
   if (VAR_4) {
    FUNC_1(&VAR_2->client->dev,
     "failed to set bandwidth\n");
    return VAR_4;
   }
   VAR_2->bw = VAR_3;
   return 0;
  }
 }

 return -VAR_1;
}
