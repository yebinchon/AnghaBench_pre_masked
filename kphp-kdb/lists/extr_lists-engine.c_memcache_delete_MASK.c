
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,char**,int*) ;
 int FUNC_1 (struct connection*,char*,int) ;
 scalar_t__ FUNC_2 (struct connection*) ;
 int FUNC_3 (int *,char*,int) ;

int FUNC_4 (struct connection *VAR_1, const char *VAR_2, int VAR_3) {
  VAR_1->flags &= ~VAR_0;
  char *VAR_4;
  int VAR_5;

  FUNC_0 (VAR_2, VAR_3, &VAR_4, &VAR_5);

  int VAR_6 = FUNC_1 (VAR_1, VAR_4, VAR_5);

  if (VAR_6 == -2 && FUNC_2 (VAR_1)) {
    return 0;
  }

  if (VAR_6 > 0) {
    FUNC_3 (&VAR_1->Out, "DELETED\r\n", 9);
  } else {
    FUNC_3 (&VAR_1->Out, "NOT_FOUND\r\n", 11);
  }
  return 0;
}
