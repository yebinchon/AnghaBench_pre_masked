
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int constructors_num; int * constructors; } ;


 int FUNC_0 (int ) ;

void FUNC_1 (struct tl_type *VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->constructors_num; VAR_1++) {
    FUNC_0 (VAR_0->constructors[VAR_1]);
  }
}
