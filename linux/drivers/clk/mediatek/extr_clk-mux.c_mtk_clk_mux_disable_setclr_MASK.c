
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_clk_mux {TYPE_1__* data; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int gate_shift; int set_ofs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct mtk_clk_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct mtk_clk_mux *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->regmap, VAR_1->data->set_ofs,
   FUNC_0(VAR_1->data->gate_shift));
}
