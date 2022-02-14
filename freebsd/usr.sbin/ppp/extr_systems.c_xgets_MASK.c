
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, int VAR_1, FILE *VAR_2)
{
  int VAR_3, VAR_4;

  VAR_4 = 0;
  while (FUNC_0(VAR_0, VAR_1-1, VAR_2)) {
    VAR_4++;
    VAR_0[VAR_1-1] = '\0';
    VAR_3 = FUNC_1(VAR_0);
    while (VAR_3 && (VAR_0[VAR_3-1] == '\n' || VAR_0[VAR_3-1] == '\r'))
      VAR_0[--VAR_3] = '\0';
    if (VAR_3 && VAR_0[VAR_3-1] == '\\') {
      VAR_0 += VAR_3 - 1;
      VAR_1 -= VAR_3 - 1;
      if (!VAR_1)
        break;
    } else
      break;
  }
  return VAR_4;
}
