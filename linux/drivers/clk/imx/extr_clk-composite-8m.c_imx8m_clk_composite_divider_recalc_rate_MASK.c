
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_divider {unsigned int shift; int flags; int reg; int width; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,unsigned int,int *,int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 struct clk_divider* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_2,
      unsigned long VAR_3)
{
 struct clk_divider *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_2(VAR_4->reg) >> VAR_4->shift;
 VAR_6 &= FUNC_0(VAR_4->width);

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6,
      ((void*)0), VAR_4->flags,
      VAR_4->width);

 VAR_7 = FUNC_2(VAR_4->reg) >> VAR_0;
 VAR_7 &= FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_5, VAR_7, ((void*)0),
       VAR_4->flags, VAR_1);
}
