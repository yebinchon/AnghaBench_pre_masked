
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sci_clk {int clk_id; int dev_id; TYPE_2__* provider; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int sci; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_freq ) (int ,int ,int ,unsigned long,unsigned long,unsigned long) ;} ;


 int FUNC_0 (int ,int ,int ,unsigned long,unsigned long,unsigned long) ;
 struct sci_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct sci_clk *VAR_3 = FUNC_1(VAR_0);

 return VAR_3->provider->ops->set_freq(VAR_3->provider->sci, VAR_3->dev_id,
         VAR_3->clk_id, VAR_1, VAR_1, VAR_1);
}
