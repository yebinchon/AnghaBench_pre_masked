
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int au_event_t ;
struct TYPE_3__ {int aoe_flags; int aoe_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;

au_event_t
FUNC_1(int VAR_7, int VAR_8)
{
 int VAR_9;




 VAR_7 = VAR_7 & (VAR_2 | VAR_1 | VAR_4 | VAR_3 | VAR_5);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  if (VAR_6[VAR_9].aoe_flags == VAR_7)
   return (VAR_6[VAR_9].aoe_event);
 }
 return (VAR_0);
}
