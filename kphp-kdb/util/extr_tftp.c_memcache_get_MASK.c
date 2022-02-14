
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (struct connection*,char const*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct connection*) ;

int FUNC_4 (struct connection *VAR_1, const char *VAR_2, int VAR_3) {
  int VAR_4 = FUNC_0 (VAR_2, VAR_3);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  if (VAR_3 >= 5 && !FUNC_1 (VAR_2, "stats", 5)) {
    int VAR_5 = FUNC_3 (VAR_1);
    return FUNC_2 (VAR_1, VAR_2 - VAR_4, VAR_0, VAR_5);
  }
  return 0;
}
