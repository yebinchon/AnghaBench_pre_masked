
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 unsigned int VAR_0 ;
 struct clk* FUNC_1 (int *,int ) ;
 unsigned long FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int * VAR_1 ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;

unsigned int FUNC_5(int VAR_2)
{
 struct clk *VAR_3;
 unsigned long VAR_4[5];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  VAR_3 = FUNC_1(((void*)0), VAR_1[VAR_5]);
  if (FUNC_0(VAR_3)) {
   VAR_4[VAR_5] = 0;
  } else {
   VAR_4[VAR_5] = FUNC_2(VAR_3);
   FUNC_3(VAR_3);
  }
 }
 if (VAR_2) {
  FUNC_4("RO Mode clock: %ld.%02ldMHz\n",
   VAR_4[1] / 1000000, (VAR_4[0] % 1000000) / 10000);
  FUNC_4("Run Mode clock: %ld.%02ldMHz\n",
   VAR_4[2] / 1000000, (VAR_4[1] % 1000000) / 10000);
  FUNC_4("Turbo Mode clock: %ld.%02ldMHz\n",
   VAR_4[3] / 1000000, (VAR_4[2] % 1000000) / 10000);
  FUNC_4("System bus clock: %ld.%02ldMHz\n",
   VAR_4[4] / 1000000, (VAR_4[4] % 1000000) / 10000);
 }
 return (unsigned int)VAR_4[0] / VAR_0;
}
