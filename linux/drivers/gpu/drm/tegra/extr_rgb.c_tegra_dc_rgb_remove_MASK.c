
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc {int * rgb; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct tegra_dc *VAR_0)
{
 if (!VAR_0->rgb)
  return 0;

 FUNC_0(VAR_0->rgb);
 VAR_0->rgb = ((void*)0);

 return 0;
}
