
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_cdce925_output {int pdiv; } ;


 struct clk_cdce925_output* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_cdce925_output *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->pdiv)
  return VAR_1 / VAR_2->pdiv;
 return 0;
}
