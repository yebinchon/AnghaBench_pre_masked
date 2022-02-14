
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_clk_info {unsigned int num_parents; char* name; int flags; int id; int * parents; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct tegra_bpmp_clk {unsigned int num_parents; TYPE_1__ hw; int * parents; struct tegra_bpmp* bpmp; int id; } ;
struct tegra_bpmp {int dev; } ;
struct clk_init_data {char* name; unsigned int num_parents; char const** parent_names; int * ops; } ;
typedef int init ;


 int VAR_0 ;
 struct tegra_bpmp_clk* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int * FUNC_3 (int ,unsigned int,int,int ) ;
 struct tegra_bpmp_clk* FUNC_4 (int ,int,int ) ;
 char** FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (char const**) ;
 int FUNC_7 (struct clk_init_data*,int ,int) ;
 struct tegra_bpmp_clk_info* FUNC_8 (struct tegra_bpmp_clk_info const*,unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct tegra_bpmp_clk *
FUNC_9(struct tegra_bpmp *VAR_8,
   const struct tegra_bpmp_clk_info *VAR_9,
   const struct tegra_bpmp_clk_info *VAR_10,
   unsigned int VAR_11)
{
 struct tegra_bpmp_clk *VAR_12;
 struct clk_init_data VAR_13;
 const char **VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_12 = FUNC_4(VAR_8->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_12->id = VAR_9->id;
 VAR_12->bpmp = VAR_8;

 VAR_12->parents = FUNC_3(VAR_8->dev, VAR_9->num_parents,
        sizeof(*VAR_12->parents), VAR_1);
 if (!VAR_12->parents)
  return FUNC_0(-VAR_0);

 VAR_12->num_parents = VAR_9->num_parents;


 FUNC_7(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.name = VAR_9->name;
 VAR_12->hw.init = &VAR_13;

 if (VAR_9->flags & VAR_2) {
  if (VAR_9->flags & VAR_3)
   VAR_13.ops = &VAR_6;
  else
   VAR_13.ops = &VAR_5;
 } else {
  if (VAR_9->flags & VAR_3)
   VAR_13.ops = &VAR_7;
  else
   VAR_13.ops = &VAR_4;
 }

 VAR_13.num_parents = VAR_9->num_parents;

 VAR_14 = FUNC_5(VAR_9->num_parents, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 for (VAR_15 = 0; VAR_15 < VAR_9->num_parents; VAR_15++) {
  const struct tegra_bpmp_clk_info *VAR_17;


  VAR_12->parents[VAR_15] = VAR_9->parents[VAR_15];

  VAR_17 = FUNC_8(VAR_10, VAR_11,
          VAR_9->parents[VAR_15]);
  if (!VAR_17) {
   FUNC_1(VAR_8->dev, "no parent %u found for %u\n",
    VAR_9->parents[VAR_15], VAR_9->id);
   continue;
  }

  VAR_14[VAR_15] = VAR_17->name;
 }

 VAR_13.parent_names = VAR_14;

 VAR_16 = FUNC_2(VAR_8->dev, &VAR_12->hw);

 FUNC_6(VAR_14);

 if (VAR_16 < 0)
  return FUNC_0(VAR_16);

 return VAR_12;
}
