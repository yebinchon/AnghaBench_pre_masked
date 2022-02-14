
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {char* decimal_point; } ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char**,char*,double) ;
 char* VAR_2 ;
 double FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (double,double,double,int,char) ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 char* FUNC_9 () ;
 struct lconv* FUNC_10 () ;
 int VAR_3 ;
 int FUNC_11 (char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (char*,double) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 void* FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

int
FUNC_16(int VAR_8, char *VAR_9[])
{
 const char *VAR_10, *VAR_11;
 struct lconv *VAR_12;
 char VAR_13, *VAR_14, *VAR_15, *VAR_16;
 double VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;

 VAR_13 = VAR_1;
 VAR_14 = ((void*)0);
 VAR_17 = 1.0;
 VAR_18 = VAR_19 = VAR_20 = 0.0;
 VAR_23 = VAR_24 = VAR_25 = 0;
 VAR_10 = "\n";
 VAR_11 = ((void*)0);


 VAR_12 = FUNC_10();
 if (VAR_12 && VAR_12->decimal_point && VAR_12->decimal_point[0] != '\0')
  VAR_2 = VAR_12->decimal_point;





 while ((VAR_5 < VAR_8) && !FUNC_11(VAR_9[VAR_5]) &&
     (VAR_23 = FUNC_8(VAR_8, VAR_9, "+f:hs:t:w", VAR_3, ((void*)0))) != -1) {

  switch (VAR_23) {
  case 'f':
   VAR_14 = VAR_4;
   VAR_25 = 0;
   break;
  case 's':
   VAR_10 = FUNC_14(VAR_4);
   break;
  case 't':
   VAR_11 = FUNC_14(VAR_4);
   break;
  case 'w':
   if (!VAR_14)
    if (VAR_25++)
     VAR_13 = VAR_0;
   break;
  case 'h':
  default:
   VAR_24++;
   break;
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;
 if (VAR_8 < 1 || VAR_8 > 3)
  VAR_24++;

 if (VAR_24) {
  FUNC_4(VAR_6,
      "usage: %s [-w] [-f format] [-s string] [-t string] [first [incr]] last\n",
      FUNC_9());
  FUNC_3(1);
 }

 VAR_18 = FUNC_1(VAR_9[VAR_8 - 1]);

 if (VAR_8 > 1)
  VAR_17 = FUNC_1(VAR_9[0]);

 if (VAR_8 > 2) {
  VAR_19 = FUNC_1(VAR_9[1]);

  if (VAR_19 == 0.0)
   FUNC_2(1, "zero %screment", (VAR_17 < VAR_18)? "in" : "de");
 }


 if (VAR_19 == 0.0)
  VAR_19 = (VAR_17 < VAR_18) ? 1.0 : -1.0;

 if (VAR_19 <= 0.0 && VAR_17 < VAR_18)
  FUNC_2(1, "needs positive increment");

 if (VAR_19 >= 0.0 && VAR_17 > VAR_18)
  FUNC_2(1, "needs negative decrement");

 if (VAR_14 != ((void*)0)) {
  if (!FUNC_15(VAR_14))
   FUNC_2(1, "invalid format string: `%s'", VAR_14);
  VAR_14 = FUNC_14(VAR_14);
  if (!FUNC_15(VAR_14))
   FUNC_2(1, "invalid format string");




 } else
  VAR_14 = FUNC_7(VAR_17, VAR_19, VAR_18, VAR_25, VAR_13);

 for (VAR_22 = 1, VAR_21 = VAR_17; VAR_19 > 0 ? VAR_21 <= VAR_18 : VAR_21 >= VAR_18;
     VAR_21 = VAR_17 + VAR_19 * VAR_22++) {
  FUNC_12(VAR_14, VAR_21);
  FUNC_5(VAR_10, VAR_7);
  VAR_20 = VAR_21;
 }
 FUNC_0(&VAR_15, VAR_14, VAR_21);
 FUNC_0(&VAR_16, VAR_14, VAR_18);
 if (FUNC_13(VAR_15, VAR_16) == 0 && VAR_21 != VAR_20) {
  FUNC_5(VAR_16, VAR_7);
  FUNC_5(VAR_10, VAR_7);
 }
 FUNC_6(VAR_15);
 FUNC_6(VAR_16);

 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11, VAR_7);

 return (0);
}
