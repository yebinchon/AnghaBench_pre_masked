
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct sci_clk {int clk_id; int dev_id; TYPE_2__* provider; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int dev; int sci; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_freq ) (int ,int ,int ,unsigned long*) ;} ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,unsigned long*) ;
 struct sci_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct sci_clk *VAR_2 = FUNC_2(VAR_0);
 u64 VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->provider->ops->get_freq(VAR_2->provider->sci, VAR_2->dev_id,
        VAR_2->clk_id, &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->provider->dev,
   "recalc-rate failed for dev=%d, clk=%d, ret=%d\n",
   VAR_2->dev_id, VAR_2->clk_id, VAR_4);
  return 0;
 }

 return VAR_3;
}
