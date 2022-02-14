
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; struct counter* prev; int last_month_unique_visitors; int created_at; } ;


 int VAR_0 ;
 struct counter* FUNC_0 (long long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (long long,int ,int) ;

int FUNC_4 (char *VAR_1, long long VAR_2) {
  if (FUNC_3 (VAR_2, 0, 1) == -2) {
    return -2;
  }
  int *VAR_3 = (int *)VAR_1;
  struct counter *VAR_4 = FUNC_0 (VAR_2, 0);
  int VAR_5 = 1;
  while (VAR_4) {

    if (VAR_5 && !(VAR_4->type & VAR_0) && VAR_4->last_month_unique_visitors >= 0) {
      int VAR_6 = FUNC_1 (VAR_4->created_at);
      int VAR_7 = FUNC_2 (VAR_4->created_at);
      VAR_6 ++;
      *(VAR_3 ++) = VAR_7 * 100 + VAR_6;
      *(VAR_3 ++) = VAR_4->last_month_unique_visitors;
      VAR_5 = 0;
    }
    if ((VAR_4->type & VAR_0) && VAR_4->last_month_unique_visitors >= 0) {
      if (VAR_5) {
        int VAR_8 = FUNC_1 (VAR_4->created_at);
        int VAR_9 = FUNC_2 (VAR_4->created_at);
        VAR_8 ++;
        *(VAR_3 ++) = VAR_9 * 100 + VAR_8;
        *(VAR_3 ++) = 0;
        VAR_5 = 0;
      }
      int VAR_10 = FUNC_1 (VAR_4->created_at);
      int VAR_11 = FUNC_2 (VAR_4->created_at);

      if (!VAR_10) {
        VAR_10 = 12;
        VAR_11--;
      }
      *(VAR_3 ++) = VAR_11 * 100 + VAR_10;
      *(VAR_3 ++) = VAR_4->last_month_unique_visitors;

    }

    VAR_4 = VAR_4->prev;
  }
  return ((char *)VAR_3) - VAR_1;
}
