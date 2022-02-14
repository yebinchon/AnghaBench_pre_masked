
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (const char *VAR_1, const char *VAR_2) {
  FUNC_0 (VAR_0, "packet = \"");
  while (VAR_1 != VAR_2) {
    if (*VAR_1 >= 32 && *VAR_1 < 128 && *VAR_1 != '"' && *VAR_1 != '\'' && *VAR_1 != '\\') {
      FUNC_1 (*VAR_1, VAR_0);
    } else {
      FUNC_0 (VAR_0, "\\x%02x", (int) ((unsigned char) *VAR_1));
    }
    VAR_1++;
  }
  FUNC_0 (VAR_0, "\"\n");
}
