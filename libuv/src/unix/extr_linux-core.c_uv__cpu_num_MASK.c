
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(FILE* VAR_1, unsigned int* VAR_2) {
  unsigned int VAR_3;
  char VAR_4[1024];

  if (!FUNC_0(VAR_4, sizeof(VAR_4), VAR_1))
    return VAR_0;

  VAR_3 = 0;
  while (FUNC_0(VAR_4, sizeof(VAR_4), VAR_1)) {
    if (FUNC_1(VAR_4, "cpu", 3))
      break;
    VAR_3++;
  }

  if (VAR_3 == 0)
    return VAR_0;

  *VAR_2 = VAR_3;
  return 0;
}
