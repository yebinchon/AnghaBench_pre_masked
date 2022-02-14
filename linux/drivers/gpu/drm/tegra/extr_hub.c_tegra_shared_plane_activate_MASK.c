
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int index; } ;
struct tegra_plane {TYPE_1__ base; struct tegra_dc* dc; } ;
struct tegra_dc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct tegra_dc*,int ) ;
 int FUNC_2 (struct tegra_dc*,int,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct tegra_plane *VAR_4)
{
 struct tegra_dc *VAR_5 = VAR_4->dc;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;

 VAR_7 = VAR_0 | VAR_2 << VAR_4->base.index;
 FUNC_2(VAR_5, VAR_7, VAR_1);

 VAR_6 = VAR_3 + FUNC_0(1000);

 while (FUNC_3(VAR_3, VAR_6)) {
  VAR_8 = FUNC_1(VAR_5, VAR_1);
  if ((VAR_8 & VAR_7) == 0)
   break;

  FUNC_4(100, 400);
 }
}
