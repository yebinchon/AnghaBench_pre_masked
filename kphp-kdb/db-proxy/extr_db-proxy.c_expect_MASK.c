
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2 (int VAR_1) {
  if (VAR_0 != VAR_1) {
    static char VAR_2[32];
    FUNC_0 (VAR_2, "%c expected", VAR_1);
    return FUNC_1 (VAR_2);
  }
  return 0;
}
