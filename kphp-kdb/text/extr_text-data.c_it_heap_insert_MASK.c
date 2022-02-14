
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterator {int x; } ;



__attribute__((used)) static inline void FUNC_0 (struct iterator **VAR_0, int VAR_1, struct iterator *VAR_2) {
  int VAR_3 = ++VAR_1, VAR_4, VAR_5 = VAR_2->x;
  while (VAR_3 > 1) {
    VAR_4 = (VAR_3 >> 1);
    if (VAR_0[VAR_4]->x >= VAR_5) {
      break;
    }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_3 = VAR_4;
  }
  VAR_0[VAR_3] = VAR_2;
}
