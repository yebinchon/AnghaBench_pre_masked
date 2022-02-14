
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long*,unsigned long*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, *VAR_3,
          &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_2 = *VAR_3 / VAR_4;
 VAR_2 *= VAR_5;

 return VAR_2;
}
