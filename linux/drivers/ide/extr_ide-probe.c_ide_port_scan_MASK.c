
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int present; int port_flags; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(ide_hwif_t *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 VAR_1->port_flags |= VAR_0;

 FUNC_4(VAR_1);

 VAR_2 = FUNC_7(VAR_1);

 VAR_1->port_flags &= ~VAR_0;

 if (VAR_2 < 0)
  return;

 VAR_1->present = 1;

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_8(VAR_1);
}
