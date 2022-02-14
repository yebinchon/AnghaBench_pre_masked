
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GJSON ;


 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2 (GJSON * VAR_0, char *VAR_1)
{
  while (*VAR_1) {
    switch (*VAR_1) {

    case '"':
      FUNC_1 (VAR_0, "\\\"");
      break;
    case '\\':
      FUNC_1 (VAR_0, "\\\\");
      break;
    case '\b':
      FUNC_1 (VAR_0, "\\b");
      break;
    case '\f':
      FUNC_1 (VAR_0, "\\f");
      break;
    case '\n':
      FUNC_1 (VAR_0, "\\n");
      break;
    case '\r':
      FUNC_1 (VAR_0, "\\r");
      break;
    case '\t':
      FUNC_1 (VAR_0, "\\t");
      break;
    case '/':
      FUNC_1 (VAR_0, "\\/");
      break;
    default:
      FUNC_0 (VAR_0, &VAR_1);
      break;
    }
    VAR_1++;
  }
}
