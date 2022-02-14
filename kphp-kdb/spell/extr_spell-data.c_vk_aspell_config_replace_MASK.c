
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AspellConfig ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int,char*,int ,...) ;

__attribute__((used)) static int FUNC_3 (AspellConfig *VAR_0, const char *VAR_1, const char *VAR_2) {
  if (!FUNC_1 (VAR_0, VAR_1, VAR_2)) {
    FUNC_2 (1, "aspell_config_replace (%p, %s, %s) fail.\n", *VAR_0, VAR_1, VAR_2);
    FUNC_2 (1, "%s\n", FUNC_0 (VAR_0));
    return 0;
  }
  return 1;
}
