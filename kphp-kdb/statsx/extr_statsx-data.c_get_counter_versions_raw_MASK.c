
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev; int created_at; } ;


 struct counter* FUNC_0 (long long,int ) ;
 int FUNC_1 (long long,int ,int) ;

int FUNC_2 (char *VAR_0, long long VAR_1) {
  int *VAR_2 = (int *)VAR_0;
  struct counter *VAR_3 = FUNC_0 (VAR_1, 0);
  while (VAR_3 && VAR_2 < (int *)(VAR_0 + 100000) && VAR_3->prev >= 0) {
    *(VAR_2++) = VAR_3->created_at;
    VAR_3 = VAR_3->prev;
  }
  if (VAR_2 < (int *)(VAR_0 + 100000)) {
    if (FUNC_1 (VAR_1, 0, 1) == -2) {
      return -2;
    }
    VAR_2 = (int *)VAR_0;
    VAR_3 = FUNC_0 (VAR_1, 0);
    while (VAR_3 && VAR_2 < (int *)(VAR_0 + 100000) && VAR_3->prev >= 0) {
      *(VAR_2++) = VAR_3->created_at;
      VAR_3 = VAR_3->prev;
    }
  }
  return ((char *)VAR_2) - VAR_0;
}
