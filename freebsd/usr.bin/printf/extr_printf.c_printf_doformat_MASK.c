
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uintmax_t ;
typedef double intmax_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (char*,int ,size_t*) ;
 int FUNC_3 (char*) ;
 char** VAR_3 ;
 char FUNC_4 () ;
 int FUNC_5 (long double*,int) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (double*,double*,int) ;
 char* FUNC_8 () ;
 scalar_t__ FUNC_9 (char) ;
 char** VAR_4 ;
 char* FUNC_10 (char*,char) ;
 int VAR_5 ;
 char** VAR_6 ;
 int * FUNC_11 (char const*,char) ;
 char* FUNC_12 (char*) ;
 char FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static char *
FUNC_17(char *VAR_7, int *VAR_8)
{
 static const char VAR_9[] = "#'-+ 0";
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 char VAR_15, VAR_16;
 char VAR_17[FUNC_14(VAR_7) + 1];
 char **VAR_18;
 char *VAR_19;
 int VAR_20;

 VAR_19 = VAR_17;
 *VAR_19++ = '%';
 *VAR_19 = 0;

 VAR_7++;


 VAR_20 = FUNC_15(VAR_7, VAR_1);
 if ((VAR_20 > 0) && (VAR_7[VAR_20] == '$')) {
  int VAR_21 = FUNC_1(VAR_7);
  if (VAR_21 <= VAR_5) {
   VAR_3 = &VAR_6[VAR_21 - 1];
  } else {
   VAR_3 = &VAR_6[VAR_5];
  }
  if (VAR_3 > VAR_4)
   VAR_4 = VAR_3;
  VAR_7 += VAR_20 + 1;


  VAR_18 = VAR_3;
 } else {
  VAR_18 = ((void*)0);
 }


 while (*VAR_7 && FUNC_11(VAR_9, *VAR_7) != ((void*)0)) {
  *VAR_19++ = *VAR_7++;
  *VAR_19 = 0;
 }

 if (*VAR_7 == '*') {

  VAR_7++;
  VAR_20 = FUNC_15(VAR_7, VAR_1);
  if ((VAR_20 > 0) && (VAR_7[VAR_20] == '$')) {
   int VAR_22 = FUNC_1(VAR_7);
   if (VAR_18 == ((void*)0)) {
    FUNC_16("incomplete use of n$");
    return (((void*)0));
   }
   if (VAR_22 <= VAR_5) {
    VAR_3 = &VAR_6[VAR_22 - 1];
   } else {
    VAR_3 = &VAR_6[VAR_5];
   }
   VAR_7 += VAR_20 + 1;
  } else if (VAR_18 != ((void*)0)) {
   FUNC_16("incomplete use of n$");
   return (((void*)0));
  }

  if (FUNC_6(&VAR_10))
   return (((void*)0));
  if (VAR_3 > VAR_4)
   VAR_4 = VAR_3;
  VAR_12 = 1;

  *VAR_19++ = '*';
  *VAR_19 = 0;
 } else {
  VAR_12 = 0;


  while (FUNC_9(*VAR_7)) {
   *VAR_19++ = *VAR_7++;
   *VAR_19 = 0;
  }
 }

 if (*VAR_7 == '.') {

  VAR_7++;
  *VAR_19++ = '.';

  if (*VAR_7 == '*') {

   VAR_7++;
   VAR_20 = FUNC_15(VAR_7, VAR_1);
   if ((VAR_20 > 0) && (VAR_7[VAR_20] == '$')) {
    int VAR_23 = FUNC_1(VAR_7);
    if (VAR_18 == ((void*)0)) {
     FUNC_16("incomplete use of n$");
     return (((void*)0));
    }
    if (VAR_23 <= VAR_5) {
     VAR_3 = &VAR_6[VAR_23 - 1];
    } else {
     VAR_3 = &VAR_6[VAR_5];
    }
    VAR_7 += VAR_20 + 1;
   } else if (VAR_18 != ((void*)0)) {
    FUNC_16("incomplete use of n$");
    return (((void*)0));
   }

   if (FUNC_6(&VAR_14))
    return (((void*)0));
   if (VAR_3 > VAR_4)
    VAR_4 = VAR_3;
   VAR_11 = 1;
   *VAR_19++ = '*';
   *VAR_19 = 0;
  } else {
   VAR_11 = 0;


   while (FUNC_9(*VAR_7)) {
    *VAR_19++ = *VAR_7++;
    *VAR_19 = 0;
   }
  }
 } else
  VAR_11 = 0;
 if (!*VAR_7) {
  FUNC_16("missing format character");
  return (((void*)0));
 }
 *VAR_19++ = *VAR_7;
 *VAR_19 = 0;
 if (*VAR_7 == 'L') {
  VAR_13 = 1;
  VAR_7++;
  if (!FUNC_11("aAeEfFgG", *VAR_7)) {
   FUNC_16("bad modifier L for %%%c", *VAR_7);
   return (((void*)0));
  }
 } else {
  VAR_13 = 0;
 }


 if (VAR_18 != ((void*)0)) {
  VAR_3 = VAR_18;
 }

 VAR_15 = *VAR_7;
 VAR_16 = *++VAR_7;

 *VAR_7 = '\0';
 switch (VAR_15) {
 case 'b': {
  size_t VAR_24;
  char *VAR_25;
  int VAR_26;


  VAR_17[FUNC_14(VAR_17) - 1] = 's';
  if ((VAR_25 = FUNC_12(FUNC_8())) == ((void*)0)) {
   FUNC_16("%s", FUNC_13(VAR_0));
   return (((void*)0));
  }
  VAR_26 = FUNC_2(VAR_25, 0, &VAR_24);
  FUNC_0(VAR_17, VAR_25);


  FUNC_3(VAR_25);
  if (VAR_26)
   return (VAR_2);
  break;
 }
 case 'c': {
  char VAR_27;

  VAR_27 = FUNC_4();
  if (VAR_27 != '\0')
   FUNC_0(VAR_17, VAR_27);
  break;
 }
 case 's': {
  const char *VAR_28;

  VAR_28 = FUNC_8();
  FUNC_0(VAR_17, VAR_28);
  break;
 }
 case 'd': case 'i': case 'o': case 'u': case 'x': case 'X': {
  char *VAR_29;
  intmax_t VAR_30;
  uintmax_t VAR_31;
  int VAR_32;

  VAR_32 = (VAR_15 == 'd' || VAR_15 == 'i');
  if ((VAR_29 = FUNC_10(VAR_17, VAR_15)) == ((void*)0))
   return (((void*)0));
  if (FUNC_7(&VAR_30, &VAR_31, VAR_32))
   *VAR_8 = 1;
  if (VAR_32)
   FUNC_0(VAR_29, VAR_30);
  else
   FUNC_0(VAR_29, VAR_31);
  break;
 }
 case 'e': case 'E':
 case 'f': case 'F':
 case 'g': case 'G':
 case 'a': case 'A': {
  long double VAR_33;

  if (FUNC_5(&VAR_33, VAR_13))
   *VAR_8 = 1;
  if (VAR_13)
   FUNC_0(VAR_17, VAR_33);
  else
   FUNC_0(VAR_17, (double)VAR_33);
  break;
 }
 default:
  FUNC_16("illegal format character %c", VAR_15);
  return (((void*)0));
 }
 *VAR_7 = VAR_16;

 return (VAR_7);
}
