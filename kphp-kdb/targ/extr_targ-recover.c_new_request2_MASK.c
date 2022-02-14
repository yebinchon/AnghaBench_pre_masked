
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int) ;

void FUNC_4 (struct connection *VAR_3) {
  static char VAR_4[256];
  int VAR_5 = FUNC_2 (VAR_4, "get ad_query%d\r\n", VAR_0);
  FUNC_3 (&VAR_3->Out, VAR_4, VAR_5);
  FUNC_0 (VAR_3);
  if (VAR_2 > 1) {
    FUNC_1 (VAR_1, "Requested query for ad %d\n", VAR_0);
  }
}
