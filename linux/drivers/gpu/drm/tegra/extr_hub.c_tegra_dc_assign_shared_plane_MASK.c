
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int index; } ;
struct tegra_plane {TYPE_1__ base; } ;
struct tegra_dc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct tegra_dc*,struct tegra_plane*) ;
 int FUNC_6 (struct tegra_plane*,int ) ;
 int FUNC_7 (struct tegra_plane*,int,int ) ;
 int FUNC_8 (struct tegra_plane*) ;
 int FUNC_9 (struct tegra_plane*,struct tegra_dc*) ;
 int FUNC_10 (struct tegra_plane*) ;

__attribute__((used)) static void FUNC_11(struct tegra_dc *VAR_12,
      struct tegra_plane *VAR_13)
{
 u32 VAR_14;
 int VAR_15;

 if (!FUNC_5(VAR_12, VAR_13)) {
  VAR_15 = FUNC_9(VAR_13, VAR_12);
  if (VAR_15 < 0)
   return;
 }

 VAR_14 = FUNC_6(VAR_13, VAR_0);
 VAR_14 |= VAR_8;
 FUNC_7(VAR_13, VAR_14, VAR_0);

 VAR_14 = FUNC_6(VAR_13, VAR_2);
 VAR_14 = FUNC_3(1);
 FUNC_7(VAR_13, VAR_14, VAR_2);


 VAR_14 = FUNC_6(VAR_13, VAR_3);
 VAR_14 &= ~VAR_7;
 FUNC_7(VAR_13, VAR_14, VAR_3);

 VAR_14 = FUNC_6(VAR_13, VAR_4);
 VAR_14 |= VAR_11;
 FUNC_7(VAR_13, VAR_14, VAR_4);


 VAR_14 = FUNC_6(VAR_13, VAR_6);
 VAR_14 = FUNC_2(0) | FUNC_1(0);
 FUNC_7(VAR_13, VAR_14, VAR_6);


 VAR_14 = FUNC_6(VAR_13, VAR_5);
 VAR_14 = FUNC_0(0x331);
 FUNC_7(VAR_13, VAR_14, VAR_5);

 VAR_14 = FUNC_6(VAR_13, VAR_1);
 VAR_14 &= ~VAR_10;
 VAR_14 |= FUNC_4(VAR_13->base.index);
 VAR_14 |= VAR_9;
 FUNC_7(VAR_13, VAR_14, VAR_1);

 FUNC_10(VAR_13);
 FUNC_8(VAR_13);
}
