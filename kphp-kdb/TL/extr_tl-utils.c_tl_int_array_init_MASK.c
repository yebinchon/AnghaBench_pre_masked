
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_int_array {int* buff; int size; scalar_t__ pos; } ;



void FUNC_0 (struct tl_int_array *VAR_0, int *VAR_1, int VAR_2) {
  VAR_0->buff = VAR_1;
  VAR_0->size = VAR_2;
  VAR_0->pos = 0;
}
