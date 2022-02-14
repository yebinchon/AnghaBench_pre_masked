
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct connection*,char const*,int,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (char const*,char*,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  int VAR_7, VAR_8;
  if (FUNC_3 (VAR_5+14, "%d#%d", &VAR_7, &VAR_8) >= 2) {
    int VAR_9 = FUNC_1 (VAR_7, VAR_8);
    if (VAR_3 > 1) {
      FUNC_0 (VAR_2, "prepare_recent_friends(%d,%d) = %d\n", VAR_7, VAR_8, VAR_9);
    }
    if (VAR_9 >= 0) {
      FUNC_2 (VAR_4, VAR_5, VAR_6, VAR_9, 0, VAR_0, VAR_1 - VAR_0);
      return;
    }
  }
  return;
}
