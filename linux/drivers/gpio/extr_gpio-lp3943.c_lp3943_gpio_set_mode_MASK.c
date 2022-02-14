
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lp3943_reg_cfg {size_t shift; int mask; int reg; } ;
struct lp3943_gpio {struct lp3943* lp3943; } ;
struct lp3943 {struct lp3943_reg_cfg* mux_cfg; } ;


 int FUNC_0 (struct lp3943*,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_1(struct lp3943_gpio *VAR_0, u8 VAR_1,
    u8 VAR_2)
{
 struct lp3943 *VAR_3 = VAR_0->lp3943;
 const struct lp3943_reg_cfg *VAR_4 = VAR_3->mux_cfg;

 return FUNC_0(VAR_3, VAR_4[VAR_1].reg, VAR_4[VAR_1].mask,
      VAR_2 << VAR_4[VAR_1].shift);
}
