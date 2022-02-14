
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; struct TYPE_4__* block; } ;
typedef TYPE_1__ rh_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(rh_info_t * VAR_2)
{
 if ((VAR_2->flags & VAR_0) == 0)
  FUNC_0(VAR_2->block);

 if ((VAR_2->flags & VAR_1) == 0)
  FUNC_0(VAR_2);
}
