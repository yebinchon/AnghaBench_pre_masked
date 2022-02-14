
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mtk_clk_mux {TYPE_1__* data; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int mux_shift; int mux_ofs; scalar_t__ mux_width; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int*) ;
 struct mtk_clk_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct mtk_clk_mux *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2 = FUNC_0(VAR_1->data->mux_width - 1, 0);
 u32 VAR_3;

 FUNC_1(VAR_1->regmap, VAR_1->data->mux_ofs, &VAR_3);
 VAR_3 = (VAR_3 >> VAR_1->data->mux_shift) & VAR_2;

 return VAR_3;
}
