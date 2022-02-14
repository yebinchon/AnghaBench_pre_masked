
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int val; } ;
typedef TYPE_1__ restore_list ;
struct TYPE_9__ {int restore_info; } ;
typedef TYPE_2__ data ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;

int FUNC_5 (data *VAR_6, int VAR_7, int *VAR_8) {

  VAR_4 = VAR_8;
  VAR_0 = -1;
  VAR_3 = VAR_7;
  VAR_4 = VAR_8;
  FUNC_2 (&VAR_6->restore_info, VAR_5);


  if (VAR_0 > 0) {
    if (FUNC_4 (VAR_1)) {
      int VAR_9 = VAR_1->val;
      FUNC_3 (VAR_1);
      FUNC_1 (&VAR_6->restore_info, VAR_9);
    }

    if (FUNC_4 (VAR_2)) {
      FUNC_3 (VAR_2);
    } else {
      int VAR_10 = VAR_2->val;
      *(restore_list **)FUNC_0 (&VAR_6->restore_info, VAR_10) = VAR_2;
    }
  }

  return VAR_0;
}
