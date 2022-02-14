
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sci_clk {int flags; int clk_id; int dev_id; TYPE_1__* provider; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int (* get_clock ) (int ,int ,int ,int,int,int) ;} ;
struct TYPE_3__ {int sci; TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int,int) ;
 struct sci_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3)
{
 struct sci_clk *VAR_4 = FUNC_1(VAR_3);
 bool VAR_5 = VAR_4->flags & VAR_2;
 bool VAR_6 = VAR_4->flags & VAR_0;
 bool VAR_7 = VAR_4->flags & VAR_1;

 return VAR_4->provider->ops->get_clock(VAR_4->provider->sci, VAR_4->dev_id,
          VAR_4->clk_id, VAR_5,
          VAR_6,
          VAR_7);
}
