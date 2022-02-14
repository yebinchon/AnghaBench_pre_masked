
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int am_success; int am_failure; } ;
typedef TYPE_1__ au_mask_t ;
typedef int au_event_t ;
typedef int au_class_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(au_event_t VAR_2, au_class_t VAR_3, au_mask_t *VAR_4, int VAR_5)
{
 au_class_t VAR_6 = 0;

 if (VAR_4 == ((void*)0))
  return (-1);




 if (VAR_5 & VAR_1)
  VAR_6 |= (VAR_4->am_success & VAR_3);

 if (VAR_5 & VAR_0)
  VAR_6 |= (VAR_4->am_failure & VAR_3);

 if (VAR_6)
  return (1);
 else
  return (0);
}
