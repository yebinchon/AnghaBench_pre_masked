
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mtk_clk_mux {scalar_t__ lock; TYPE_1__* data; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int mux_shift; scalar_t__ upd_shift; int upd_ofs; int set_ofs; int clr_ofs; int mux_ofs; scalar_t__ mux_width; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 int FUNC_7 (scalar_t__,unsigned long) ;
 struct mtk_clk_mux* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct mtk_clk_mux *VAR_2 = FUNC_8(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2->data->mux_width - 1, 0);
 u32 VAR_4, VAR_5;
 unsigned long VAR_6 = 0;

 if (VAR_2->lock)
  FUNC_6(VAR_2->lock, VAR_6);
 else
  FUNC_2(VAR_2->lock);

 FUNC_4(VAR_2->regmap, VAR_2->data->mux_ofs, &VAR_5);
 VAR_4 = (VAR_5 & ~(VAR_3 << VAR_2->data->mux_shift))
   | (VAR_1 << VAR_2->data->mux_shift);

 if (VAR_4 != VAR_5) {
  FUNC_5(VAR_2->regmap, VAR_2->data->clr_ofs,
    VAR_3 << VAR_2->data->mux_shift);
  FUNC_5(VAR_2->regmap, VAR_2->data->set_ofs,
    VAR_1 << VAR_2->data->mux_shift);

  if (VAR_2->data->upd_shift >= 0)
   FUNC_5(VAR_2->regmap, VAR_2->data->upd_ofs,
     FUNC_0(VAR_2->data->upd_shift));
 }

 if (VAR_2->lock)
  FUNC_7(VAR_2->lock, VAR_6);
 else
  FUNC_3(VAR_2->lock);

 return 0;
}
