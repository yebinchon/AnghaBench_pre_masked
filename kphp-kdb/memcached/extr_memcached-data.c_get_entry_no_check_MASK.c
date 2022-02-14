
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long key_hash; int next_entry; } ;


 size_t FUNC_0 (long long) ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;

int FUNC_1 (long long VAR_2) {
  int VAR_3 = VAR_1[FUNC_0 (VAR_2)];

  while (VAR_3 != -1 && VAR_2 != VAR_0[VAR_3].key_hash) {
    VAR_3 = VAR_0[VAR_3].next_entry;
  }

  return VAR_3;
}
