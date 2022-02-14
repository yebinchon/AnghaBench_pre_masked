
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_rate_request {int rate; int min_rate; int max_rate; } ;
struct clk_hw {int dummy; } ;
struct ccu_common {scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*,struct clk_rate_request*) ;
 struct ccu_common* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1,
         struct clk_rate_request *VAR_2)
{
 struct ccu_common *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_2(VAR_3->base + VAR_3->reg);
 int VAR_5;


 if (VAR_4 & VAR_0) {
  VAR_2->rate *= 2;
  VAR_2->min_rate *= 2;
  VAR_2->max_rate *= 2;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2);


 if (VAR_4 & VAR_0) {
  VAR_2->rate /= 2;
  VAR_2->min_rate /= 2;
  VAR_2->max_rate /= 2;
 }

 return VAR_5;
}
