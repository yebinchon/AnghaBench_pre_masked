
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct ccu_mux {int mux; int common; } ;


 unsigned long FUNC_0 (int *,int *,int,unsigned long) ;
 struct ccu_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct ccu_mux *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_2->common, &VAR_2->mux, -1,
        VAR_1);
}
