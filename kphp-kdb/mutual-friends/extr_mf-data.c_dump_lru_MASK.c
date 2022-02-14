
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_used; } ;
typedef TYPE_1__ user ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_3 (char *VAR_4, int VAR_5) {
  FUNC_1 (VAR_1, "%s", VAR_4);
  user *VAR_6 = VAR_0->next_used;
  int VAR_7 = 0;
  while (VAR_6 != VAR_0) {
    FUNC_1 (VAR_1, "%d ", FUNC_2 (&VAR_2, (int)(VAR_6 - VAR_3)));
    int VAR_8 = FUNC_2 (&VAR_2, (int)(VAR_6 - VAR_3));
    FUNC_0 (VAR_8 != VAR_5);
    VAR_6 = VAR_6->next_used;
    VAR_7 |= VAR_5 == -VAR_8;
  }
  if (VAR_5 < 0) {
    FUNC_0 (VAR_7);
  }
  FUNC_1 (VAR_1, "\n");
}
