
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct samsung_pll_rate_table {int mdiv; int pdiv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(
  const struct samsung_pll_rate_table *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = (VAR_5 >> VAR_1) & VAR_0;
 VAR_7 = (VAR_5 >> VAR_3) & VAR_2;

 return (VAR_4->mdiv != VAR_6 || VAR_4->pdiv != VAR_7);
}
