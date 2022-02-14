
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocap {int cc_flags; int* cc_kalg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 struct cryptocap* VAR_4 ;
 int VAR_5 ;

int
FUNC_2(int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;

 FUNC_0();
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  const struct cryptocap *VAR_10 = &VAR_4[VAR_7];

  if ((VAR_10->cc_flags & VAR_1) &&
      !VAR_3) {
   continue;
  }
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (VAR_10->cc_kalg[VAR_8] & VAR_2)
    VAR_9 |= 1 << VAR_8;
 }
 FUNC_1();
 *VAR_6 = VAR_9;
 return (0);
}
