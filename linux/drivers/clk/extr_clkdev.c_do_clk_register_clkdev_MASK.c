
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_lookup {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_lookup* FUNC_2 (struct clk_hw*,char const*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1,
 struct clk_lookup **VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);




 if (VAR_4)
  *VAR_2 = FUNC_2(VAR_1, VAR_3, "%s", VAR_4);
 else
  *VAR_2 = FUNC_2(VAR_1, VAR_3, ((void*)0));

 return *VAR_2 ? 0 : -VAR_0;
}
