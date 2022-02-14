
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 char** FUNC_7 (char const*,char*,char**) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char**) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 char *VAR_7, *VAR_8, VAR_9[1024], VAR_10[1024];
 const char *VAR_11;

 VAR_8 = ((void*)0);
 while ((VAR_4 = FUNC_4(VAR_2, VAR_3, "T:")) != -1)
  switch(VAR_4) {
  case 'T':
   VAR_8 = VAR_0;
   break;
  case '?':
  default:
   FUNC_13();
  }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 < 1)
  FUNC_13();

 if (!VAR_8 && !(VAR_8 = FUNC_3("TERM")))
FUNC_1(2, "no terminal type specified and no TERM environmental variable.");
 if (FUNC_9(VAR_10, VAR_8) != 1)
  FUNC_0(3, "tgetent failure");
 for (VAR_5 = 0; (VAR_11 = *VAR_3) != ((void*)0); ++VAR_3) {
  switch (*VAR_11) {
  case 'c':
   if (!FUNC_8(VAR_11, "clear"))
    VAR_11 = "cl";
   break;
  case 'i':
   if (!FUNC_8(VAR_11, "init"))
    VAR_11 = "is";
   break;
  case 'l':
   if (!FUNC_8(VAR_11, "longname")) {
    FUNC_6(VAR_10);
    continue;
   }
   break;
  case 'r':
   if (!FUNC_8(VAR_11, "reset"))
    VAR_11 = "rs";
   break;
  }
  VAR_7 = VAR_9;
  if (FUNC_12(VAR_11, &VAR_7))
   VAR_3 = FUNC_7(VAR_11, VAR_9, VAR_3);
  else if ((VAR_6 = FUNC_11(VAR_11)) != -1)
   (void)FUNC_5("%d\n", VAR_6);
  else
   VAR_5 = !FUNC_10(VAR_11);
 }
 FUNC_2(VAR_5);
}
