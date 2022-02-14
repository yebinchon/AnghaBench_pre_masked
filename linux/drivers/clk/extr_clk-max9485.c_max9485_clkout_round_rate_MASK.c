
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max9485_rate {unsigned long out; } ;
struct clk_hw {int dummy; } ;


 struct max9485_rate* VAR_0 ;

__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long *VAR_3)
{
 const struct max9485_rate *VAR_4, *VAR_5 = ((void*)0);

 for (VAR_4 = VAR_0; VAR_4->out != 0; VAR_4++) {

  if (VAR_4->out == VAR_2)
   return VAR_2;





  if (VAR_4->out > VAR_2) {
   unsigned int VAR_6;





   if (!VAR_5)
    return VAR_4->out;





   VAR_6 = VAR_5->out + ((VAR_4->out - VAR_5->out) / 2);

   return (VAR_6 > VAR_2) ? VAR_5->out : VAR_4->out;
  }

  VAR_5 = VAR_4;
 }


 return VAR_5->out;
}
