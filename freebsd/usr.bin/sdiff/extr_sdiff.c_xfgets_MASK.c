
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char**,size_t*,int *) ;

__attribute__((used)) static char *
FUNC_4(FILE *VAR_0)
{
 size_t VAR_1;
 ssize_t VAR_2;
 char *VAR_3;

 FUNC_0(VAR_0);
 VAR_1 = 0;
 VAR_3 = ((void*)0);

 if ((VAR_2 = FUNC_3(&VAR_3, &VAR_1, VAR_0)) == -1) {
  if (FUNC_2(VAR_0))
   FUNC_1(2, "error reading file");
  return (((void*)0));
 }

 if (VAR_3[VAR_2-1] == '\n')
  VAR_3[VAR_2-1] = '\0';

 return (VAR_3);
}
