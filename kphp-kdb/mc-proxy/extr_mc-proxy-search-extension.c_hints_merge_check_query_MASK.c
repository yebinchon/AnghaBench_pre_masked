
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*,int) ;
 int VAR_2 ;

int FUNC_3 (int VAR_3, const char *VAR_4, int VAR_5) {
  if (VAR_3 != VAR_0) {
    return 0;
  }

  if (VAR_2 > 2) {
    FUNC_1 (VAR_1, "hints_merge_check_query (key = %s)\n", VAR_4);
  }

  int VAR_6 = FUNC_0 (VAR_4, VAR_5);
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;

  return (VAR_5 > 12 && !FUNC_2 (VAR_4, "gather_hints", 12));
}
