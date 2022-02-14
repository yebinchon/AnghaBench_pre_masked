
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char const*,int,int) ;
 char* VAR_1 ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_2, const char *VAR_3, char *VAR_4, int VAR_5, int VAR_6) {
  int VAR_7 = FUNC_1 (VAR_1, VAR_0, "VALUE %s %d %d\r\n", VAR_3, VAR_6, VAR_5);
  FUNC_0 (VAR_7 <= VAR_0);
  FUNC_2 (&VAR_2->Out, VAR_1, VAR_7);
  FUNC_2 (&VAR_2->Out, VAR_4, VAR_5);
  FUNC_2 (&VAR_2->Out, "\r\n", 2);
  return 0;
}
