
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_multiplier {int flags; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct clk_multiplier *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_0(VAR_1->reg);

 return FUNC_1(VAR_1->reg);
}
