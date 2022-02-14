
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs2000_priv {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct cs2000_priv*,int) ;
 int FUNC_1 (struct cs2000_priv*,int) ;
 int FUNC_2 (struct cs2000_priv*) ;
 struct cs2000_priv* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct cs2000_priv *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_2;
}
