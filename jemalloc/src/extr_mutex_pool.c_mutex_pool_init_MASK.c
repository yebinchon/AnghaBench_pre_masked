
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int witness_rank_t ;
struct TYPE_3__ {int * mutexes; } ;
typedef TYPE_1__ mutex_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,int ,int ) ;

bool
FUNC_1(mutex_pool_t *VAR_2, const char *VAR_3, witness_rank_t VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (FUNC_0(&VAR_2->mutexes[VAR_5], VAR_3, VAR_4,
      VAR_1)) {
   return 1;
  }
 }
 return 0;
}
