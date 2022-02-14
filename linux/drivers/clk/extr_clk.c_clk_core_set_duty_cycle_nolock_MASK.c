
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_duty {int dummy; } ;
struct clk_core {int duty; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_duty_cycle ) (int ,struct clk_duty*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*,struct clk_duty*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct clk_duty*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct clk_duty*) ;
 int FUNC_5 (struct clk_core*,struct clk_duty*) ;
 int FUNC_6 (struct clk_core*,struct clk_duty*) ;

__attribute__((used)) static int FUNC_7(struct clk_core *VAR_2,
       struct clk_duty *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_1);

 if (FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_5(VAR_2, VAR_3);

 if (!VAR_2->ops->set_duty_cycle)
  return FUNC_1(VAR_2, VAR_3);

 VAR_4 = VAR_2->ops->set_duty_cycle(VAR_2->hw, VAR_3);
 if (!VAR_4)
  FUNC_3(&VAR_2->duty, VAR_3, sizeof(*VAR_3));

 FUNC_6(VAR_2, VAR_3);

 return VAR_4;
}
