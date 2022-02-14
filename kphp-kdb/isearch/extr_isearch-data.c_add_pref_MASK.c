
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long x; scalar_t__ y; } ;
typedef TYPE_1__ hmap_pair_ll_int ;
typedef int data ;
struct TYPE_5__ {int y; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int,int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,TYPE_1__) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

int FUNC_3 (long long VAR_5) {
  VAR_5 += VAR_0;
  hmap_pair_ll_int VAR_6;
  VAR_6.x = VAR_5;
  VAR_6.y = 0;
  int *VAR_7 = &(FUNC_1 (&VAR_1, VAR_6)->y);

  if (VAR_2 + 3 > VAR_3) {
    int VAR_8 = VAR_3 * 2 + 3;
    VAR_4 = FUNC_0 (VAR_4, sizeof (data) * VAR_8, sizeof (data) * VAR_3);
    VAR_3 = VAR_8;
  }

  if (*VAR_7 == 0) {
    *VAR_7 = ++VAR_2;
    FUNC_2 (VAR_4[VAR_2], 0, sizeof (data));
  }

  return *VAR_7;
}
