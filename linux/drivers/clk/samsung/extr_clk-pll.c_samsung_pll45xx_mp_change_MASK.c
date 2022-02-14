
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct samsung_pll_rate_table {int mdiv; int pdiv; int afc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_6, u32 VAR_7,
    const struct samsung_pll_rate_table *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = (VAR_6 >> VAR_3) & VAR_2;
 VAR_10 = (VAR_6 >> VAR_5) & VAR_4;
 VAR_11 = (VAR_7 >> VAR_1) & VAR_0;

 return (VAR_9 != VAR_8->mdiv || VAR_10 != VAR_8->pdiv
  || VAR_11 != VAR_8->afc);
}
