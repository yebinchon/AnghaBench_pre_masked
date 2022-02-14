
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider {int flags; int shift; int width; int table; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_divider*) ;
 long FUNC_2 (struct clk_hw*,unsigned long,unsigned long*,int ,int ,int,int) ;
 long FUNC_3 (struct clk_hw*,unsigned long,unsigned long*,int ,int ,int) ;
 struct clk_divider* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 struct clk_divider *VAR_4 = FUNC_4(VAR_1);


 if (VAR_4->flags & VAR_0) {
  u32 VAR_5;

  VAR_5 = FUNC_1(VAR_4) >> VAR_4->shift;
  VAR_5 &= FUNC_0(VAR_4->width);

  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4->table,
          VAR_4->width, VAR_4->flags,
          VAR_5);
 }

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4->table,
      VAR_4->width, VAR_4->flags);
}
