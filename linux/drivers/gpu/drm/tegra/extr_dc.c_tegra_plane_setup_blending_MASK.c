
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_plane {int dummy; } ;
struct tegra_dc_window {scalar_t__ zpos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tegra_plane*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_plane *VAR_7,
           const struct tegra_dc_window *VAR_8)
{
 u32 VAR_9;

 VAR_9 = VAR_0 | VAR_2 |
  VAR_1 |
  VAR_3;
 FUNC_3(VAR_7, VAR_9, VAR_5);

 VAR_9 = VAR_0 | VAR_2 |
  VAR_1 |
  VAR_3;
 FUNC_3(VAR_7, VAR_9, VAR_6);

 VAR_9 = FUNC_1(255) | FUNC_0(255) | FUNC_2(255 - VAR_8->zpos);
 FUNC_3(VAR_7, VAR_9, VAR_4);
}
