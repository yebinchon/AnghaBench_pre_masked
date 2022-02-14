
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bookmark {scalar_t__ next; scalar_t__ value; scalar_t__ y; } ;



__attribute__((used)) static inline int FUNC_0 (struct bookmark *VAR_0, struct bookmark *VAR_1) {
  if (VAR_0->next < VAR_1->next) {
    return -1;
  } else if (VAR_0->next > VAR_1->next) {
    return 1;
  } else if (VAR_0->value < VAR_1->value) {
    return -1;
  } else if (VAR_0->value > VAR_1->value) {
    return 1;
  } else if (VAR_0->y < VAR_1->y) {
    return -1;
  } else if (VAR_0->y > VAR_1->y) {
    return 1;
  } else {
    return 0;
  }
}
