
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct xgene_clk_pll {int version; scalar_t__ type; scalar_t__ pll_offset; scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (char*,int ,unsigned long,unsigned long,int) ;
 struct xgene_clk_pll* FUNC_8 (struct clk_hw*) ;
 unsigned long FUNC_9 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_10(struct clk_hw *VAR_1,
    unsigned long VAR_2)
{
 struct xgene_clk_pll *VAR_3 = FUNC_8(VAR_1);
 unsigned long VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_6 = FUNC_9(VAR_3->reg + VAR_3->pll_offset);

 if (VAR_3->version <= 1) {
  if (VAR_3->type == VAR_0) {




   VAR_8 = 2;
   VAR_5 = VAR_2 * (FUNC_3(VAR_6) + 4);
  } else {





   VAR_7 = FUNC_2(VAR_6) + 1;
   VAR_8 = FUNC_1(VAR_6) + 1;
   VAR_9 = FUNC_0(VAR_6);
   VAR_4 = VAR_2 / VAR_7;
   VAR_5 = VAR_4 * VAR_9;
  }
 } else {




  VAR_8 = FUNC_5(VAR_6) ? 2 : 3;
  VAR_5 = VAR_2 * FUNC_4(VAR_6);
 }
 FUNC_7("%s pll recalc rate %ld parent %ld version %d\n",
   FUNC_6(VAR_1), VAR_5 / VAR_8, VAR_2,
   VAR_3->version);

 return VAR_5 / VAR_8;
}
