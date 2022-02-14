
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_timers {int max_arr; int clk; int regmap; } ;
struct stm32_timer_trigger_cfg {unsigned int num_valids_table; scalar_t__** valids_table; } ;
struct stm32_timer_trigger {scalar_t__* valids; int triggers; int max_arr; int clk; int regmap; struct device* dev; } ;
struct device {TYPE_1__* driver; int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int of_match_table; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stm32_timers* FUNC_1 (int ) ;
 struct stm32_timer_trigger* FUNC_2 (struct device*,int,int ) ;
 TYPE_2__* FUNC_3 (int ,struct device*) ;
 scalar_t__ FUNC_4 (int ,char*,unsigned int*) ;
 int FUNC_5 (struct platform_device*,struct stm32_timer_trigger*) ;
 struct stm32_timer_trigger* FUNC_6 (struct device*) ;
 int FUNC_7 (struct stm32_timer_trigger*) ;
 int FUNC_8 (struct stm32_timer_trigger*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct stm32_timer_trigger *VAR_6;
 struct stm32_timers *VAR_7 = FUNC_1(VAR_4->dev.parent);
 const struct stm32_timer_trigger_cfg *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_5->of_node, "reg", &VAR_9))
  return -VAR_0;

 VAR_8 = (const struct stm32_timer_trigger_cfg *)
  FUNC_3(VAR_5->driver->of_match_table, VAR_5)->data;

 if (VAR_9 >= FUNC_0(VAR_3) ||
     VAR_9 >= VAR_8->num_valids_table)
  return -VAR_0;


 if (*VAR_8->valids_table[VAR_9])
  VAR_6 = FUNC_6(VAR_5);
 else
  VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6), VAR_2);

 if (!VAR_6)
  return -VAR_1;

 VAR_6->dev = VAR_5;
 VAR_6->regmap = VAR_7->regmap;
 VAR_6->clk = VAR_7->clk;
 VAR_6->max_arr = VAR_7->max_arr;
 VAR_6->triggers = VAR_3[VAR_9];
 VAR_6->valids = VAR_8->valids_table[VAR_9];
 FUNC_8(VAR_6);

 VAR_10 = FUNC_7(VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_5(VAR_4, VAR_6);

 return 0;
}
