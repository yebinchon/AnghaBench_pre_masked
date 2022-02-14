
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int val; } ;
typedef TYPE_1__ restore_list ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

restore_list *FUNC_2 (restore_list *VAR_0, restore_list *VAR_1, int VAR_2) {
  restore_list *VAR_3 = FUNC_0 (sizeof (restore_list));

  FUNC_1 (VAR_3, VAR_1);
  FUNC_1 (VAR_0, VAR_3);

  VAR_3->val = VAR_2;

  return VAR_3;
}
