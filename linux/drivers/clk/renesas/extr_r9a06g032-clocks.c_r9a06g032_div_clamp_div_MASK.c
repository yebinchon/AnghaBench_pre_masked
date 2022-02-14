
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct r9a06g032_clk_div {scalar_t__ min; scalar_t__ max; int table_size; scalar_t__* table; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static long
FUNC_1(struct r9a06g032_clk_div *VAR_0,
   unsigned long VAR_1, unsigned long VAR_2)
{

 u32 VAR_3 = FUNC_0(VAR_2, VAR_1 + 1);
 int VAR_4;

 if (VAR_3 <= VAR_0->min)
  return VAR_0->min;
 if (VAR_3 >= VAR_0->max)
  return VAR_0->max;

 for (VAR_4 = 0; VAR_0->table_size && VAR_4 < VAR_0->table_size - 1; VAR_4++) {
  if (VAR_3 >= VAR_0->table[VAR_4] && VAR_3 <= VAR_0->table[VAR_4 + 1]) {
   unsigned long VAR_5 = VAR_1 -
    FUNC_0(VAR_2, VAR_0->table[VAR_4]);
   unsigned long VAR_6 =
    FUNC_0(VAR_2, VAR_0->table[VAR_4 + 1]) -
    VAR_1;




   VAR_3 = VAR_6 >= VAR_5 ? VAR_0->table[VAR_4] : VAR_0->table[VAR_4 + 1];
   return VAR_3;
  }
 }
 return VAR_3;
}
