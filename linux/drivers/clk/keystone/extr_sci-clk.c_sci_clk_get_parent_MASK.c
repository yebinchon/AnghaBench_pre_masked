
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sci_clk {scalar_t__ clk_id; int dev_id; TYPE_1__* provider; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int (* get_parent ) (int ,int ,scalar_t__,void*) ;} ;
struct TYPE_3__ {int dev; int sci; TYPE_2__* ops; } ;


 int FUNC_0 (int ,char*,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ,scalar_t__,void*) ;
 struct sci_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct sci_clk *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2 = 0;
 int VAR_3;

 VAR_3 = VAR_1->provider->ops->get_parent(VAR_1->provider->sci, VAR_1->dev_id,
          VAR_1->clk_id, (void *)&VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1->provider->dev,
   "get-parent failed for dev=%d, clk=%d, ret=%d\n",
   VAR_1->dev_id, VAR_1->clk_id, VAR_3);
  return 0;
 }

 VAR_2 = VAR_2 - VAR_1->clk_id - 1;

 return (u8)VAR_2;
}
