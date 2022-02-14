
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct clk {int exclusive_count; scalar_t__ min_rate; scalar_t__ max_rate; TYPE_1__* core; int clks_node; } ;
struct TYPE_3__ {scalar_t__ req_rate; int ref; struct module* owner; int protect_count; } ;


 int FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct clk*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct module*) ;

void FUNC_11(struct clk *VAR_1)
{
 struct module *VAR_2;

 if (!VAR_1 || FUNC_2(FUNC_0(VAR_1)))
  return;

 FUNC_5();






 if (FUNC_1(VAR_1->exclusive_count)) {

  VAR_1->core->protect_count -= (VAR_1->exclusive_count - 1);
  FUNC_3(VAR_1->core);
  VAR_1->exclusive_count = 0;
 }

 FUNC_8(&VAR_1->clks_node);
 if (VAR_1->min_rate > VAR_1->core->req_rate ||
     VAR_1->max_rate < VAR_1->core->req_rate)
  FUNC_4(VAR_1->core, VAR_1->core->req_rate);

 VAR_2 = VAR_1->core->owner;
 FUNC_9(&VAR_1->core->ref, VAR_0);

 FUNC_6();

 FUNC_10(VAR_2);

 FUNC_7(VAR_1);
}
