
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ hash_t ;
struct TYPE_3__ {int len; scalar_t__* A; } ;
typedef TYPE_1__ hash_list_t ;



int FUNC_0 (hash_t VAR_0, hash_list_t *VAR_1) {
  int VAR_2, VAR_3, VAR_4;
  if (!VAR_1) { return 0; }
  VAR_2 = -1; VAR_3 = VAR_1->len;
  while (VAR_3 - VAR_2 > 1) {
    VAR_4 = (VAR_2 + VAR_3) >> 1;
    if (VAR_1->A[VAR_4] < VAR_0) {
      VAR_2 = VAR_4;
    } else if (VAR_1->A[VAR_4] > VAR_0) {
      VAR_3 = VAR_4;
    } else {
      return VAR_4 + 1;
    }
  }
  return 0;
}
