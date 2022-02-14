
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int q_info ;
struct TYPE_4__ {long long x; scalar_t__ y; } ;
typedef TYPE_1__ hmap_pair_ll_int ;
struct TYPE_5__ {int y; } ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int*,int,int) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *,TYPE_1__) ;
 int FUNC_2 (int*,int ,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3 (int VAR_8) {
  long long VAR_9 = VAR_8;
  VAR_9 += VAR_0;
  VAR_9 *= VAR_1;
  hmap_pair_ll_int VAR_10;
  VAR_10.x = VAR_9;
  VAR_10.y = 0;
  int *VAR_11 = &(FUNC_1 (&VAR_3, VAR_10)->y);
  if (*VAR_11 == 0) {
    if (VAR_6 + 3 > VAR_7) {
      int VAR_12 = VAR_7 * 2 + 3;
      VAR_4 = FUNC_0 (VAR_4, sizeof (q_info) * (VAR_12 + VAR_2), sizeof (q_info) * (VAR_7 + VAR_2));
      VAR_5 = FUNC_0 (VAR_5, sizeof (int) * VAR_12, sizeof (int) * VAR_7);

      FUNC_2 (VAR_4 + VAR_7 + VAR_2, 0, sizeof (q_info) * (VAR_12 - VAR_7));
      FUNC_2 (VAR_5 + VAR_7, 0, sizeof (int) * (VAR_12 - VAR_7));

      VAR_7 = VAR_12;
    }

    *VAR_11 = ++VAR_6;
    VAR_5[VAR_6] = VAR_8;

  }

  return *VAR_11;
}
