
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 char* VAR_0 ;
 char* FUNC_0 (int*) ;
 int FUNC_1 (char*,char*,int,char const*,int,char const*) ;
 int FUNC_2 (struct connection*,int,int ,int,int ,int ) ;
 int FUNC_3 (int *,char*,int) ;

int FUNC_4 (struct connection *VAR_1, int VAR_2) {
  if (VAR_2 == 204) {
    FUNC_2 (VAR_1, VAR_2, 0, -1, 0, 0);
    return 0;
  } else {
    static char VAR_3[1024];
    char *VAR_4 = VAR_3;
    const char *VAR_5 = FUNC_0 (&VAR_2);
    VAR_4 += FUNC_1 (VAR_4, VAR_0, VAR_2, VAR_5, VAR_2, VAR_5);
    FUNC_2 (VAR_1, VAR_2, 0, VAR_4 - VAR_3, 0, 0);
    return FUNC_3 (&VAR_1->Out, VAR_3, VAR_4 - VAR_3);
  }
}
