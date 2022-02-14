
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6;

 if (FUNC_5("nfsd") < 0)
  FUNC_2(1, "nfsd not loaded - self terminating");
 VAR_5 = 0;
 VAR_6 = ((void*)0);
 while ((VAR_4 = FUNC_4(VAR_2, VAR_3, "ol:")) != -1)
  switch (VAR_4) {
  case 'o':
   VAR_5 = 1;
   break;
  case 'l':
   VAR_6 = VAR_0;
   break;
  default:
   FUNC_6();
  }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_5 == 0 && VAR_6 == ((void*)0))
  VAR_5 = 1;
 else if (VAR_5 != 0 && VAR_6 != ((void*)0))
  FUNC_2(1, "-o and -l cannot both be specified");





 if (VAR_5 != 0)
  FUNC_1();
 else
  FUNC_0(VAR_6);
 FUNC_3(0);
}
