
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_trig {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;
struct TYPE_4__ {scalar_t__ scaled_div; } ;
struct TYPE_3__ {TYPE_2__ s; } ;
struct bcm_clk_div {TYPE_1__ u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ccu_data*) ;
 int FUNC_2 (struct ccu_data*) ;
 int FUNC_3 (struct ccu_data*,struct bcm_clk_gate*,struct bcm_clk_div*,struct bcm_clk_trig*) ;
 unsigned long FUNC_4 (struct ccu_data*) ;
 int FUNC_5 (struct ccu_data*,unsigned long) ;
 int FUNC_6 (struct bcm_clk_div*) ;

__attribute__((used)) static int FUNC_7(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1,
   struct bcm_clk_div *VAR_2, struct bcm_clk_trig *VAR_3,
   u64 VAR_4)
{
 unsigned long VAR_5;
 u64 VAR_6;
 int VAR_7;

 FUNC_0(FUNC_6(VAR_2));

 VAR_6 = VAR_2->u.s.scaled_div;
 if (VAR_6 == VAR_4)
  return 0;

 VAR_2->u.s.scaled_div = VAR_4;

 VAR_5 = FUNC_4(VAR_0);
 FUNC_2(VAR_0);

 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_0);
 FUNC_5(VAR_0, VAR_5);

 if (VAR_7)
  VAR_2->u.s.scaled_div = VAR_6;

 return VAR_7;

}
