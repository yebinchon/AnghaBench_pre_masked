
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_8__ {struct clk_init_data* init; } ;
struct vexpress_osc {void* rate_max; void* rate_min; TYPE_5__ hw; struct clk* reg; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk_init_data {int name; scalar_t__ num_parents; scalar_t__ flags; int * ops; } ;
struct clk {int dummy; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (TYPE_5__*,void*,void*) ;
 struct clk* FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 struct vexpress_osc* FUNC_7 (TYPE_1__*,int,int ) ;
 struct clk* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,struct clk*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int ,char*,int *) ;
 scalar_t__ FUNC_11 (int ,char*,void**,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct clk_init_data VAR_5;
 struct vexpress_osc *VAR_6;
 struct clk *VAR_7;
 u32 VAR_8[2];

 VAR_6 = FUNC_7(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->reg = FUNC_8(&VAR_4->dev);
 if (FUNC_1(VAR_6->reg))
  return FUNC_2(VAR_6->reg);

 if (FUNC_11(VAR_4->dev.of_node, "freq-range", VAR_8,
   FUNC_0(VAR_8)) == 0) {
  VAR_6->rate_min = VAR_8[0];
  VAR_6->rate_max = VAR_8[1];
 }

 if (FUNC_10(VAR_4->dev.of_node, "clock-output-names",
   &VAR_5.name) != 0)
  VAR_5.name = FUNC_6(&VAR_4->dev);

 VAR_5.ops = &VAR_3;
 VAR_5.flags = 0;
 VAR_5.num_parents = 0;

 VAR_6->hw.init = &VAR_5;

 VAR_7 = FUNC_4(((void*)0), &VAR_6->hw);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_9(VAR_4->dev.of_node, VAR_2, VAR_7);
 FUNC_3(&VAR_6->hw, VAR_6->rate_min, VAR_6->rate_max);

 FUNC_5(&VAR_4->dev, "Registered clock '%s'\n", VAR_5.name);

 return 0;
}
