
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, char **VAR_2) {
  if (FUNC_3(VAR_2[1], "--list") == 0) {
    FUNC_0(VAR_0);
    return 0;
  }

  if (FUNC_3(VAR_2[1], "spawn_helper") == 0) {
    FUNC_1("hello world\n");
    return 42;
  }

  return FUNC_2(VAR_2[1], 1, 1);
}
