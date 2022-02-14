
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_used; } ;
typedef TYPE_1__ user ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1 (void) {
  user *VAR_2 = VAR_0->next_used;
  if (VAR_2 == VAR_0) {
    return -1;
  }

  VAR_1++;
  FUNC_0 (VAR_2);
  return 0;
}
