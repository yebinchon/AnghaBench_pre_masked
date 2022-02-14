
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ccu_data {int dummy; } ;
struct TYPE_4__ {int width; int shift; int offset; } ;
struct TYPE_3__ {TYPE_2__ s; int fixed; } ;
struct bcm_clk_div {TYPE_1__ u; } ;


 int FUNC_0 (struct ccu_data*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned long FUNC_2 (struct ccu_data*) ;
 int FUNC_3 (struct ccu_data*,unsigned long) ;
 scalar_t__ FUNC_4 (struct bcm_clk_div*) ;
 int FUNC_5 (struct bcm_clk_div*,int ) ;

__attribute__((used)) static u64 FUNC_6(struct ccu_data *VAR_0, struct bcm_clk_div *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 if (FUNC_4(VAR_1))
  return (u64)VAR_1->u.fixed;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1->u.s.offset);
 FUNC_3(VAR_0, VAR_2);


 VAR_4 = FUNC_1(VAR_3, VAR_1->u.s.shift, VAR_1->u.s.width);


 return FUNC_5(VAR_1, VAR_4);
}
