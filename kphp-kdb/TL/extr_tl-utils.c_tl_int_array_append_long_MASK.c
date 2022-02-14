
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_int_array {int pos; int size; int * buff; } ;



int FUNC_0 (struct tl_int_array *VAR_0, long long VAR_1) {
  if (VAR_0->pos >= VAR_0->size - 1) {
    return -1;
  }
  *((long long *) (&VAR_0->buff[VAR_0->pos])) = VAR_1;
  VAR_0->pos += 2;
  return 0;
}
