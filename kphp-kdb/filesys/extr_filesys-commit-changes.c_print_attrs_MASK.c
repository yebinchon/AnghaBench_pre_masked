
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (int VAR_1) {
  if (VAR_1 >= 0) {
    char VAR_2 = '[';
    if (VAR_1 & 1) { FUNC_1 ("mode", &VAR_2); }
    if (VAR_1 & 2) { FUNC_1 ("uid", &VAR_2); }
    if (VAR_1 & 4) { FUNC_1 ("gid", &VAR_2); }
    if (VAR_1 & 8) { FUNC_1 ("size", &VAR_2); }
    if (VAR_1 & 16) { FUNC_1 ("mtime", &VAR_2); }
    if (VAR_2 == '[') {
      FUNC_0 (VAR_2, VAR_0);
    }
    FUNC_0 (']', VAR_0);
  }
  FUNC_0 ('\n', VAR_0);
}
