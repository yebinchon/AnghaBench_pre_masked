
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ php_worker ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2 (php_worker *VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  FUNC_1 (VAR_0->data);
  VAR_0->data = ((void*)0);

  FUNC_0 (VAR_0, sizeof (php_worker));
}
