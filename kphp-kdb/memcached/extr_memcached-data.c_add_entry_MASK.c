
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next_entry; int key_hash; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;

void FUNC_1 (int VAR_2) {
  int VAR_3 = FUNC_0 (VAR_0[VAR_2].key_hash);

  VAR_0[VAR_2].next_entry = VAR_1[VAR_3];
  VAR_1[VAR_3] = VAR_2;
}
