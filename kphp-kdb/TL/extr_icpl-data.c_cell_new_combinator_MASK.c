
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int C; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ icpl_cell_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static icpl_cell_t *FUNC_2 (const char *VAR_1, int VAR_2) {
  icpl_cell_t *VAR_3 = FUNC_1 (sizeof (*VAR_3));
  VAR_3->type = VAR_0;
  VAR_3->u.C = FUNC_0 (VAR_1, VAR_2, 1);
  return VAR_3;
}
