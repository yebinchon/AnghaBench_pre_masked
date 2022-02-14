
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_5__ {int flags; int detach_dev; int attach_dev; int name; } ;
struct TYPE_6__ {struct clk_init_data* init; } ;
struct davinci_lpsc_clk {int md; int pd; int flags; TYPE_1__ pm_domain; TYPE_2__ hw; struct regmap* regmap; struct device* dev; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct davinci_lpsc_clk* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct device*,int ,char*,int ,char const*) ;
 int FUNC_6 (struct davinci_lpsc_clk*) ;
 struct davinci_lpsc_clk* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*,int *,int) ;

__attribute__((used)) static struct davinci_lpsc_clk *
FUNC_9(struct device *VAR_10, const char *VAR_11,
     const char *VAR_12, struct regmap *VAR_13,
     u32 VAR_14, u32 VAR_15, u32 VAR_16)
{
 struct clk_init_data VAR_17;
 struct davinci_lpsc_clk *VAR_18;
 int VAR_19;
 bool VAR_20;

 VAR_18 = FUNC_7(sizeof(*VAR_18), VAR_4);
 if (!VAR_18)
  return FUNC_0(-VAR_2);

 VAR_17.name = VAR_11;
 VAR_17.ops = &VAR_7;
 VAR_17.parent_names = (VAR_12 ? &VAR_12 : ((void*)0));
 VAR_17.num_parents = (VAR_12 ? 1 : 0);
 VAR_17.flags = 0;

 if (VAR_16 & VAR_5)
  VAR_17.flags |= VAR_0;

 if (VAR_16 & VAR_6)
  VAR_17.flags |= VAR_1;

 VAR_18->dev = VAR_10;
 VAR_18->regmap = VAR_13;
 VAR_18->hw.init = &VAR_17;
 VAR_18->md = VAR_14;
 VAR_18->pd = VAR_15;
 VAR_18->flags = VAR_16;

 VAR_19 = FUNC_2(VAR_10, &VAR_18->hw);
 if (VAR_19 < 0) {
  FUNC_6(VAR_18);
  return FUNC_0(VAR_19);
 }


 if (!VAR_10 || !VAR_10->of_node)
  return VAR_18;


 VAR_19 = FUNC_3(&VAR_18->hw, VAR_11, FUNC_1(VAR_10));

 VAR_18->pm_domain.name = FUNC_5(VAR_10, VAR_4, "%s: %s",
           FUNC_1(VAR_10), VAR_11);
 VAR_18->pm_domain.attach_dev = VAR_8;
 VAR_18->pm_domain.detach_dev = VAR_9;
 VAR_18->pm_domain.flags = VAR_3;

 VAR_20 = FUNC_4(&VAR_18->hw);
 FUNC_8(&VAR_18->pm_domain, ((void*)0), VAR_20);

 return VAR_18;
}
