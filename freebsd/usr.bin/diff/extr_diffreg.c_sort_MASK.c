
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {scalar_t__ value; scalar_t__ serial; } ;



__attribute__((used)) static void
FUNC_0(struct line *VAR_0, int VAR_1)
{
 struct line *VAR_2, *VAR_3, VAR_4;
 int VAR_5, VAR_6 = 0, VAR_7;

 if (VAR_1 == 0)
  return;
 for (VAR_5 = 1; VAR_5 <= VAR_1; VAR_5 *= 2)
  VAR_6 = 2 * VAR_5 - 1;
 for (VAR_6 /= 2; VAR_6 != 0; VAR_6 /= 2) {
  VAR_7 = VAR_1 - VAR_6;
  for (VAR_5 = 1; VAR_5 <= VAR_7; VAR_5++) {
   for (VAR_2 = &VAR_0[VAR_5]; VAR_2 > VAR_0; VAR_2 -= VAR_6) {
    VAR_3 = &VAR_2[VAR_6];
    if (VAR_3 < VAR_2)
     break;
    if (VAR_3->value > VAR_2[0].value ||
        (VAR_3->value == VAR_2[0].value &&
     VAR_3->serial > VAR_2[0].serial))
     break;
    VAR_4.value = VAR_2[0].value;
    VAR_2[0].value = VAR_3->value;
    VAR_3->value = VAR_4.value;
    VAR_4.serial = VAR_2[0].serial;
    VAR_2[0].serial = VAR_3->serial;
    VAR_3->serial = VAR_4.serial;
   }
  }
 }
}
