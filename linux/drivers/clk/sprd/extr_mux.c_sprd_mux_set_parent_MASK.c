
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sprd_mux {int mux; int common; } ;
struct clk_hw {int dummy; } ;


 struct sprd_mux* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct sprd_mux *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->common, &VAR_2->mux, VAR_1);
}
