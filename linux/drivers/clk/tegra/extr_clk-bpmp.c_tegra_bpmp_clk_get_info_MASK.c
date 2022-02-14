
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct cmd_clk_get_all_info_response* data; } ;
struct tegra_bpmp_clk_message {unsigned int id; TYPE_1__ rx; int cmd; } ;
struct tegra_bpmp_clk_info {unsigned int num_parents; int flags; int * parents; int name; } ;
struct tegra_bpmp {int dummy; } ;
struct cmd_clk_get_all_info_response {unsigned int num_parents; int flags; int * parents; int name; } ;
typedef int response ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct tegra_bpmp*,struct tegra_bpmp_clk_message*) ;

__attribute__((used)) static int FUNC_3(struct tegra_bpmp *VAR_2, unsigned int VAR_3,
       struct tegra_bpmp_clk_info *VAR_4)
{
 struct cmd_clk_get_all_info_response VAR_5;
 struct tegra_bpmp_clk_message VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_0;
 VAR_6.id = VAR_3;
 VAR_6.rx.data = &VAR_5;
 VAR_6.rx.size = sizeof(VAR_5);

 VAR_8 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(VAR_4->name, VAR_5.name, VAR_1);
 VAR_4->num_parents = VAR_5.num_parents;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_parents; VAR_7++)
  VAR_4->parents[VAR_7] = VAR_5.parents[VAR_7];

 VAR_4->flags = VAR_5.flags;

 return 0;
}
