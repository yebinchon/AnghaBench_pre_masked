
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mrb_sym ;


 char* VAR_0 ;

__attribute__((used)) static const char*
FUNC_0(mrb_sym VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4;

  for (VAR_4=0; VAR_4<30/VAR_3; VAR_4++) {
    uint32_t VAR_5;
    char VAR_6;

    VAR_5 = VAR_1>>(VAR_4*VAR_3+2) & (1<<VAR_3)-1;
    if (VAR_5 == 0) break;
    VAR_6 = VAR_0[VAR_5-1];
    VAR_2[VAR_4] = VAR_6;
  }
  VAR_2[VAR_4] = '\0';
  return VAR_2;
}
