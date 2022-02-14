
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {struct name* n_blink; struct name* n_flink; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 struct name* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

struct name *
FUNC_6(char *VAR_0, int VAR_1)
{
 char *VAR_2, *VAR_3;
 struct name *VAR_4, *VAR_5, *VAR_6;

 if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
  return (((void*)0));
 if ((VAR_3 = FUNC_2(FUNC_4(VAR_0) + 1)) == ((void*)0))
  FUNC_0(1, "Out of memory");
 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_2 = VAR_0;
 while ((VAR_2 = FUNC_5(VAR_2, VAR_3)) != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_3, VAR_1);
  if (VAR_4 == ((void*)0))
   VAR_4 = VAR_6;
  else
   VAR_5->n_flink = VAR_6;
  VAR_6->n_blink = VAR_5;
  VAR_5 = VAR_6;
 }
 (void)FUNC_1(VAR_3);
 return (VAR_4);
}
