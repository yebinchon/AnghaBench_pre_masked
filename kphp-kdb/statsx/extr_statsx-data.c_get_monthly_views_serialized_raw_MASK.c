
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev; int created_at; scalar_t__ views; } ;


 struct counter* FUNC_0 (long long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (long long,int ,int) ;

int FUNC_4 (char *VAR_0, long long VAR_1) {
  if (FUNC_3 (VAR_1, 0, 1) == -2) {
    return -2;
  }
  int *VAR_2 = (int *)VAR_0;
  struct counter *VAR_3 = FUNC_0 (VAR_1, 0);
  int VAR_4 = 0;
  while (VAR_3) {

    VAR_4 += VAR_3->views;
    if (!VAR_3->prev || FUNC_1 (VAR_3->created_at) != FUNC_1 (VAR_3->prev->created_at) || FUNC_2 (VAR_3->created_at) != FUNC_2 (VAR_3->prev->created_at)) {
      int VAR_5 = FUNC_1 (VAR_3->created_at);
      int VAR_6 = FUNC_2 (VAR_3->created_at);

      VAR_5 ++;
      *(VAR_2 ++) = VAR_6 * 100 + VAR_5;
      *(VAR_2 ++) = VAR_4;
      VAR_4 = 0;

    }

    VAR_3 = VAR_3->prev;
  }
  return ((char *)VAR_2) - VAR_0;
}
