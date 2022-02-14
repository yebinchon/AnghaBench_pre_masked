
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;
struct ccu_mult {int mux; int common; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct clk_rate_request*,int ,struct ccu_mult*) ;
 struct ccu_mult* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1,
    struct clk_rate_request *VAR_2)
{
 struct ccu_mult *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(&VAR_3->common, &VAR_3->mux,
          VAR_2, VAR_0, VAR_3);
}
