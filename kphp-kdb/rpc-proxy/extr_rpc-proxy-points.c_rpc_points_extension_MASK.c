
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct points_extra {int points_num; TYPE_2__* points; } ;
struct TYPE_6__ {unsigned long long x; TYPE_3__* B; } ;
typedef TYPE_2__ rpc_point_t ;
struct TYPE_8__ {int tot_buckets; scalar_t__* extensions_extra; } ;
struct TYPE_7__ {TYPE_1__* methods; } ;
struct TYPE_5__ {scalar_t__ (* get_state ) (TYPE_3__*) ;} ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

int FUNC_3 (void **VAR_3, void **VAR_4) {
  char *VAR_5 = *VAR_4;
  int VAR_6 = (long)*(VAR_4 + 1);
  unsigned long long VAR_7 = FUNC_1 (VAR_5, VAR_6);

  rpc_point_t *VAR_8 = ((struct points_extra *)VAR_0->extensions_extra[VAR_2])->points;
  int VAR_9 = ((struct points_extra *)VAR_0->extensions_extra[VAR_2])->points_num;

  int VAR_10 = -1, VAR_11 = VAR_0->tot_buckets * VAR_9, VAR_12;

  while (VAR_11 - VAR_10 > 1) {
    VAR_12 = (VAR_10 + VAR_11) >> 1;
    if (VAR_7 < VAR_8[VAR_12].x) {
      VAR_11 = VAR_12;
    } else {
      VAR_10 = VAR_12;
    }
  }

  FUNC_0 (VAR_9 > 0);

  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
    if (VAR_10 < 0) {
      VAR_10 += VAR_9;
    }
    if (VAR_8[VAR_10].B->methods->get_state (VAR_8[VAR_10].B) >= 0) {
      *VAR_4 = VAR_8[VAR_10].B;
      return 0;
    }
    VAR_10--;
  }
  *VAR_4 = 0;
  return -1;
}
