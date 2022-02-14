
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sci_clk {int clk_id; int dev_id; TYPE_1__* provider; } ;
struct clk_rate_request {int rate; int max_rate; int min_rate; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int (* get_best_match_freq ) (int ,int ,int ,int ,int ,int ,int *) ;} ;
struct TYPE_3__ {int dev; int sci; TYPE_2__* ops; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *) ;
 struct sci_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0,
      struct clk_rate_request *VAR_1)
{
 struct sci_clk *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;
 u64 VAR_4;

 VAR_3 = VAR_2->provider->ops->get_best_match_freq(VAR_2->provider->sci,
            VAR_2->dev_id,
            VAR_2->clk_id,
            VAR_1->min_rate,
            VAR_1->rate,
            VAR_1->max_rate,
            &VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_2->provider->dev,
   "determine-rate failed for dev=%d, clk=%d, ret=%d\n",
   VAR_2->dev_id, VAR_2->clk_id, VAR_3);
  return VAR_3;
 }

 VAR_1->rate = VAR_4;

 return 0;
}
