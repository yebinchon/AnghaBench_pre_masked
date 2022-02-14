
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * item; } ;
typedef TYPE_1__ tree_t ;
typedef int item_t ;
typedef int hash_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *,int) ;
 TYPE_1__* FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_5 (item_t *VAR_1, hash_t VAR_2, unsigned VAR_3) {
  tree_t *VAR_4 = FUNC_4 (VAR_0, VAR_2, VAR_1);
  if (!VAR_4) {
    int VAR_5 = FUNC_2() << 1;
    if (FUNC_1 (VAR_3)) { VAR_5 |= 1; }
    VAR_0 = FUNC_3 (VAR_0, VAR_2, VAR_1, VAR_5);
  } else {
    FUNC_0 (VAR_4->item == VAR_1);
  }
}
