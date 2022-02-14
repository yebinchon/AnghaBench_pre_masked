
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int new_ids_n; int new_local_ids; int new_ids; } ;
typedef TYPE_1__ data_iterator ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2 (data_iterator *VAR_0) {
  FUNC_0 (VAR_0->new_ids, sizeof (int) * VAR_0->new_ids_n);
  FUNC_0 (VAR_0->new_local_ids, sizeof (int) * VAR_0->new_ids_n);
  FUNC_1 (VAR_0, 0, sizeof (*VAR_0));
}
