
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long max; } ;
struct clk_generated {scalar_t__ gckdiv; TYPE_1__ range; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct clk_generated* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2,
      unsigned long VAR_3,
      unsigned long VAR_4)
{
 struct clk_generated *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_5->range.max && VAR_3 > VAR_5->range.max)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 > VAR_1 + 1 || !VAR_6)
  return -VAR_0;

 VAR_5->gckdiv = VAR_6 - 1;
 return 0;
}
