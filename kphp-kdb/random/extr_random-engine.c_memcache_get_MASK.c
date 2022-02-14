
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (struct connection*,char const*,int ,int) ;
 int FUNC_5 (char const*,char*,int*) ;
 int VAR_2 ;
 int FUNC_6 (char const*,char*,int) ;
 int VAR_3 ;

int FUNC_7 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  int VAR_7;
  int VAR_8 = FUNC_0 (VAR_5, VAR_6);
  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;

  if (VAR_6 >= 6 && !FUNC_6 (VAR_5, "random", 6) && FUNC_5 (VAR_5 + 6, "%d", &VAR_7) == 1 && VAR_7 > 0 && VAR_7 <= VAR_0) {
    VAR_1++;
    int VAR_9 = FUNC_1 (VAR_3, VAR_7);
    FUNC_4 (VAR_4, VAR_5 - VAR_8, VAR_3, VAR_9);
    return 0;
  }

  if (VAR_6 >= 10 && !FUNC_6 (VAR_5, "hex_random", 10) && FUNC_5 (VAR_5 + 10, "%d", &VAR_7) == 1 && VAR_7 > 0 && VAR_7 <= VAR_0) {
    VAR_1++;
    int VAR_10 = FUNC_2 (VAR_3, VAR_7);
    FUNC_4 (VAR_4, VAR_5 - VAR_8, VAR_3, VAR_10);
    return 0;
  }

  if (VAR_6 >= 5 && !FUNC_6 (VAR_5, "stats", 5)) {
    int VAR_11 = FUNC_3 (VAR_4);
    FUNC_4 (VAR_4, VAR_5 - VAR_8, VAR_2, VAR_11);
    return 0;
  }

  return 0;
}
