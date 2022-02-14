
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct connection*,char const*,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char const*,char*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7;
  if (FUNC_4 (VAR_4, "friend%d_%d", &VAR_6, &VAR_7) >= 2) {
    int VAR_8 = FUNC_1 (VAR_6, VAR_7);
    if (VAR_2 > 1) {
      FUNC_0 (VAR_1, "get_friend(%d,%d) = %d\n", VAR_6, VAR_7, VAR_8);
    }
    if (VAR_8 >= 0) {
      FUNC_2 (VAR_3, VAR_4, VAR_0, FUNC_3(VAR_0, "%d", VAR_8));
      return;
    }
  }
  return;
}
