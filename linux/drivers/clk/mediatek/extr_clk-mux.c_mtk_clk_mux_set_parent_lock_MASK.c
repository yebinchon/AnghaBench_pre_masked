
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mtk_clk_mux {scalar_t__ lock; TYPE_1__* data; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int mux_shift; int mux_ofs; scalar_t__ mux_width; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 struct mtk_clk_mux* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct mtk_clk_mux *VAR_2 = FUNC_6(VAR_0);
 u32 VAR_3 = FUNC_0(VAR_2->data->mux_width - 1, 0);
 unsigned long VAR_4 = 0;

 if (VAR_2->lock)
  FUNC_4(VAR_2->lock, VAR_4);
 else
  FUNC_1(VAR_2->lock);

 FUNC_3(VAR_2->regmap, VAR_2->data->mux_ofs, VAR_3,
  VAR_1 << VAR_2->data->mux_shift);

 if (VAR_2->lock)
  FUNC_5(VAR_2->lock, VAR_4);
 else
  FUNC_2(VAR_2->lock);

 return 0;
}
