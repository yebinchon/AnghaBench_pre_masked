
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev; int created_at; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct counter* FUNC_0 (long long,int ) ;
 int FUNC_1 (long long,int ,int) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4 (long long VAR_2) {
  if (FUNC_1 (VAR_2, 0, 1) == -2) {
    return -2;
  }
  struct counter *VAR_3 = FUNC_0 (VAR_2, 0);
  if (!VAR_3) {
    FUNC_3 (VAR_0);
    return 0;
  }
  FUNC_3 (VAR_1);
  int *VAR_4 = FUNC_2 (4);
  *VAR_4 = 0;
  while (VAR_3) {
    FUNC_3 (VAR_3->created_at);
    (*VAR_4) ++;
    VAR_3 = VAR_3->prev;
  }
  return 0;
}
