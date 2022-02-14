
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane {unsigned int index; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct tegra_plane *VAR_0,
        struct tegra_plane *VAR_1)
{
 unsigned int VAR_2 = 0, VAR_3;

 FUNC_0(VAR_0 == VAR_1);

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  if (VAR_3 == VAR_0->index)
   continue;

  if (VAR_3 == VAR_1->index)
   break;

  VAR_2++;
 }

 return VAR_2;
}
