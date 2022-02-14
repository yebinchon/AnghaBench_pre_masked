
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; scalar_t__ last_month_unique_visitors; int created_at; struct counter* prev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 struct counter* FUNC_1 (long long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,long long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (long long,int ,int) ;
 int FUNC_6 (char*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_7 (char *VAR_4, long long VAR_5) {
  if (FUNC_5 (VAR_5, 0, 1) == -2) {
    return -2;
  }
  if (VAR_1) {
    return FUNC_3 (VAR_4, VAR_5);
  }
  char *VAR_6 = VAR_4;
  struct counter *VAR_7 = FUNC_1 (VAR_5, 0);
  int VAR_8 = 0;
  int VAR_9 = 1;
  while (VAR_7) {

    if (VAR_9 && !(VAR_7->type & VAR_0) && VAR_7->last_month_unique_visitors >= 0) {
      int VAR_10 = FUNC_2 (VAR_7->created_at);
      int VAR_11 = FUNC_4 (VAR_7->created_at);
      VAR_10 ++;
      VAR_8 = 1;
      VAR_6 += FUNC_6 (VAR_6, "%d,%d,%d", VAR_7->last_month_unique_visitors, VAR_10, VAR_11);
      VAR_9 = 0;
    }
    if (VAR_3 >= 2) {
      if (VAR_7->type & VAR_0) {
        int VAR_12 = FUNC_2 (VAR_7->created_at);
        int VAR_13 = FUNC_4 (VAR_7->created_at);
        FUNC_0 (VAR_2, "%d:%d:%d\n", VAR_12, VAR_13, VAR_7->created_at);
      }
    }
    if ((VAR_7->type & VAR_0) && VAR_7->last_month_unique_visitors >= 0) {
      if (VAR_9) {
        int VAR_14 = FUNC_2 (VAR_7->created_at);
        int VAR_15 = FUNC_4 (VAR_7->created_at);
        VAR_14 ++;
        VAR_8 = 1;
        VAR_6 += FUNC_6 (VAR_6, "%d,%d,%d", 0, VAR_14, VAR_15);
        VAR_9 = 0;
      }
      if (VAR_8) {
        VAR_6 += FUNC_6 (VAR_6, ",");
      } else {
        VAR_8 = 1;
      }
      int VAR_16 = FUNC_2 (VAR_7->created_at);
      int VAR_17 = FUNC_4 (VAR_7->created_at);

      if (!VAR_16) {
        VAR_16 = 12;
        VAR_17--;
      }
      VAR_6 += FUNC_6 (VAR_6, "%d,%d,%d", VAR_7->last_month_unique_visitors, VAR_16, VAR_17);

    }

    VAR_7 = VAR_7->prev;
  }
  return VAR_6 - VAR_4;
}
