
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sci_clk {int clk_id; int dev_id; TYPE_2__* provider; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int dev; int sci; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* is_on ) (int ,int ,int ,int*,int*) ;} ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int*,int*) ;
 struct sci_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct sci_clk *VAR_1 = FUNC_2(VAR_0);
 bool VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = VAR_1->provider->ops->is_on(VAR_1->provider->sci, VAR_1->dev_id,
     VAR_1->clk_id, &VAR_2,
     &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_1->provider->dev,
   "is_prepared failed for dev=%d, clk=%d, ret=%d\n",
   VAR_1->dev_id, VAR_1->clk_id, VAR_4);
  return 0;
 }

 return VAR_2;
}
