
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_pll {unsigned long idf; unsigned long ndiv; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1, unsigned long VAR_2,
     struct stm_pll *VAR_3)
{

 unsigned long VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7 = ~0;
 unsigned long VAR_8, VAR_9;


 if (VAR_2 < 19000000 || VAR_2 > 3000000000u)
  return -VAR_0;


 for (VAR_4 = 1; VAR_4 <= 7 && VAR_7; VAR_4++) {

  VAR_5 = VAR_1 / VAR_4;
  if (VAR_5 < 4000000 || VAR_5 > 50000000)
   continue;

  VAR_6 = VAR_2 / (VAR_5 * 2);
  if (VAR_6 < 8 || VAR_6 > 246)
   continue;
  if (VAR_6 < 246)
   VAR_6++;

  for (; VAR_6 >= 8 && VAR_7; VAR_6--) {
   VAR_8 = VAR_5 * 2 * VAR_6;
   if (VAR_8 < VAR_2)
    break;

   VAR_9 = VAR_8 - VAR_2;
   if (!VAR_9 || VAR_9 < VAR_7) {
    VAR_3->idf = VAR_4;
    VAR_3->ndiv = VAR_6;
    VAR_7 = VAR_9;
   }
  }
 }

 if (VAR_7 == ~0)
  return -VAR_0;

 return 0;
}
