
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int phase; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_phase ) (int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct clk_core *VAR_0)
{
 int VAR_1;

 FUNC_0();

 if (VAR_0->ops->get_phase)
  VAR_0->phase = VAR_0->ops->get_phase(VAR_0->hw);
 VAR_1 = VAR_0->phase;
 FUNC_1();

 return VAR_1;
}
