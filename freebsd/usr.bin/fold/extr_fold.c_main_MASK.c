
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;

int
FUNC_9(int VAR_7, char **VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 (void) FUNC_6(VAR_1, "");

 VAR_12 = -1;
 VAR_10 = 0;
 while ((VAR_9 = FUNC_5(VAR_7, VAR_8, "0123456789bsw:")) != -1) {
  switch (VAR_9) {
  case 'b':
   VAR_2 = 1;
   break;
  case 's':
   VAR_5 = 1;
   break;
  case 'w':
   if ((VAR_12 = FUNC_0(VAR_3)) <= 0) {
    FUNC_1(1, "illegal width value");
   }
   break;
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':



   switch (VAR_10) {
   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':


    VAR_12 = VAR_12 * 10 + (VAR_9 - '0');
    break;
   default:






    if (VAR_12 == -1)
     VAR_12 = VAR_9 - '0';
    break;
   }
   break;
  default:
   FUNC_7();
  }
  VAR_10 = VAR_9;
 }
 VAR_8 += VAR_4;
 VAR_7 -= VAR_4;

 if (VAR_12 == -1)
  VAR_12 = VAR_0;
 VAR_11 = 0;
 if (!*VAR_8)
  FUNC_3(VAR_12);
 else for (; *VAR_8; ++VAR_8)
  if (!FUNC_4(*VAR_8, "r", VAR_6)) {
   FUNC_8("%s", *VAR_8);
   VAR_11 = 1;
  } else
   FUNC_3(VAR_12);
 FUNC_2(VAR_11);
}
