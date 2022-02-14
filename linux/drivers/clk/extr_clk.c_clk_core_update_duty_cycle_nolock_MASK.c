
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_duty {scalar_t__ den; scalar_t__ num; } ;
struct clk_core {int hw; TYPE_1__* ops; struct clk_duty duty; } ;
struct TYPE_2__ {int (* get_duty_cycle ) (int ,struct clk_duty*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*) ;
 int FUNC_2 (int ,struct clk_duty*) ;

__attribute__((used)) static int FUNC_3(struct clk_core *VAR_1)
{
 struct clk_duty *VAR_2 = &VAR_1->duty;
 int VAR_3 = 0;

 if (!VAR_1->ops->get_duty_cycle)
  return FUNC_1(VAR_1);

 VAR_3 = VAR_1->ops->get_duty_cycle(VAR_1->hw, VAR_2);
 if (VAR_3)
  goto reset;


 if (VAR_2->den == 0 || VAR_2->num > VAR_2->den) {
  VAR_3 = -VAR_0;
  goto reset;
 }

 return 0;

reset:
 FUNC_0(VAR_1);
 return VAR_3;
}
