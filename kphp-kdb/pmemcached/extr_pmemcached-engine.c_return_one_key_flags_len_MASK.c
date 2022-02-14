
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int *,char*,int) ;

int FUNC_4 (struct connection *VAR_0, const char *VAR_1, int VAR_2, char *VAR_3, int VAR_4, int VAR_5) {
  static char VAR_6[65536];
  int VAR_7 = FUNC_2 (VAR_6, "VALUE ");
  FUNC_1 (VAR_6 + VAR_7, VAR_1, VAR_2);
  VAR_7 += VAR_2;
  VAR_7 += FUNC_2 (VAR_6 + VAR_7, " %d %d\r\n", VAR_5, VAR_4);
  FUNC_0 (VAR_7 <= 65536);
  FUNC_3 (&VAR_0->Out, VAR_6, VAR_7);
  FUNC_3 (&VAR_0->Out, VAR_3, VAR_4);
  FUNC_3 (&VAR_0->Out, "\r\n", 2);
  return VAR_7;
}
