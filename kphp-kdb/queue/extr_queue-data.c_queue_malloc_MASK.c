
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ev_first; } ;
typedef TYPE_1__ queue ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

queue *FUNC_3 (void) {
  VAR_1++;
  if (VAR_0 == ((void*)0)) {
    VAR_2 -= FUNC_0();
    queue *VAR_3 = FUNC_1 (sizeof (queue));
    VAR_2 += FUNC_0();

    return VAR_3;
  }
  queue *VAR_4 = VAR_0;
  VAR_0 = (queue *)VAR_0->ev_first;
  FUNC_2 (VAR_4, 0, sizeof (queue));

  return VAR_4;
}
