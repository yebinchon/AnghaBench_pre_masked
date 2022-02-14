
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,long long,long long,int ) ;
 int FUNC_1 (char const*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*,char*,int*,int*) ;
 char* VAR_2 ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5 (struct connection *VAR_3, int VAR_4, const char *VAR_5, int VAR_6, long long VAR_7) {
  int VAR_8, VAR_9;

  if (VAR_6 >= 7 && !FUNC_1 (VAR_5, "friend", 6) && !VAR_1) {
    int VAR_10 = -1;
    if (VAR_0 != 2 && FUNC_3 (VAR_5, "friend%d_%d", &VAR_8, &VAR_9) >= 2) {
      VAR_10 = FUNC_0 (VAR_8, VAR_9, VAR_4 ? 0 : VAR_7, ~VAR_7, 0);
    }
    if (VAR_10 > 0) {
      FUNC_4 (&VAR_3->Out, VAR_2, FUNC_2(VAR_2, "%d\r\n", VAR_10));
    } else {
      FUNC_4 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
    }
    return 0;
  }

  FUNC_4 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
  return 0;
}
