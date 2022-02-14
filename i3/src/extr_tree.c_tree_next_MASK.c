
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int direction_t ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ fullscreen_mode; int floating_head; struct TYPE_16__* parent; int rect; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

void FUNC_10(Con *VAR_5, direction_t VAR_6) {
    Con *VAR_7 = FUNC_7(VAR_5, VAR_6);
    if (!VAR_7) {
        return;
    }
    if (VAR_7->type == VAR_2) {



        Con *VAR_8 = FUNC_4(VAR_7);
        if (VAR_8->fullscreen_mode == VAR_0) {
            Con *VAR_9 = FUNC_5(VAR_7);


            if (VAR_9 != VAR_7) {
                VAR_8 = VAR_9;
            }
        }

        FUNC_8(VAR_7);
        FUNC_3(VAR_8);
        FUNC_9(&(VAR_8->rect));
        return;
    } else if (VAR_7->type == VAR_1) {


        Con *VAR_10 = VAR_7->parent;
        while (FUNC_1(&(VAR_10->floating_head), VAR_3) != VAR_7) {
            Con *VAR_11 = FUNC_1(&(VAR_10->floating_head), VAR_3);
            FUNC_2(&(VAR_10->floating_head), VAR_11, VAR_4);
            FUNC_0(&(VAR_10->floating_head), VAR_11, VAR_4);
        }
    }

    FUNC_8(FUNC_6(VAR_7));
    FUNC_3(FUNC_4(VAR_7));
}
