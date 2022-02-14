
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_timers {int max_arr; int clk; int regmap; } ;
struct TYPE_2__ {int num_counts; struct stm32_timer_cnt* priv; int num_signals; int signals; int * counts; int * ops; struct device* parent; int name; } ;
struct stm32_timer_cnt {TYPE_1__ counter; int ceiling; int clk; int regmap; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct stm32_timers*) ;
 struct stm32_timers* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 struct stm32_timer_cnt* FUNC_5 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 struct stm32_timers *VAR_7 = FUNC_2(VAR_6->dev.parent);
 struct device *VAR_8 = &VAR_6->dev;
 struct stm32_timer_cnt *VAR_9;

 if (FUNC_1(VAR_7))
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->regmap = VAR_7->regmap;
 VAR_9->clk = VAR_7->clk;
 VAR_9->ceiling = VAR_7->max_arr;

 VAR_9->counter.name = FUNC_3(VAR_8);
 VAR_9->counter.parent = VAR_8;
 VAR_9->counter.ops = &VAR_5;
 VAR_9->counter.counts = &VAR_3;
 VAR_9->counter.num_counts = 1;
 VAR_9->counter.signals = VAR_4;
 VAR_9->counter.num_signals = FUNC_0(VAR_4);
 VAR_9->counter.priv = VAR_9;


 return FUNC_4(VAR_8, &VAR_9->counter);
}
