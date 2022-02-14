
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct axs10x_pll_clk {int dev; int lock; struct axs10x_pll_cfg* pll_cfg; } ;
struct axs10x_pll_cfg {unsigned long rate; int odiv; int fbdiv; int idiv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct axs10x_pll_clk*,int ,int ) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 struct axs10x_pll_clk* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_8, unsigned long VAR_9,
          unsigned long VAR_10)
{
 int VAR_11;
 struct axs10x_pll_clk *VAR_12 = FUNC_4(VAR_8);
 const struct axs10x_pll_cfg *VAR_13 = VAR_12->pll_cfg;

 for (VAR_11 = 0; VAR_13[VAR_11].rate != 0; VAR_11++) {
  if (VAR_13[VAR_11].rate == VAR_9) {
   FUNC_1(VAR_12, VAR_6,
      FUNC_0(VAR_13[VAR_11].idiv, 0));
   FUNC_1(VAR_12, VAR_5,
      FUNC_0(VAR_13[VAR_11].fbdiv, 0));
   FUNC_1(VAR_12, VAR_7,
      FUNC_0(VAR_13[VAR_11].odiv, 1));





   FUNC_5(VAR_4);
   if (!(FUNC_3(VAR_12->lock) & VAR_3))
    return -VAR_1;

   if (FUNC_3(VAR_12->lock) & VAR_2)
    return -VAR_0;

   return 0;
  }
 }

 FUNC_2(VAR_12->dev, "invalid rate=%ld, parent_rate=%ld\n", VAR_9,
   VAR_10);
 return -VAR_0;
}
