
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int) ;

int
FUNC_12(int VAR_7, char *VAR_8[])
{
 const char *VAR_9;
 wint_t VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_8(VAR_0, "");


 while (VAR_7 > 1 && VAR_8[1][0] == '-' &&
     FUNC_6((unsigned char)VAR_8[1][1])) {
  FUNC_4(&VAR_8[1][1]);
  VAR_7--; VAR_8++;
 }

 while ((VAR_11 = FUNC_3 (VAR_7, VAR_8, "t:")) != -1) {
  switch (VAR_11) {
  case 't':
   FUNC_4(VAR_3);
   break;
  case '?':
  default:
   FUNC_9();

  }
 }
 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 VAR_14 = 0;
 do {
  if (VAR_7 > 0) {
   if (FUNC_2(VAR_8[0], "r", VAR_5) == ((void*)0)) {
    FUNC_10("%s", VAR_8[0]);
    VAR_14 = 1;
    VAR_7--, VAR_8++;
    continue;
   }
   VAR_9 = VAR_8[0];
   VAR_7--, VAR_8++;
  } else
   VAR_9 = "stdin";
  VAR_12 = 0;
  while ((VAR_10 = FUNC_5()) != VAR_1) {
   switch (VAR_10) {
   case '\t':
    if (VAR_2 == 0) {
     do {
      FUNC_7(' ');
      VAR_12++;
     } while (VAR_12 & 07);
     continue;
    }
    if (VAR_2 == 1) {
     do {
      FUNC_7(' ');
      VAR_12++;
     } while (((VAR_12 - 1) % VAR_6[0]) != (VAR_6[0] - 1));
     continue;
    }
    for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
     if (VAR_6[VAR_13] > VAR_12)
      break;
    if (VAR_13 == VAR_2) {
     FUNC_7(' ');
     VAR_12++;
     continue;
    }
    while (VAR_12 < VAR_6[VAR_13]) {
     FUNC_7(' ');
     VAR_12++;
    }
    continue;

   case '\b':
    if (VAR_12)
     VAR_12--;
    FUNC_7('\b');
    continue;

   default:
    FUNC_7(VAR_10);
    if ((VAR_15 = FUNC_11(VAR_10)) > 0)
     VAR_12 += VAR_15;
    continue;

   case '\n':
    FUNC_7(VAR_10);
    VAR_12 = 0;
    continue;
   }
  }
  if (FUNC_1(VAR_5)) {
   FUNC_10("%s", VAR_9);
   VAR_14 = 1;
  }
 } while (VAR_7 > 0);
 FUNC_0(VAR_14);
}
