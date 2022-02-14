
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fd; int in_queue; } ;
typedef TYPE_1__ event_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;

int FUNC_2 (event_t *VAR_4, int VAR_5) {
  int VAR_6 = VAR_4->fd, VAR_7, VAR_8, VAR_9 = VAR_3;
  event_t *VAR_10;
  FUNC_0 (VAR_6 >= 0 && VAR_6 < VAR_1 && VAR_0 + VAR_6 == VAR_4);
  VAR_7 = VAR_4->in_queue;
  if (!VAR_7) return 0;
  FUNC_0 (VAR_7 > 0 && VAR_7 <= VAR_9);
  VAR_4->in_queue = 0;
  do {
    VAR_8 = (VAR_7 << 1);
    if (VAR_8 > VAR_9) break;
    if (VAR_8 < VAR_9 && FUNC_1(VAR_2[VAR_8+1], VAR_2[VAR_8]) < 0) VAR_8++;
    VAR_2[VAR_7] = VAR_10 = VAR_2[VAR_8];
    VAR_10->in_queue = VAR_7;
    VAR_7 = VAR_8;
  } while(1);
  if (VAR_5) {
    VAR_2[VAR_7] = 0;
    return VAR_7;
  }
  if (VAR_7 < VAR_9) {
    VAR_4 = VAR_2[VAR_9];
    VAR_2[VAR_9] = 0;
    while (VAR_7 > 1) {
      VAR_8 = (VAR_7 >> 1);
      VAR_10 = VAR_2[VAR_8];
      if (FUNC_1(VAR_10,VAR_4) <= 0) break;
      VAR_2[VAR_7] = VAR_10;
      VAR_10->in_queue = VAR_7;
      VAR_7 = VAR_8;
    }
    VAR_2[VAR_7] = VAR_4;
    VAR_4->in_queue = VAR_7;
  }
  VAR_3--;
  return VAR_9;
}
