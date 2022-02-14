
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 long FUNC_0 () ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,long,int ) ;
 int FUNC_7 (int *,char*) ;
 int * VAR_4 ;
 int FUNC_8 (char*,...) ;

void
FUNC_9(char *VAR_5, char **VAR_6)
{
 FILE *VAR_7;





 if (VAR_3) {
  VAR_7 = VAR_4;
  if (*(VAR_6+1) != ((void*)0)) {
   FUNC_8("read database from stdin, use only `%s' as pattern", *VAR_6);
   *(VAR_6+1) = ((void*)0);
  }
 }
 else if ((VAR_7 = FUNC_5(VAR_5, "r")) == ((void*)0))
  FUNC_1(1, "`%s'", VAR_5);


 if (VAR_2) {
  FUNC_7(VAR_7, VAR_5);
  (void)FUNC_4(VAR_7);
  return;
 }


 while(*VAR_6 != ((void*)0)) {



  if (!VAR_3 &&
      FUNC_6(VAR_7, (long)0, VAR_0) == -1)
   FUNC_1(1, "fseek to begin of ``%s''\n", VAR_5);

  if (VAR_1)
   FUNC_3(VAR_7, *VAR_6, VAR_5);
  else
   FUNC_2(VAR_7, *VAR_6, VAR_5);



  VAR_6++;
 }
 (void)FUNC_4(VAR_7);
}
