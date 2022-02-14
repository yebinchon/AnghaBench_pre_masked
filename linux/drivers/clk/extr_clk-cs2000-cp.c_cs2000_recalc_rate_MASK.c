
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs2000_priv {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct cs2000_priv*,int) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 struct cs2000_priv* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
     unsigned long VAR_1)
{
 struct cs2000_priv *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_4, VAR_1);
}
