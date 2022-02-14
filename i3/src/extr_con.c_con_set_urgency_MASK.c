
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {int urgent; TYPE_1__* window; int * urgency_timer; } ;
struct TYPE_11__ {TYPE_5__ urgent; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int const) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(Con *VAR_1, bool VAR_2) {
    if (VAR_2 && VAR_0 == VAR_1) {
        FUNC_0("Ignoring urgency flag for current client\n");
        return;
    }

    const bool VAR_3 = VAR_1->urgent;

    if (VAR_1->urgency_timer == ((void*)0)) {
        VAR_1->urgent = VAR_2;
    } else
        FUNC_0("Discarding urgency WM_HINT because timer is running\n");


    if (VAR_1->window) {
        if (VAR_1->urgent) {
            FUNC_4(&VAR_1->window->urgent, ((void*)0));
        } else {
            VAR_1->window->urgent.tv_sec = 0;
            VAR_1->window->urgent.tv_usec = 0;
        }
    }

    FUNC_3(VAR_1);

    Con *VAR_4;


    if ((VAR_4 = FUNC_2(VAR_1)) != ((void*)0))
        FUNC_6(VAR_4);

    if (VAR_1->urgent != VAR_3) {
        FUNC_1("Urgency flag changed to %d\n", VAR_1->urgent);
        FUNC_5("urgent", VAR_1);
    }
}
