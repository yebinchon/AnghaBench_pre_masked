
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_platform_data {int (* init_clockdomain ) (int ,struct clk*,struct clk*,int *) ;} ;
struct sysc {int nr_clocks; int cookie; int dev; struct clk** clocks; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct ti_sysc_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct clk*,struct clk*,int *) ;

__attribute__((used)) static int FUNC_2(struct sysc *VAR_3)
{
 struct ti_sysc_platform_data *VAR_4 = FUNC_0(VAR_3->dev);
 struct clk *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;

 if (!VAR_4 || !VAR_4->init_clockdomain)
  return 0;

 switch (VAR_3->nr_clocks) {
 case 2:
  VAR_6 = VAR_3->clocks[VAR_2];

 case 1:
  VAR_5 = VAR_3->clocks[VAR_1];
  break;
 case 0:
  return 0;
 }

 VAR_7 = VAR_4->init_clockdomain(VAR_3->dev, VAR_5, VAR_6, &VAR_3->cookie);
 if (!VAR_7 || VAR_7 == -VAR_0)
  return 0;

 return VAR_7;
}
