
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,int) ;

void FUNC_5 (struct connection *VAR_4) {
  if (VAR_1 > VAR_0) {
    if (VAR_3 > 0) {
      FUNC_2 (VAR_2, "%ld ads complete, exiting\n", VAR_0);
    }
    FUNC_0 (0);
  }
  static char VAR_5[256];
  int VAR_6 = FUNC_3 (VAR_5, "get ad_info%d\r\n", VAR_1);
  FUNC_4 (&VAR_4->Out, VAR_5, VAR_6);
  FUNC_1 (VAR_4);
  if (VAR_3 > 1) {
    FUNC_2 (VAR_2, "Requested information about ad %ld\n", VAR_1);
  }
}
