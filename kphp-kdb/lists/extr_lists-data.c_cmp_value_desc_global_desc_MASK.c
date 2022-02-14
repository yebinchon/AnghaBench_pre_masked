
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ value_t ;
struct heap_entry {scalar_t__ value; int global_id; } ;
typedef int global_id_t ;



int FUNC_0 (struct heap_entry *VAR_0, value_t VAR_1, global_id_t VAR_2) {
  if (VAR_0->value > VAR_1) {
    return -1;
  } else if (VAR_0->value < VAR_1) {
    return 1;
  } else {
    return VAR_2 - VAR_0->global_id;
  }
}
