
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct ccu_common {scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long) ;
 struct ccu_common* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long VAR_3)
{
 struct ccu_common *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5 = FUNC_2(VAR_4->base + VAR_4->reg);

 if (VAR_5 & VAR_0)
  VAR_2 *= 2;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
