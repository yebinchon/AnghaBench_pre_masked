
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int currId; int * rev; int to; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2 (lookup_table *VAR_0) {
  FUNC_1 (&(VAR_0->to));
  FUNC_0 (VAR_0->rev, sizeof (long long) * VAR_0->size);

  VAR_0->rev = ((void*)0);
  VAR_0->size = 0;
  VAR_0->currId = 1;
}
