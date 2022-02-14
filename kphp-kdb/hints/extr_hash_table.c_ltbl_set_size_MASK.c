
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int rev; int to; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

void FUNC_2 (lookup_table *VAR_0, int VAR_1) {
  FUNC_1 (&(VAR_0->to), VAR_1);
  VAR_0->rev = FUNC_0 (sizeof (long long) * VAR_1);
  VAR_0->size = VAR_1;
}
