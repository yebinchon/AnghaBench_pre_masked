
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ transaction_t ;
typedef TYPE_1__ tlist_t ;



__attribute__((used)) static int FUNC_0 (tlist_t *VAR_0) {
  int VAR_1 = 0;
  transaction_t *VAR_2;
  for (VAR_2 = VAR_0->next; VAR_2 != VAR_0; VAR_2 = VAR_2->next) {
    VAR_1++;
  }
  return VAR_1;
}
