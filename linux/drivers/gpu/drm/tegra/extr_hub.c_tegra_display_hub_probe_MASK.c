
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tegra_windowgroup {unsigned int index; struct clk* rst; scalar_t__ usecount; int lock; } ;
struct TYPE_13__ {TYPE_1__* dev; int * ops; int list; } ;
struct tegra_display_hub {unsigned int num_heads; TYPE_4__ client; struct clk* rst; struct clk** clk_heads; struct tegra_windowgroup* wgrps; TYPE_2__* soc; struct clk* clk_hub; struct clk* clk_dsc; struct clk* clk_disp; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
typedef int id ;
typedef int clk ;
struct TYPE_12__ {unsigned int num_wgrps; scalar_t__ supports_dsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 void* FUNC_4 (TYPE_1__*,char*) ;
 struct clk* FUNC_5 (TYPE_1__*,struct device_node*,char*) ;
 void* FUNC_6 (TYPE_1__*,unsigned int,int,int ) ;
 struct tegra_display_hub* FUNC_7 (TYPE_1__*,int,int ) ;
 void* FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (TYPE_1__*) ;
 unsigned int FUNC_12 (int ) ;
 struct device_node* FUNC_13 (int ,struct device_node*) ;
 int FUNC_14 (struct device_node*) ;
 int FUNC_15 (struct platform_device*,struct tegra_display_hub*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct clk*) ;
 int FUNC_18 (char*,int,char*,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = ((void*)0);
 struct tegra_display_hub *VAR_6;
 struct clk *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_7(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->soc = FUNC_11(&VAR_4->dev);

 VAR_6->clk_disp = FUNC_4(&VAR_4->dev, "disp");
 if (FUNC_1(VAR_6->clk_disp)) {
  VAR_9 = FUNC_2(VAR_6->clk_disp);
  return VAR_9;
 }

 if (VAR_6->soc->supports_dsc) {
  VAR_6->clk_dsc = FUNC_4(&VAR_4->dev, "dsc");
  if (FUNC_1(VAR_6->clk_dsc)) {
   VAR_9 = FUNC_2(VAR_6->clk_dsc);
   return VAR_9;
  }
 }

 VAR_6->clk_hub = FUNC_4(&VAR_4->dev, "hub");
 if (FUNC_1(VAR_6->clk_hub)) {
  VAR_9 = FUNC_2(VAR_6->clk_hub);
  return VAR_9;
 }

 VAR_6->rst = FUNC_8(&VAR_4->dev, "misc");
 if (FUNC_1(VAR_6->rst)) {
  VAR_9 = FUNC_2(VAR_6->rst);
  return VAR_9;
 }

 VAR_6->wgrps = FUNC_6(&VAR_4->dev, VAR_6->soc->num_wgrps,
      sizeof(*VAR_6->wgrps), VAR_2);
 if (!VAR_6->wgrps)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6->soc->num_wgrps; VAR_8++) {
  struct tegra_windowgroup *VAR_10 = &VAR_6->wgrps[VAR_8];
  char VAR_11[8];

  FUNC_18(VAR_11, sizeof(VAR_11), "wgrp%u", VAR_8);
  FUNC_10(&VAR_10->lock);
  VAR_10->usecount = 0;
  VAR_10->index = VAR_8;

  VAR_10->rst = FUNC_8(&VAR_4->dev, VAR_11);
  if (FUNC_1(VAR_10->rst))
   return FUNC_2(VAR_10->rst);

  VAR_9 = FUNC_17(VAR_10->rst);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_6->num_heads = FUNC_12(VAR_4->dev.of_node);

 VAR_6->clk_heads = FUNC_6(&VAR_4->dev, VAR_6->num_heads, sizeof(VAR_7),
          VAR_2);
 if (!VAR_6->clk_heads)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_heads; VAR_8++) {
  VAR_5 = FUNC_13(VAR_4->dev.of_node, VAR_5);
  if (!VAR_5) {
   FUNC_3(&VAR_4->dev, "failed to find node for head %u\n",
    VAR_8);
   return -VAR_0;
  }

  VAR_7 = FUNC_5(&VAR_4->dev, VAR_5, "dc");
  if (FUNC_1(VAR_7)) {
   FUNC_3(&VAR_4->dev, "failed to get clock for head %u\n",
    VAR_8);
   FUNC_14(VAR_5);
   return FUNC_2(VAR_7);
  }

  VAR_6->clk_heads[VAR_8] = VAR_7;
 }

 FUNC_14(VAR_5);


 VAR_9 = FUNC_17(VAR_6->rst);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_15(VAR_4, VAR_6);
 FUNC_16(&VAR_4->dev);

 FUNC_0(&VAR_6->client.list);
 VAR_6->client.ops = &VAR_3;
 VAR_6->client.dev = &VAR_4->dev;

 VAR_9 = FUNC_9(&VAR_6->client);
 if (VAR_9 < 0)
  FUNC_3(&VAR_4->dev, "failed to register host1x client: %d\n",
   VAR_9);

 return VAR_9;
}
