
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_stack {int * x; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (struct forth_stack *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = VAR_1; VAR_3 <= VAR_2; VAR_3++) {
    FUNC_0 (&VAR_0->x[VAR_3]);
  }
}
