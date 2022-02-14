
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_gpt {scalar_t__ lock; int reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_gpt* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_3,
  unsigned long VAR_4)
{
 struct clk_gpt *VAR_5 = FUNC_3(VAR_3);
 unsigned long VAR_6 = 0;
 unsigned int VAR_7 = 1, VAR_8;

 if (VAR_5->lock)
  FUNC_1(VAR_5->lock, VAR_6);

 VAR_8 = FUNC_0(VAR_5->reg);

 if (VAR_5->lock)
  FUNC_2(VAR_5->lock, VAR_6);

 VAR_7 += VAR_8 & VAR_0;
 VAR_7 *= 1 << (((VAR_8 >> VAR_2) & VAR_1) + 1);

 if (!VAR_7)
  return 0;

 return VAR_4 / VAR_7;
}
