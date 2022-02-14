
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int command_t ;
struct TYPE_3__ {scalar_t__ len; struct TYPE_3__* data; } ;
typedef TYPE_1__ command_net_write_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (command_t *VAR_0) {
  command_net_write_t *VAR_1 = (command_net_write_t *)VAR_0;

  if (VAR_1->data != ((void*)0)) {
    FUNC_0 (VAR_1->data);
    VAR_1->data = ((void*)0);
    VAR_1->len = 0;
  }
  FUNC_0 (VAR_1);
}
