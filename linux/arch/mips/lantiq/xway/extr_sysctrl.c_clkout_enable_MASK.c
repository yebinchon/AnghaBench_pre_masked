
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__* rates; scalar_t__ rate; int module; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_1->rates[VAR_2] == VAR_1->rate) {
   int VAR_3 = 14 - (2 * VAR_1->module);
   int VAR_4 = 7 - VAR_1->module;
   unsigned int VAR_5 = FUNC_0(VAR_0);

   VAR_5 &= ~(3 << VAR_3);
   VAR_5 |= VAR_2 << VAR_3;
   VAR_5 |= VAR_4;
   FUNC_1(VAR_5, VAR_0);
   return 0;
  }
 }
 return -1;
}
