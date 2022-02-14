
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fd; int in_queue; } ;
typedef TYPE_1__ event_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3 (event_t *VAR_4) {
  int VAR_5 = VAR_4->fd, VAR_6, VAR_7;
  event_t *VAR_8;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_1 && VAR_0 + VAR_5 == VAR_4);
  VAR_6 = VAR_4->in_queue ? FUNC_2 (VAR_4, 1) : ++VAR_3;
  FUNC_0 (VAR_6 <= VAR_1);
  while (VAR_6 > 1) {
    VAR_7 = (VAR_6 >> 1);
    VAR_8 = VAR_2[VAR_7];
    if (FUNC_1(VAR_8,VAR_4) <= 0) break;
    VAR_2[VAR_6] = VAR_8;
    VAR_8->in_queue = VAR_6;
    VAR_6 = VAR_7;
  }
  VAR_2[VAR_6] = VAR_4;
  VAR_4->in_queue = VAR_6;
  return VAR_6;
}
