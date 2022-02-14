
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; struct TYPE_4__* k; struct TYPE_4__* r; } ;
typedef TYPE_1__ qkey_group ;
typedef int qkey ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;

void FUNC_2 (qkey_group *VAR_1) {
  VAR_0 -= FUNC_1();
  FUNC_0 (VAR_1->r, sizeof (char) * VAR_1->n);
  FUNC_0 (VAR_1->k, sizeof (qkey *) * VAR_1->n);
  FUNC_0 (VAR_1, sizeof (qkey_group));
  VAR_0 += FUNC_1();
}
