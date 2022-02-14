
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int rev; int hash; int to; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3 (lookup_table *VAR_0, int VAR_1) {
  FUNC_0 (&(VAR_0->to), VAR_1);
  VAR_0->rev = FUNC_2 (sizeof (int) * VAR_1);
  VAR_0->size = VAR_1;
  VAR_0->hash = FUNC_1 (VAR_0->rev, VAR_0->size);
}
