
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pmc_clk_data {scalar_t__ critical; scalar_t__ base; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct clk_plt {int lookup; TYPE_1__ hw; int lock; scalar_t__ reg; } ;
struct clk_init_data {char const** parent_names; int num_parents; int name; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_plt* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 struct clk_plt* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct clk_plt *FUNC_8(struct platform_device *VAR_7, int VAR_8,
     const struct pmc_clk_data *VAR_9,
     const char **VAR_10,
     int VAR_11)
{
 struct clk_plt *VAR_12;
 struct clk_init_data VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(&VAR_7->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 VAR_13.name = FUNC_4(VAR_2, "%s_%d", VAR_3, VAR_8);
 VAR_13.ops = &VAR_6;
 VAR_13.flags = 0;
 VAR_13.parent_names = VAR_10;
 VAR_13.num_parents = VAR_11;

 VAR_12->hw.init = &VAR_13;
 VAR_12->reg = VAR_9->base + VAR_4 + VAR_8 * VAR_5;
 FUNC_7(&VAR_12->lock);






 if (VAR_9->critical && FUNC_6(&VAR_12->hw))
  VAR_13.flags |= VAR_0;

 VAR_14 = FUNC_2(&VAR_7->dev, &VAR_12->hw);
 if (VAR_14) {
  VAR_12 = FUNC_0(VAR_14);
  goto err_free_init;
 }

 VAR_12->lookup = FUNC_1(&VAR_12->hw, VAR_13.name, ((void*)0));
 if (!VAR_12->lookup) {
  VAR_12 = FUNC_0(-VAR_1);
  goto err_free_init;
 }

err_free_init:
 FUNC_5(VAR_13.name);
 return VAR_12;
}
