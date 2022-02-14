
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct krait_div2_clk {int shift; int offset; scalar_t__ lpl; int width; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct krait_div2_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
          unsigned long VAR_4)
{
 struct krait_div2_clk *VAR_5 = FUNC_5(VAR_2);
 unsigned long VAR_6;
 u32 VAR_7;
 u32 VAR_8 = FUNC_0(VAR_5->width) - 1;

 if (VAR_5->lpl)
  VAR_8 = VAR_8 << (VAR_5->shift + VAR_0) | VAR_8 << VAR_5->shift;

 FUNC_3(&VAR_1, VAR_6);
 VAR_7 = FUNC_1(VAR_5->offset);
 VAR_7 &= ~VAR_8;
 FUNC_2(VAR_5->offset, VAR_7);
 FUNC_4(&VAR_1, VAR_6);

 return 0;
}
