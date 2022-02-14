
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,char const*) ;

int FUNC_3 (const char *VAR_2, int VAR_3) {
  FUNC_0 (VAR_2);
  if (VAR_1) {
    return 0;
  }
  FUNC_2 (2, "Error %s\n", VAR_2);
  VAR_1 = FUNC_1 (VAR_2);
  VAR_0 = VAR_3;
  return 0;
}
