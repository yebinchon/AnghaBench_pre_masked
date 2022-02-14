
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int created_at; struct counter* prev; } ;


 scalar_t__ VAR_0 ;
 struct counter* FUNC_0 (long long,int ) ;
 int FUNC_1 (char*,long long) ;
 int FUNC_2 (long long,int ,int) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4 (char *VAR_1, long long VAR_2) {
  if (VAR_0) {
    return FUNC_1 (VAR_1, VAR_2);
  }
  char *VAR_3 = VAR_1;
  struct counter *VAR_4 = FUNC_0 (VAR_2, 0);
  while (VAR_4 && VAR_3 < VAR_1 + 100000 && VAR_4->prev >= 0) {
    if (VAR_3 > VAR_1) { *VAR_3++ = ','; }
    VAR_3 += FUNC_3 (VAR_3, "%d", VAR_4->created_at);
    VAR_4 = VAR_4->prev;
  }
  if (VAR_3 < VAR_1 + 100000) {
    if (FUNC_2 (VAR_2, 0, 1) == -2) {
      return -2;
    }
    VAR_3 = VAR_1;
    VAR_4 = FUNC_0 (VAR_2, 0);
    while (VAR_4 && VAR_3 < VAR_1 + 100000 && VAR_4->prev >= 0) {
      if (VAR_3 > VAR_1) { *VAR_3++ = ','; }
      VAR_3 += FUNC_3 (VAR_3, "%d", VAR_4->created_at);
      VAR_4 = VAR_4->prev;
    }
  }
  return VAR_3 - VAR_1;
}
