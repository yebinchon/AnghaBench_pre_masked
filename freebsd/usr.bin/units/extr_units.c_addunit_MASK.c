
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {int quantity; double factor; double offset; int denominator; int numerator; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 double FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*) ;
 char FUNC_7 (char) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct unittype * VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;
 char *VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;

 if (!FUNC_5(VAR_1))
  return 1;

 VAR_5 = VAR_4 = FUNC_2(VAR_1);
 for (VAR_8 = VAR_4 + 1; *VAR_8; VAR_8++)
  if (*VAR_8 == '-' &&
      (FUNC_7(*(VAR_8 - 1)) != 'e' ||
      !FUNC_4(".0123456789", *(VAR_8 + 1))))
   *VAR_8 = ' ';
 VAR_8 = FUNC_4(VAR_4, '/');
 if (VAR_8)
  *VAR_8 = 0;
 VAR_10 = 1;
 do {
  VAR_6 = FUNC_6(VAR_4, " *\t\n/");
  while (VAR_6) {
   if (FUNC_4("0123456789.", *VAR_6)) {
    double VAR_11, VAR_12;

    if (VAR_3)
     VAR_0->quantity = 1;

    VAR_9 = FUNC_4(VAR_6, '&');
    if (VAR_9) {
     *VAR_9 = 0;
     VAR_12 = FUNC_1(VAR_9+1);
    } else
     VAR_12 = 0.0;

    VAR_7 = FUNC_4(VAR_6, '|');
    if (VAR_7) {
     *VAR_7 = 0;
     VAR_11 = FUNC_1(VAR_6);
     if (!VAR_11) {
      FUNC_8();
      FUNC_3(VAR_5);
      return 1;
     }
     if (VAR_10 ^ VAR_2) {
      VAR_0->factor *= VAR_11;
      VAR_0->offset *= VAR_11;
     } else {
      VAR_0->factor /= VAR_11;
      VAR_0->offset /= VAR_11;
     }
     VAR_11 = FUNC_1(VAR_7 + 1);
     if (!VAR_11) {
      FUNC_8();
      FUNC_3(VAR_5);
      return 1;
     }
     if (VAR_10 ^ VAR_2) {
      VAR_0->factor /= VAR_11;
      VAR_0->offset /= VAR_11;
     } else {
      VAR_0->factor *= VAR_11;
      VAR_0->offset *= VAR_11;
     }
    }
    else {
     VAR_11 = FUNC_1(VAR_6);
     if (!VAR_11) {
      FUNC_8();
      FUNC_3(VAR_5);
      return 1;
     }
     if (VAR_10 ^ VAR_2) {
      VAR_0->factor *= VAR_11;
      VAR_0->offset *= VAR_11;
     } else {
      VAR_0->factor /= VAR_11;
      VAR_0->offset /= VAR_11;
     }
    }
    if (VAR_10 ^ VAR_2)
     VAR_0->offset += VAR_12;
   }
   else {
    int VAR_13 = 1;

    if (FUNC_4("23456789",
        VAR_6[FUNC_5(VAR_6) - 1])) {
     VAR_13 = VAR_6[FUNC_5(VAR_6) - 1] - '0';
     VAR_6[FUNC_5(VAR_6) - 1] = 0;
    }
    for (; VAR_13; VAR_13--) {
     if (FUNC_0(VAR_10 ^ VAR_2 ? VAR_0->numerator : VAR_0->denominator, VAR_6)) {
      FUNC_3(VAR_5);
      return 1;
     }
    }
   }
   VAR_6 = FUNC_6(((void*)0), " *\t/\n");
  }
  VAR_10--;
  if (VAR_8) {
   VAR_4 = VAR_8 + 1;
  }
  else
   VAR_10--;
 } while (VAR_10 >= 0);
 FUNC_3(VAR_5);
 return 0;
}
