
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GJSON ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int,char*,char) ;

__attribute__((used)) static void
FUNC_2 (GJSON * VAR_1, char **VAR_2)
{
  if (VAR_0) {
    switch (**VAR_2) {
    case '\'':
      FUNC_0 (VAR_1, "&#39;");
      return;
    case '&':
      FUNC_0 (VAR_1, "&amp;");
      return;
    case '<':
      FUNC_0 (VAR_1, "&lt;");
      return;
    case '>':
      FUNC_0 (VAR_1, "&gt;");
      return;
    }
  }

  if ((uint8_t) ** VAR_2 <= 0x1f) {

    char VAR_3[8];
    FUNC_1 (VAR_3, sizeof VAR_3, "\\u%04x", **VAR_2);
    FUNC_0 (VAR_1, "%s", VAR_3);
  } else if ((uint8_t) ** VAR_2 == 0xe2 && (uint8_t) * (*VAR_2 + 1) == 0x80 &&
             (uint8_t) * (*VAR_2 + 2) == 0xa8) {

    FUNC_0 (VAR_1, "\\u2028");
    *VAR_2 += 2;
  } else if ((uint8_t) ** VAR_2 == 0xe2 && (uint8_t) * (*VAR_2 + 1) == 0x80 &&
             (uint8_t) * (*VAR_2 + 2) == 0xa9) {

    FUNC_0 (VAR_1, "\\u2029");
    *VAR_2 += 2;
  } else {
    char VAR_4[2];
    FUNC_1 (VAR_4, sizeof VAR_4, "%c", **VAR_2);
    FUNC_0 (VAR_1, "%s", VAR_4);
  }
}
