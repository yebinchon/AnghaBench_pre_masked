
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int priority; int work; void* data; } ;
typedef TYPE_1__ event_t ;
typedef int event_handler_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2 (int VAR_2, int VAR_3, event_handler_t VAR_4, void *VAR_5) {
  event_t *VAR_6;
  FUNC_0 (VAR_2 >= 0 && VAR_2 < VAR_1);
  VAR_6 = VAR_0 + VAR_2;
  if (VAR_6->fd != VAR_2) {
    FUNC_1 (VAR_6, 0, sizeof(event_t));
    VAR_6->fd = VAR_2;
  }
  VAR_6->priority = VAR_3;
  VAR_6->data = VAR_5;
  VAR_6->work = VAR_4;
  return 0;
}
