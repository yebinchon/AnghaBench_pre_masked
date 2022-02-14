
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,char*,size_t) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_3, char **VAR_4)
{
 char *VAR_5, *VAR_6;
 size_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_7(VAR_0, "");

 if (FUNC_2() < 0 || FUNC_1() < 0)
  FUNC_3(1, "capsicum");

 VAR_8 = 0;
 VAR_6 = ((void*)0);
 VAR_7 = 0;

 while ((VAR_9 = FUNC_5(VAR_3, VAR_4, "as:")) != -1)
  switch(VAR_9) {
  case 'a':
   VAR_8 = 1;
   break;
  case 's':
   VAR_6 = VAR_1;
   break;
  case '?':
  default:
   FUNC_10();
  }
 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (VAR_3 < 1)
  FUNC_10();

 if (!*VAR_4[0]) {
  FUNC_6("\n");
  FUNC_4(0);
 }
 if ((VAR_5 = FUNC_0(VAR_4[0])) == ((void*)0))
  FUNC_3(1, "%s", VAR_4[0]);
 if ((VAR_6 == ((void*)0) && !VAR_8) && VAR_3 == 2) {
  VAR_6 = VAR_4[1];
  VAR_3--;
 }
 if (VAR_6 != ((void*)0))
  VAR_7 = FUNC_9(VAR_6);
 while (VAR_3--) {
  if ((VAR_5 = FUNC_0(*VAR_4)) == ((void*)0))
   FUNC_3(1, "%s", VAR_4[0]);
  FUNC_8(VAR_5, VAR_6, VAR_7);
  VAR_4++;
  (void)FUNC_6("%s\n", VAR_5);
 }
 FUNC_4(0);
}
