
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* right; TYPE_3__* left; } ;
struct TYPE_9__ {TYPE_1__ p; } ;
struct TYPE_10__ {TYPE_2__ u; int type; } ;
typedef TYPE_3__ icpl_cell_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

__attribute__((used)) static icpl_cell_t *FUNC_1 (icpl_cell_t *VAR_1, icpl_cell_t *VAR_2) {
  if (VAR_1 == ((void*)0)) {
    return VAR_2;
  }
  icpl_cell_t *VAR_3 = FUNC_0 (sizeof (*VAR_3));
  VAR_3->type = VAR_0;
  VAR_3->u.p.left = VAR_1;
  VAR_3->u.p.right = VAR_2;
  return VAR_3;
}
