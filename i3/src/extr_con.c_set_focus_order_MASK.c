
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int focus_head; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

void FUNC_5(Con *VAR_2, Con **VAR_3) {
    int VAR_4 = 0;
    while (!FUNC_0(&(VAR_2->focus_head))) {
        Con *VAR_5 = FUNC_1(&(VAR_2->focus_head));

        FUNC_3(&(VAR_2->focus_head), VAR_5, VAR_1);
        VAR_4++;
    }

    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

        if (VAR_2->type != VAR_0 && FUNC_4(VAR_3[VAR_6])) {
            VAR_4++;
            continue;
        }

        FUNC_2(&(VAR_2->focus_head), VAR_3[VAR_6], VAR_1);
    }
}
