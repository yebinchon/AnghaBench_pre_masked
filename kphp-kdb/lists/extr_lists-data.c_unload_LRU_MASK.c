
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t next; } ;


 size_t VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (size_t) ;

int FUNC_1 () {
  if (VAR_1[VAR_0]->next == VAR_0) {
    return 0;
  }
  FUNC_0 (VAR_1[VAR_0]->next);
  return 1;
}
