
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct clk_init_data* init; } ;
struct scmi_clk {TYPE_2__* info; TYPE_3__ hw; } ;
struct device {int dummy; } ;
struct clk_init_data {int name; int * ops; int num_parents; int flags; } ;
struct TYPE_5__ {int max_rate; int min_rate; } ;
struct TYPE_6__ {TYPE_1__ range; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct device*,TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct scmi_clk *VAR_3)
{
 int VAR_4;
 struct clk_init_data VAR_5 = {
  .flags = VAR_0,
  .num_parents = 0,
  .ops = &VAR_1,
  .name = VAR_3->info->name,
 };

 VAR_3->hw.init = &VAR_5;
 VAR_4 = FUNC_1(VAR_2, &VAR_3->hw);
 if (!VAR_4)
  FUNC_0(&VAR_3->hw, VAR_3->info->range.min_rate,
          VAR_3->info->range.max_rate);
 return VAR_4;
}
