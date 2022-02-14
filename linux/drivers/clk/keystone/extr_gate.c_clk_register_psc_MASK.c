
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct clk_psc_data {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_psc {TYPE_1__ hw; int * lock; struct clk_psc_data* psc_data; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_2 ;
 struct clk* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct clk_psc*) ;
 struct clk_psc* FUNC_4 (int,int ) ;

__attribute__((used)) static struct clk *FUNC_5(struct device *VAR_3,
   const char *VAR_4,
   const char *VAR_5,
   struct clk_psc_data *VAR_6,
   spinlock_t *VAR_7)
{
 struct clk_init_data VAR_8;
 struct clk_psc *VAR_9;
 struct clk *VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_8.name = VAR_4;
 VAR_8.ops = &VAR_2;
 VAR_8.flags = 0;
 VAR_8.parent_names = (VAR_5 ? &VAR_5 : ((void*)0));
 VAR_8.num_parents = (VAR_5 ? 1 : 0);

 VAR_9->psc_data = VAR_6;
 VAR_9->lock = VAR_7;
 VAR_9->hw.init = &VAR_8;

 VAR_10 = FUNC_2(((void*)0), &VAR_9->hw);
 if (FUNC_1(VAR_10))
  FUNC_3(VAR_9);

 return VAR_10;
}
