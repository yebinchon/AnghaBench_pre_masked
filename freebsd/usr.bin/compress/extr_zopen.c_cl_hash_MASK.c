
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_zstate {int dummy; } ;
typedef int count_int ;


 int* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct s_zstate *VAR_1, count_int VAR_2)
{
 count_int *VAR_3;
 long VAR_4, VAR_5;

 VAR_5 = -1;
 VAR_3 = VAR_0 + VAR_2;
 VAR_4 = VAR_2 - 16;
 do {
  *(VAR_3 - 16) = VAR_5;
  *(VAR_3 - 15) = VAR_5;
  *(VAR_3 - 14) = VAR_5;
  *(VAR_3 - 13) = VAR_5;
  *(VAR_3 - 12) = VAR_5;
  *(VAR_3 - 11) = VAR_5;
  *(VAR_3 - 10) = VAR_5;
  *(VAR_3 - 9) = VAR_5;
  *(VAR_3 - 8) = VAR_5;
  *(VAR_3 - 7) = VAR_5;
  *(VAR_3 - 6) = VAR_5;
  *(VAR_3 - 5) = VAR_5;
  *(VAR_3 - 4) = VAR_5;
  *(VAR_3 - 3) = VAR_5;
  *(VAR_3 - 2) = VAR_5;
  *(VAR_3 - 1) = VAR_5;
  VAR_3 -= 16;
 } while ((VAR_4 -= 16) >= 0);
 for (VAR_4 += 16; VAR_4 > 0; VAR_4--)
  *--VAR_3 = VAR_5;
}
