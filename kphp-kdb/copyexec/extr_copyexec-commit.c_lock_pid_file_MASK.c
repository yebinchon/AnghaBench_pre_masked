
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (char*,int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_8 (const char *const VAR_7) {
  char VAR_8[VAR_4];
  FUNC_0 (FUNC_5 (VAR_8, VAR_4, "%s/%s", VAR_7, ".copyexec-commit.pid") < VAR_4);
  VAR_5 = FUNC_4 (VAR_8, VAR_1 | VAR_3 | VAR_2, 0660);
  if (VAR_5 < 0) {
    FUNC_2 ("creating %s failed. %m\n", VAR_8);
    return -1;
  }
  if (FUNC_3 (VAR_5, VAR_0) < 0) {
    FUNC_2 ("lock %s failed. %m\n", VAR_8);
    return -2;
  }
  VAR_6 = FUNC_6 (VAR_8);
  int VAR_9 = FUNC_5 (VAR_8, VAR_4, "%lld\n", (long long) FUNC_1 ());
  FUNC_0 (VAR_9 < VAR_4);
  FUNC_0 (FUNC_7 (VAR_5, VAR_8, VAR_9) == VAR_9);
  return 1;
}
