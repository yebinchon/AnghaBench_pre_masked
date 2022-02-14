
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {char* glob; int pathname; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct exclude*,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t*) ;
 int * FUNC_5 (char const*,char*) ;
 int VAR_1 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (char*,char) ;

void
FUNC_9(const char *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4, *VAR_5;
 struct exclude *VAR_6;
 size_t VAR_7;

 VAR_3 = FUNC_5(VAR_2, "r");
 if (VAR_3 == ((void*)0))
  FUNC_1(1, "%s", VAR_2);

 while ((VAR_4 = FUNC_4(VAR_3, &VAR_7)) != ((void*)0)) {
  if (VAR_4[VAR_7 - 1] == '\n')
   VAR_7--;
  if (VAR_7 == 0)
   continue;

  VAR_5 = FUNC_6(VAR_7 + 1);
  VAR_6 = FUNC_6(sizeof *VAR_6);
  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
   FUNC_2(1, "memory allocation error");
  VAR_6->glob = VAR_5;
  FUNC_7(VAR_5, VAR_4, VAR_7);
  VAR_5[VAR_7] = '\0';
  if (FUNC_8(VAR_5, '/'))
   VAR_6->pathname = 1;
  else
   VAR_6->pathname = 0;
  FUNC_0(&VAR_0, VAR_6, VAR_1);
 }
 FUNC_3(VAR_3);
}
