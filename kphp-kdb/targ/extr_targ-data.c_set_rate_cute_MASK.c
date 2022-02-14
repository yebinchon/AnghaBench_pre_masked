
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cute; } ;
typedef TYPE_1__ user_t ;
struct lev_ratecute {scalar_t__ type; int rate; int cute; int user_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3 (struct lev_ratecute *VAR_1) {
  FUNC_0 (VAR_1->type == VAR_0);
  user_t *VAR_2 = FUNC_1 (VAR_1->user_id);
  if (VAR_2) {
    VAR_2->cute = VAR_1->cute;
    FUNC_2 (VAR_2, VAR_1->rate);
  }
}
