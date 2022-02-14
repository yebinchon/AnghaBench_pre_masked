
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int codegen_scope ;


 int FUNC_0 (int *,char*) ;
 char* VAR_0 ;
 int FUNC_1 (char const*) ;
 char FUNC_2 (unsigned char) ;

__attribute__((used)) static double
FUNC_3(codegen_scope *VAR_1, const char *VAR_2, int VAR_3)
{
  const char *VAR_4 = VAR_2 + FUNC_1(VAR_2);
  double VAR_5 = 0;
  int VAR_6;

  if (*VAR_2 == '+') VAR_2++;
  while (VAR_2 < VAR_4) {
    char VAR_7 = *VAR_2;
    VAR_7 = FUNC_2((unsigned char)VAR_7);
    for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
      if (VAR_0[VAR_6] == VAR_7) {
        VAR_5 *= VAR_3;
        VAR_5 += VAR_6;
        break;
      }
    }
    if (VAR_6 == VAR_3) {
      FUNC_0(VAR_1, "malformed readint input");
    }
    VAR_2++;
  }
  return VAR_5;
}
