
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_cdce925_output {int pdiv; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 struct clk_cdce925_output* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct clk_cdce925_output *VAR_3 = FUNC_1(VAR_0);

 VAR_3->pdiv = FUNC_0(VAR_1, VAR_2);

 return 0;
}
