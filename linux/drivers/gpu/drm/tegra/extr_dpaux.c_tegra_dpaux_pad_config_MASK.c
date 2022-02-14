
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dpaux {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_3 (struct tegra_dpaux*) ;
 int FUNC_4 (struct tegra_dpaux*) ;
 int FUNC_5 (struct tegra_dpaux*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct tegra_dpaux *VAR_7, unsigned VAR_8)
{
 u32 VAR_9;

 switch (VAR_8) {
 case 130:
  VAR_9 = FUNC_0(2) |
   FUNC_2(4) |
   FUNC_1(0x18) |
   VAR_1 |
   VAR_4;
  break;

 case 129:
  VAR_9 = VAR_3 |
   VAR_2 |
   FUNC_0(2) |
   FUNC_2(4) |
   FUNC_1(0x18) |
   VAR_5;
  break;

 case 128:
  FUNC_3(VAR_7);
  return 0;

 default:
  return -VAR_6;
 }

 FUNC_5(VAR_7, VAR_9, VAR_0);
 FUNC_4(VAR_7);

 return 0;
}
