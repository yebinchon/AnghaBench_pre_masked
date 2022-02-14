
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int clk_num; struct clk** clks; } ;
struct hisi_clock_data {TYPE_1__ clk_data; int base; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct hisi_clock_data* FUNC_1 (int *,int,int ) ;
 struct clk** FUNC_2 (int *,int,int,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (struct resource*) ;

struct hisi_clock_data *FUNC_5(struct platform_device *VAR_2,
      int VAR_3)
{
 struct hisi_clock_data *VAR_4;
 struct resource *VAR_5;
 struct clk **VAR_6;

 VAR_4 = FUNC_1(&VAR_2->dev, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_2, VAR_1, 0);
 if (!VAR_5)
  return ((void*)0);
 VAR_4->base = FUNC_0(&VAR_2->dev,
    VAR_5->start, FUNC_4(VAR_5));
 if (!VAR_4->base)
  return ((void*)0);

 VAR_6 = FUNC_2(&VAR_2->dev, VAR_3,
           sizeof(*VAR_6),
           VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_4->clk_data.clks = VAR_6;
 VAR_4->clk_data.clk_num = VAR_3;

 return VAR_4;
}
