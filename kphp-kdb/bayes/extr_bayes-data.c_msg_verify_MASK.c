
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int random_tag; } ;
typedef TYPE_1__ message ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1 (message *VAR_0, int VAR_1) {
  if (VAR_0 == ((void*)0)) {
    return -1;
  }

  if (VAR_0->random_tag != VAR_1) {

    FUNC_0 (VAR_0);

    return -1;
  }

  return 0;
}
