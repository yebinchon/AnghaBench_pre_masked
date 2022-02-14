
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event; } ;
struct pt {TYPE_1__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct pt* FUNC_1 (int *) ;

void FUNC_2(void)
{
 struct pt *VAR_2 = FUNC_1(&VAR_1);

 if (VAR_2->handle.event)
  FUNC_0(VAR_2->handle.event, VAR_0);
}
