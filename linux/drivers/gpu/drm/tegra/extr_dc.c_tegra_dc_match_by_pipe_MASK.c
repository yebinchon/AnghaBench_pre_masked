
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc {unsigned int pipe; } ;
struct device {int dummy; } ;


 struct tegra_dc* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 struct tegra_dc *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = (unsigned long)(void *)VAR_1;

 return VAR_2->pipe == VAR_3;
}
