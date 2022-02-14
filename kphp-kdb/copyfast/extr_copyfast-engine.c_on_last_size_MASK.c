
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;

void FUNC_5 (void) {
  if (VAR_2 > VAR_4) {
    FUNC_1 (VAR_6, "Expected size %ld, found %ld\n", VAR_4, VAR_2);
    return;
  }
  static char VAR_7[1024];
  int VAR_8 = VAR_1;
  FUNC_3 (VAR_7, VAR_0, VAR_8 - 7);
  VAR_7[VAR_8 - 7] = 0;

  int VAR_9 = FUNC_2 (VAR_0, VAR_7);
  if (VAR_9 < 0) {
    if (VAR_5 == VAR_3) {
      VAR_9 = FUNC_4 (VAR_7);
      if (VAR_9 < 0) {
        FUNC_1 (VAR_6, "Can not delete previous link: %m\n");
        FUNC_0 (VAR_9 == 0);
      }
      VAR_9 = FUNC_2 (VAR_0, VAR_7);
      if (VAR_9 < 0) {
        FUNC_1 (VAR_6, "Can not create link: %m\n");
        FUNC_0 (VAR_9 == 0);
      }
    } else {
      FUNC_1 (VAR_6, "Can not create link: %m\n");
      FUNC_0 (VAR_9 == 0);
    }
  }
  FUNC_0 (VAR_2 == VAR_4);
}
