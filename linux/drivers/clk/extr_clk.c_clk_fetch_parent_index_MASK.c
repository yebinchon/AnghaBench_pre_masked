
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int num_parents; scalar_t__ hw; TYPE_1__* parents; int name; } ;
struct TYPE_2__ {scalar_t__ hw; struct clk_core* core; scalar_t__ name; } ;


 int VAR_0 ;
 struct clk_core* FUNC_0 (struct clk_core*,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_core *VAR_1,
      struct clk_core *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_parents; VAR_3++) {

  if (VAR_1->parents[VAR_3].core == VAR_2)
   return VAR_3;


  if (VAR_1->parents[VAR_3].core)
   continue;


  if (VAR_1->parents[VAR_3].hw) {
   if (VAR_1->parents[VAR_3].hw == VAR_2->hw)
    break;


   continue;
  }


  if (VAR_2 == FUNC_0(VAR_1, VAR_3))
   break;


  if (VAR_1->parents[VAR_3].name &&
      !FUNC_1(VAR_2->name, VAR_1->parents[VAR_3].name))
   break;
 }

 if (VAR_3 == VAR_1->num_parents)
  return -VAR_0;

 VAR_1->parents[VAR_3].core = VAR_2;
 return VAR_3;
}
