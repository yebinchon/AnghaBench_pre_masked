
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct ccu_div {int mux; int common; } ;


 int FUNC_0 (int *,int *,int ) ;
 struct ccu_div* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct ccu_div *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_2->common, &VAR_2->mux, VAR_1);
}
