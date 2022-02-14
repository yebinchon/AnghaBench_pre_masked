
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; long long v_fid; } ;
struct TYPE_5__ {int vn; struct TYPE_5__** v; TYPE_1__ tok; } ;
typedef TYPE_2__ node ;


 scalar_t__ VAR_0 ;

long long FUNC_0 (node *VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return 0;
  }
  long long VAR_2 = 0;
  if (VAR_1->tok.type == VAR_0) {
    if (VAR_1->tok.v_fid >= 0) {
      VAR_2 |= 1ll << VAR_1->tok.v_fid;
    }
  }
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1->vn; VAR_3++) {
    VAR_2 |= FUNC_0 (VAR_1->v[VAR_3]);
  }

  return VAR_2;
}
