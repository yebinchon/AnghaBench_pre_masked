
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc {int dummy; } ;
struct reg_entry {int offset; int value; } ;


 int FUNC_0 (struct tegra_dc*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_dc *VAR_0,
    const struct reg_entry *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, VAR_1[VAR_3].value, VAR_1[VAR_3].offset);
}
