
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* left; } ;
struct TYPE_6__ {TYPE_1__ p; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ icpl_cell_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0 (icpl_cell_t *VAR_1) {
  if (VAR_1->type != VAR_0) {
    return 0;
  }
  return 1 + FUNC_0 (VAR_1->u.p.left);
}
