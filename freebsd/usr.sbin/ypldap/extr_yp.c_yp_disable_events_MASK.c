
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct yp_event {int ye_event; } ;
struct TYPE_4__ {TYPE_1__* sc_yp; } ;
struct TYPE_3__ {int yd_events; } ;


 struct yp_event* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct yp_event*,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct yp_event*) ;
 int VAR_1 ;

void
FUNC_4(void)
{
 struct yp_event *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_0->sc_yp->yd_events)) != ((void*)0)) {
  FUNC_1(&VAR_0->sc_yp->yd_events, VAR_2, VAR_1);
  FUNC_2(&VAR_2->ye_event);
  FUNC_3(VAR_2);
 }
}
