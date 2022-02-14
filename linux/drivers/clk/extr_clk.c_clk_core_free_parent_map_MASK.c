
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int num_parents; TYPE_1__* parents; } ;
struct TYPE_2__ {int fw_name; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct clk_core *VAR_0)
{
 int VAR_1 = VAR_0->num_parents;

 if (!VAR_0->num_parents)
  return;

 while (--VAR_1 >= 0) {
  FUNC_1(VAR_0->parents[VAR_1].name);
  FUNC_1(VAR_0->parents[VAR_1].fw_name);
 }

 FUNC_0(VAR_0->parents);
}
