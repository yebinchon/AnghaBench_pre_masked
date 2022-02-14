
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct yp_event {int ye_event; } ;
struct TYPE_4__ {TYPE_1__* sc_yp; } ;
struct TYPE_3__ {int yd_events; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct yp_event*,int ) ;
 struct yp_event* FUNC_1 (int,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(void)
{
 int VAR_4;
 struct yp_event *VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_5(); VAR_4++) {
  if ((VAR_5 = FUNC_1(1, sizeof(*VAR_5))) == ((void*)0))
   FUNC_4(((void*)0));
  FUNC_3(&VAR_5->ye_event, VAR_4, VAR_0, VAR_3, ((void*)0));
  FUNC_2(&VAR_5->ye_event, ((void*)0));
  FUNC_0(&VAR_1->sc_yp->yd_events, VAR_5, VAR_2);
 }
}
