
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 long FUNC_9 (char*,char**,int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;

int
FUNC_12(int VAR_8, char *VAR_9[])
{
 long VAR_10 = VAR_0;
 int VAR_11;
 char *VAR_12;


 if (VAR_8 >= 2 && VAR_9[1][0] == '-' && (VAR_9[1][1] == '-' ||
     FUNC_6((unsigned char)VAR_9[1][1])) && FUNC_8(VAR_9[1], "--") != 0)
  if (FUNC_0(&VAR_9[1], "-n%s", VAR_9[1] + 1) < 0)
   FUNC_1(1, "asprintf");

 while ((VAR_11 = FUNC_4(VAR_8, VAR_9, "n:")) != -1) {
  switch (VAR_11) {
  case 'n':
   VAR_5 = 0;
   VAR_10 = FUNC_9(VAR_6, &VAR_12, 10);
   if (VAR_12 == VAR_6 || *VAR_12 != '\0' || VAR_5 ||
       VAR_10 < VAR_3 || VAR_10 > VAR_2)
    FUNC_2(1, "%s: invalid nice value", VAR_6);
   break;
  default:
   FUNC_10();
  }
 }
 VAR_8 -= VAR_7;
 VAR_9 += VAR_7;

 if (VAR_8 == 0)
  FUNC_10();

 VAR_5 = 0;
 VAR_10 += FUNC_5(VAR_4, 0);
 if (VAR_5)
  FUNC_11("getpriority");
 else if (FUNC_7(VAR_4, 0, (int)VAR_10))
  FUNC_11("setpriority");
 FUNC_3(*VAR_9, VAR_9);
 FUNC_1(VAR_5 == VAR_1 ? 127 : 126, "%s", *VAR_9);
}
