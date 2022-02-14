
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct number {int number; } ;
typedef int FILE ;
typedef int BIGNUM ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *) ;

void
FUNC_8(FILE *VAR_0, const struct number *VAR_1)
{
 BIGNUM *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_0(VAR_1->number);
 FUNC_6(VAR_2);

 if (FUNC_3(VAR_2))
  FUNC_5(VAR_2, 0);

 VAR_5 = FUNC_4(VAR_2) * 8;
 while (VAR_5 > 0) {
  VAR_3 = 0;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   VAR_3 |= FUNC_2(VAR_2, VAR_5-VAR_4-1) << (7 - VAR_4);
  FUNC_7(VAR_3, VAR_0);
  VAR_5 -= 8;
 }
 FUNC_1(VAR_2);
}
