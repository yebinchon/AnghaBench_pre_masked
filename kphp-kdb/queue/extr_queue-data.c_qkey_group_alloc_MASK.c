
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int r; void* k; } ;
typedef TYPE_1__ qkey_group ;
typedef int qkey ;


 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

qkey_group *FUNC_3 (int VAR_1) {
  VAR_0 -= FUNC_0();

  qkey_group *VAR_2 = FUNC_1 (sizeof (qkey_group));
  VAR_2->n = VAR_1;
  VAR_2->k = FUNC_1 (sizeof (qkey *) * VAR_1);
  VAR_2->r = FUNC_2 (sizeof (char) * VAR_1);

  VAR_0 += FUNC_0();

  return VAR_2;
}
