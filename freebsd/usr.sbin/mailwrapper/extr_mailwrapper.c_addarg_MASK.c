
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int argc; int maxc; int ** argv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int ** FUNC_1 (int **,int) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(struct arglist *VAR_1, const char *VAR_2)
{

 if (VAR_1->argc == VAR_1->maxc) {
  VAR_1->maxc <<= 1;
  VAR_1->argv = FUNC_1(VAR_1->argv, VAR_1->maxc * sizeof(char *));
  if (VAR_1->argv == ((void*)0))
   FUNC_0(VAR_0, "realloc");
 }
 if (VAR_2 == ((void*)0))
  VAR_1->argv[VAR_1->argc++] = ((void*)0);
 else if ((VAR_1->argv[VAR_1->argc++] = FUNC_2(VAR_2)) == ((void*)0))
  FUNC_0(VAR_0, "strdup");
}
