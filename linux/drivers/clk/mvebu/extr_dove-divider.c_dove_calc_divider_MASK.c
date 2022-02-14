
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dove_clk {int* divider_table; int div_bit_size; } ;


 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct dove_clk *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3, bool VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_2);

 if (VAR_1->divider_table) {
  unsigned int VAR_7;

  for (VAR_7 = 0; VAR_1->divider_table[VAR_7]; VAR_7++)
   if (VAR_5 == VAR_1->divider_table[VAR_7]) {
    VAR_5 = VAR_7;
    break;
   }

  if (!VAR_1->divider_table[VAR_7])
   return -VAR_0;
 } else {
  VAR_6 = 1 << VAR_1->div_bit_size;

  if (VAR_4 && (VAR_5 == 0 || VAR_5 >= VAR_6))
   return -VAR_0;
  if (VAR_5 >= VAR_6)
   VAR_5 = VAR_6 - 1;
  else if (VAR_5 == 0)
   VAR_5 = 1;
 }

 return VAR_5;
}
