
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_cdce925_output {int pdiv; } ;


 int FUNC_0 (struct clk_cdce925_output*) ;
 int FUNC_1 (struct clk_cdce925_output*,int ) ;
 struct clk_cdce925_output* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_cdce925_output *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, VAR_1->pdiv);
 FUNC_0(VAR_1);
 return 0;
}
