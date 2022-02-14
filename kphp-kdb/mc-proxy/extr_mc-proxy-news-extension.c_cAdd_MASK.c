
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collection {int num; long long* A; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (struct collection *VAR_1, int VAR_2, int VAR_3) {
  long long VAR_4 = (unsigned) VAR_2 + (((long long) VAR_3) << 32);
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_1->num; VAR_5++) {
    if (VAR_1->A[VAR_5] == VAR_4) {
      return;
    }
  }
  if (VAR_1->num < VAR_0) {
    VAR_1->A[VAR_1->num++] = VAR_4;
  }
}
