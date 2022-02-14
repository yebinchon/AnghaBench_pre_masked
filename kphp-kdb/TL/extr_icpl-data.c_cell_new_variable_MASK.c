
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char variable_name; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ icpl_cell_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static icpl_cell_t *FUNC_1 (char VAR_1) {
  icpl_cell_t *VAR_2 = FUNC_0 (sizeof (*VAR_2));
  VAR_2->type = VAR_0;
  VAR_2->u.variable_name = VAR_1;
  return VAR_2;
}
