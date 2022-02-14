
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char,int *) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_0, char *VAR_1)
{
  if (!VAR_1) {
    FUNC_0 (("NULL data on clean_output.\n"));
    return;
  }

  while (*VAR_1) {
    switch (*VAR_1) {
    case '\'':
      FUNC_1 (VAR_0, "&#39;");
      break;
    case '"':
      FUNC_1 (VAR_0, "&#34;");
      break;
    case '&':
      FUNC_1 (VAR_0, "&amp;");
      break;
    case '<':
      FUNC_1 (VAR_0, "&lt;");
      break;
    case '>':
      FUNC_1 (VAR_0, "&gt;");
      break;
    case ' ':
      FUNC_1 (VAR_0, "&nbsp;");
      break;
    default:
      FUNC_2 (*VAR_1, VAR_0);
      break;
    }
    VAR_1++;
  }
}
