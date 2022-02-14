
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int uid; } ;
typedef TYPE_1__ olist_t ;



__attribute__((used)) static inline int FUNC_0 (int *VAR_0, olist_t *VAR_1) {
  olist_t *VAR_2 = VAR_1->next;
  int *VAR_3 = VAR_0;
  while (VAR_2 != VAR_1) {
    *VAR_0++ = VAR_2->uid;
    VAR_2 = VAR_2->next;
  }
  return VAR_0 - VAR_3;
}
