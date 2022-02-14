
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ winding; } ;
typedef TYPE_1__ portal_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3 (portal_t *VAR_3)
{
 if (VAR_3->winding) FUNC_1(VAR_3->winding);
 if (VAR_2 == 1)
 {
  VAR_0--;
  VAR_1 -= FUNC_2(VAR_3);
 }
 FUNC_0(VAR_3);
}
