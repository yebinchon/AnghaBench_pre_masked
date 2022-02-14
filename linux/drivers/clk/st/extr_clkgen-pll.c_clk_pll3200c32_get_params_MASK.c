
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_pll {unsigned long idf; unsigned long ndiv; int cp; } ;


 int VAR_0 ;
 long FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_1, unsigned long VAR_2,
     struct stm_pll *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6 = ~0;
 unsigned long VAR_7;
 long VAR_8;

 static const unsigned char VAR_9[] = {
  48, 56, 64, 72, 80, 88, 96, 104, 112, 120,
  128, 136, 144, 152, 160, 168, 176, 184, 192
 };


 if (VAR_2 < 800000000 || VAR_2 > 1600000000)
  return -VAR_0;

 VAR_1 /= 1000;
 VAR_2 /= 1000;

 for (VAR_4 = 1; VAR_4 <= 7 && VAR_6; VAR_4++) {
  VAR_5 = VAR_4 * VAR_2 / (2 * VAR_1);


  if (VAR_5 < 8)
   continue;
  if (VAR_5 > 200)
   break;

  VAR_7 = (VAR_1 * 2 * VAR_5) / VAR_4;

  VAR_8 = FUNC_0(VAR_7 - VAR_2);

  if (!VAR_8 || VAR_8 < VAR_6) {
   VAR_3->idf = VAR_4;
   VAR_3->ndiv = VAR_5;
   VAR_6 = VAR_8;
  }
 }

 if (VAR_6 == ~0)
  return -VAR_0;


 for (VAR_3->cp = 6; VAR_3->ndiv > VAR_9[VAR_3->cp-6]; (VAR_3->cp)++)
  ;

 return 0;
}
