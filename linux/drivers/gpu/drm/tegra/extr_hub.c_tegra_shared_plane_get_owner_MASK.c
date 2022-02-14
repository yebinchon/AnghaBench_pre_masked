
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane {int dummy; } ;
struct tegra_dc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct tegra_dc*,unsigned int) ;
 unsigned int FUNC_1 (struct tegra_plane*,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(struct tegra_plane *VAR_2, struct tegra_dc *VAR_3)
{
 unsigned int VAR_4 =
  FUNC_1(VAR_2, VAR_0);

 return FUNC_0(VAR_3, VAR_4) & VAR_1;
}
