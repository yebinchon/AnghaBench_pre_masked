
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sci_clk {scalar_t__ clk_id; int dev_id; TYPE_2__* provider; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int sci; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_parent ) (int ,int ,scalar_t__,scalar_t__) ;} ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 struct sci_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct sci_clk *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->provider->ops->set_parent(VAR_2->provider->sci, VAR_2->dev_id,
           VAR_2->clk_id,
           VAR_1 + 1 + VAR_2->clk_id);
}
