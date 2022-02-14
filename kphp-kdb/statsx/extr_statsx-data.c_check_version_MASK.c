
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int created_at; struct counter* prev; } ;


 struct counter* FUNC_0 (long long,int ) ;

int FUNC_1 (long long VAR_0, int VAR_1) {
  struct counter *VAR_2 = FUNC_0 (VAR_0, 0);
  while (VAR_2) {
    if (VAR_2->created_at < VAR_1) { return 0; }
    if (VAR_2->created_at == VAR_1) { return 1; }
    VAR_2 = VAR_2->prev;
  }
  return -1;
}
