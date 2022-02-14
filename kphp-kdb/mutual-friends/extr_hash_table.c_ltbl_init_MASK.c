
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int currId; scalar_t__ size; int * rev; int hash; int to; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2 (lookup_table *VAR_0) {
  FUNC_0 (&(VAR_0->to));
  VAR_0->rev = ((void*)0);
  VAR_0->size = 0;
  VAR_0->currId = 1;
  VAR_0->hash = FUNC_1 (VAR_0->rev, VAR_0->size);
}
