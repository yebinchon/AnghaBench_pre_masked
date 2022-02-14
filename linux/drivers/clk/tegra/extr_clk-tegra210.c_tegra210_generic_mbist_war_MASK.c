
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra210_domain_mbist_war {int lvl2_mask; scalar_t__ lvl2_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tegra210_domain_mbist_war *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0 + VAR_1->lvl2_offset);
 FUNC_2(VAR_2 | VAR_1->lvl2_mask, VAR_0 + VAR_1->lvl2_offset);
 FUNC_0(1, VAR_0);
 FUNC_2(VAR_2, VAR_0 + VAR_1->lvl2_offset);
 FUNC_0(1, VAR_0);
}
