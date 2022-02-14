
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct connection*,char const*,int ,int ) ;
 int FUNC_3 (struct connection*,char const*,int,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char const*,char*,int*,int*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6 (struct connection *VAR_5, const char *VAR_6, int VAR_7, int VAR_8) {
  int VAR_9, VAR_10 = -1, VAR_11 = 0;
  if (FUNC_5 (VAR_6+VAR_8, "%d_%d#%d", &VAR_9, &VAR_10, &VAR_11) >= 2 ||
      FUNC_5 (VAR_6+VAR_8, "%d#%d", &VAR_9, &VAR_11) >= 1) {
    if (VAR_8 != 7) {
      VAR_11 = 0;
    }
    int VAR_12 = FUNC_1 (VAR_9, VAR_10, VAR_11);
    if (VAR_4 > 1) {
      FUNC_0 (VAR_3, "prepare_friends(%d,%d,%d) = %d\n", VAR_9, VAR_10, VAR_11, VAR_12);
    }
    if (VAR_12 >= 0) {
      if (VAR_8 == 7) {
        FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_12, 0, VAR_0, VAR_1 - VAR_0);
      } else {
        FUNC_2 (VAR_5, VAR_6, VAR_2, FUNC_4(VAR_2, "%d", VAR_12));
      }
      return;
    }
  }
  return;
}
