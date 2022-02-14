
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs2000_priv {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct cs2000_priv*,int,unsigned long,unsigned long) ;
 struct cs2000_priv* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0,
      unsigned long VAR_1, unsigned long VAR_2)
{
 struct cs2000_priv *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = 0;

 return FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2);
}
