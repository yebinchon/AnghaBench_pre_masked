
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;

int FUNC_2 (int VAR_1, const char *VAR_2, int VAR_3) {
  if (VAR_1 != VAR_0) {
    return 0;
  }
  int VAR_4 = FUNC_0 (VAR_2, VAR_3);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  if (VAR_2[0] == '%') {
    VAR_2 ++;
    VAR_3 --;
  }
  return ((VAR_3 >= 7) && !FUNC_1 (VAR_2, "counter", 7)) || ((VAR_3 >= 5) && !FUNC_1 (VAR_2, "views", 5)) || ((VAR_3 >= 8) && !FUNC_1 (VAR_2, "visitors", 8)) || (VAR_3 >= 8 && !FUNC_1 (VAR_2, "versions", 8)) ||
         (VAR_3 >= 13 && !FUNC_1 (VAR_2, "monthly_views", 13)) || (VAR_3 >= 16 && !FUNC_1 (VAR_2, "monthly_visitors", 16));
}
