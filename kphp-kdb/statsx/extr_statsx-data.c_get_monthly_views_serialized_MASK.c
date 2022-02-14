
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev; int created_at; scalar_t__ views; } ;


 scalar_t__ VAR_0 ;
 struct counter* FUNC_0 (long long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,long long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long long,int ,int) ;
 int FUNC_5 (char*,char*,...) ;

int FUNC_6 (char *VAR_1, long long VAR_2) {
  if (FUNC_4 (VAR_2, 0, 1) == -2) {
    return -2;
  }
  if (VAR_0) {
    return FUNC_2 (VAR_1, VAR_2);
  }
  char *VAR_3 = VAR_1;
  struct counter *VAR_4 = FUNC_0 (VAR_2, 0);
  int VAR_5 = 0;
  int VAR_6 = 0;
  while (VAR_4) {

    VAR_6 += VAR_4->views;
    if (!VAR_4->prev || FUNC_1 (VAR_4->created_at) != FUNC_1 (VAR_4->prev->created_at) || FUNC_3 (VAR_4->created_at) != FUNC_3 (VAR_4->prev->created_at)) {
      if (VAR_5) {
        VAR_3 += FUNC_5 (VAR_3, ",");
      } else {
        VAR_5 = 1;
      }
      int VAR_7 = FUNC_1 (VAR_4->created_at);
      int VAR_8 = FUNC_3 (VAR_4->created_at);

      VAR_7 ++;
      VAR_3 += FUNC_5 (VAR_3, "%d,%d,%d", VAR_6, VAR_7, VAR_8);
      VAR_6 = 0;

    }

    VAR_4 = VAR_4->prev;
  }
  return VAR_3 - VAR_1;
}
