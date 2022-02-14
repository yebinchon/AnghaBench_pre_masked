
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int of_node; } ;
struct clk_init_data {int num_parents; int name; int ops; int * parent_names; } ;
struct TYPE_4__ {int num; TYPE_2__** hws; } ;
struct __prci_data {TYPE_1__ hw_clks; } ;
struct TYPE_5__ {struct clk_init_data* init; } ;
struct __prci_clock {TYPE_2__ hw; int name; scalar_t__ pwd; struct __prci_data* pd; int ops; int parent_name; } ;


 int FUNC_0 (struct __prci_clock*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct __prci_clock* VAR_2 ;
 int FUNC_1 (struct __prci_data*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,int ,int) ;
 int FUNC_6 (struct device*,TYPE_2__*) ;
 int FUNC_7 (struct device*,int ,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4, struct __prci_data *VAR_5)
{
 struct clk_init_data VAR_6 = { };
 struct __prci_clock *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_8(VAR_4->of_node);
 if (VAR_8 != VAR_1) {
  FUNC_3(VAR_4, "expected only two parent clocks, found %d\n",
   VAR_8);
  return -VAR_0;
 }


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); ++VAR_9) {
  VAR_7 = &VAR_2[VAR_9];

  VAR_6.name = VAR_7->name;
  VAR_6.parent_names = &VAR_7->parent_name;
  VAR_6.num_parents = 1;
  VAR_6.ops = VAR_7->ops;
  VAR_7->hw.init = &VAR_6;

  VAR_7->pd = VAR_5;

  if (VAR_7->pwd)
   FUNC_1(VAR_5, VAR_7->pwd);

  VAR_10 = FUNC_6(VAR_4, &VAR_7->hw);
  if (VAR_10) {
   FUNC_5(VAR_4, "Failed to register clock %s: %d\n",
     VAR_6.name, VAR_10);
   return VAR_10;
  }

  VAR_10 = FUNC_2(&VAR_7->hw, VAR_7->name, FUNC_4(VAR_4));
  if (VAR_10) {
   FUNC_5(VAR_4, "Failed to register clkdev for %s: %d\n",
     VAR_6.name, VAR_10);
   return VAR_10;
  }

  VAR_5->hw_clks.hws[VAR_9] = &VAR_7->hw;
 }

 VAR_5->hw_clks.num = VAR_9;

 VAR_10 = FUNC_7(VAR_4, VAR_3,
     &VAR_5->hw_clks);
 if (VAR_10) {
  FUNC_3(VAR_4, "could not add hw_provider: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
