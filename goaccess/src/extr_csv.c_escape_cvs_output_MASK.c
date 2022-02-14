
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char,int *) ;

__attribute__((used)) static void
FUNC_2 (FILE * VAR_0, char *VAR_1)
{
  while (*VAR_1) {
    switch (*VAR_1) {
    case '"':
      FUNC_0 (VAR_0, "\"\"");
      break;
    default:
      FUNC_1 (*VAR_1, VAR_0);
      break;
    }
    VAR_1++;
  }
}
