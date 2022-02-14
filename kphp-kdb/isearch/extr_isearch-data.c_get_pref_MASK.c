
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long x; int y; } ;
typedef TYPE_1__ hmap_pair_ll_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__) ;

int FUNC_1 (long long VAR_2) {
  VAR_2 += VAR_0;
  hmap_pair_ll_int VAR_3, *VAR_4;
  VAR_3.x = VAR_2;
  VAR_3.y = 0;
  VAR_4 = FUNC_0 (&VAR_1, VAR_3);
  if (VAR_4 == ((void*)0)) {
    return 0;
  }

  return VAR_4->y;
}
