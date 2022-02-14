
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int history_ts; int* history; } ;
typedef TYPE_1__ user_t ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

int FUNC_1 (int VAR_1, int VAR_2, int VAR_3, int *VAR_4) {
  user_t *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_0 (VAR_1);
  if (!VAR_5 || !VAR_5->history_ts) {
    return -1;
  }

  VAR_6 = VAR_5->history_ts - VAR_2;
  if (!VAR_6) {
    return 0;
  }
  if ((unsigned) VAR_6 > VAR_0) {
    return -1;
  }
  if (!VAR_5->history) {
    return -1;
  }
  if (VAR_3 > 0 && VAR_6 > VAR_3) {
    VAR_6 = VAR_3;
  }

  int VAR_7 = VAR_6;
  while (VAR_7 --> 0) {
    int VAR_8 = ++VAR_2 & (VAR_0 - 1);
    int VAR_9 = VAR_5->history[VAR_8*2+1], VAR_10 = VAR_5->history[VAR_8*2];
    if (!VAR_9 && !VAR_10) {
      return -1;
    }
    *VAR_4++ = ((unsigned) VAR_9 >> 24);
    *VAR_4++ = VAR_10;
    *VAR_4++ = VAR_9 & 0xffffff;
  }

  return VAR_6;
}
