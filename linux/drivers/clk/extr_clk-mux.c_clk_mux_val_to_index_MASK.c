
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (unsigned int) ;

int FUNC_2(struct clk_hw *VAR_3, u32 *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_3);

 if (VAR_4) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   if (VAR_4[VAR_8] == VAR_6)
    return VAR_8;
  return -VAR_2;
 }

 if (VAR_6 && (VAR_5 & VAR_0))
  VAR_6 = FUNC_1(VAR_6) - 1;

 if (VAR_6 && (VAR_5 & VAR_1))
  VAR_6--;

 if (VAR_6 >= VAR_7)
  return -VAR_2;

 return VAR_6;
}
