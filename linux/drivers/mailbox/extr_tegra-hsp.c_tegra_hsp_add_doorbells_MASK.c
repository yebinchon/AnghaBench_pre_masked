
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_hsp_db_map {int index; int master; scalar_t__ name; } ;
struct tegra_hsp_channel {int dummy; } ;
struct tegra_hsp {TYPE_1__* soc; } ;
struct TYPE_2__ {struct tegra_hsp_db_map* map; } ;


 scalar_t__ FUNC_0 (struct tegra_hsp_channel*) ;
 int FUNC_1 (struct tegra_hsp_channel*) ;
 struct tegra_hsp_channel* FUNC_2 (struct tegra_hsp*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_hsp *VAR_0)
{
 const struct tegra_hsp_db_map *VAR_1 = VAR_0->soc->map;
 struct tegra_hsp_channel *VAR_2;

 while (VAR_1->name) {
  VAR_2 = FUNC_2(VAR_0, VAR_1->name,
          VAR_1->master, VAR_1->index);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);

  VAR_1++;
 }

 return 0;
}
