
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;


 int * FUNC_0 (int) ;
 long FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*,long,int) ;

int FUNC_3 (int VAR_0, const char *VAR_1, long VAR_2, int VAR_3) {
  if (VAR_3 < 100 || VAR_3 >= 200 || !VAR_1) {
    return -1;
  }
  if (VAR_2 < 0) {
    VAR_2 = FUNC_1 (VAR_1);
  }
  if (VAR_2 & (-1 << 16)) {
    return -1;
  }
  user_t *VAR_4 = FUNC_0 (VAR_0);
  if (!VAR_4) {
    return -1;
  }
  FUNC_2 (VAR_4, VAR_1, VAR_2, VAR_3);
  return 1;
}
