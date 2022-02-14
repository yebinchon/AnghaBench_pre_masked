
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ transaction_id; } ;
typedef TYPE_1__ transaction_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const transaction_t *VAR_2 = *((const transaction_t **) VAR_0), *VAR_3 = *((const transaction_t **) VAR_1);
  if (VAR_2->transaction_id < VAR_3->transaction_id) {
    return -1;
  }
  if (VAR_2->transaction_id > VAR_3->transaction_id) {
    return 1;
  }
  return 0;
}
