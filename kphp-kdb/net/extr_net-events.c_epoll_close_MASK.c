
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; scalar_t__ in_queue; } ;
typedef TYPE_1__ event_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4 (int VAR_2) {
  event_t *VAR_3;
  FUNC_0 (VAR_2 >= 0 && VAR_2 < VAR_1);
  VAR_3 = VAR_0 + VAR_2;
  if (VAR_3->fd != VAR_2) {
    return -1;
  }
  FUNC_1 (VAR_2);
  if (VAR_3->in_queue) {
    FUNC_3 (VAR_3, 0);
  }
  FUNC_2 (VAR_3, 0, sizeof (event_t));
  VAR_3->fd = -1;
  return 0;
}
