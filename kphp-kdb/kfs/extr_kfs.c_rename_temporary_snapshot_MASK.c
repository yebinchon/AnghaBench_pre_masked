
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 int VAR_1 ;

int FUNC_7 (const char *VAR_2) {
  int VAR_3 = FUNC_6 (VAR_2);
  FUNC_1 (VAR_3 >= 4 && !FUNC_5 (VAR_2 + VAR_3 - 4, ".tmp") && VAR_3 <= 256);
  static char VAR_4[256];
  FUNC_3 (VAR_4, VAR_2, VAR_3 - 4);
  VAR_4[VAR_3 - 4] = 0;
  if (VAR_1 > 1) {
    FUNC_2 (VAR_0, "renaming temporary snapshot %s to %s\n", VAR_2, VAR_4);
  }
  if (!FUNC_0 (VAR_4, 0)) {
    FUNC_2 (VAR_0, "fatal: snapshot %s already exists\n", VAR_4);
    return -1;
  }
  return FUNC_4 (VAR_2, VAR_4);
}
