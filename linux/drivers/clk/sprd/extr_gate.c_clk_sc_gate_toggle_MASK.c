
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_clk_common {scalar_t__ reg; int regmap; } ;
struct sprd_gate {int flags; int sc_offset; int enable_mask; struct sprd_clk_common common; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(const struct sprd_gate *VAR_1, bool VAR_2)
{
 const struct sprd_clk_common *VAR_3 = &VAR_1->common;
 bool VAR_4 = VAR_1->flags & VAR_0 ? 1 : 0;
 unsigned int VAR_5;

 VAR_4 ^= VAR_2;







 VAR_5 = VAR_4 ? VAR_1->sc_offset : VAR_1->sc_offset * 2;

 FUNC_0(VAR_3->regmap, VAR_3->reg + VAR_5,
     VAR_1->enable_mask);
}
