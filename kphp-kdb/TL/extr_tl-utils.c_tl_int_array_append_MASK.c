
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_int_array {scalar_t__ pos; scalar_t__ size; int* buff; } ;



int FUNC_0 (struct tl_int_array *VAR_0, int VAR_1) {
  if (VAR_0->pos >= VAR_0->size) {
    return -1;
  }
  VAR_0->buff[(VAR_0->pos)++] = VAR_1;
  return 0;
}
