
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_multiplier {int flags; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct clk_multiplier *VAR_1, u32 VAR_2)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_2, VAR_1->reg);
 else
  FUNC_1(VAR_2, VAR_1->reg);
}
