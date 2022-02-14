
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int currId; int * rev; int hash; int to; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

void FUNC_4 (lookup_table *VAR_0) {
  FUNC_1 (VAR_0);
  FUNC_0 (&(VAR_0->to));
  FUNC_3 (VAR_0->rev, sizeof (int) * VAR_0->size);

  VAR_0->rev = ((void*)0);
  VAR_0->size = 0;
  VAR_0->currId = 1;
  VAR_0->hash = FUNC_2 (VAR_0->rev, VAR_0->size);
}
