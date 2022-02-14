
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int direction_t ;
struct TYPE_12__ {int y; int x; } ;
struct TYPE_14__ {TYPE_1__ rect; } ;
struct TYPE_13__ {int con; } ;
typedef TYPE_2__ Output ;
typedef TYPE_3__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static Con *FUNC_8(Con *VAR_3, direction_t VAR_4) {
    if (FUNC_2(VAR_3, VAR_0)) {
        FUNC_0("Cannot change workspace while in global fullscreen mode.\n");
        return ((void*)0);
    }

    Output *VAR_5 = FUNC_3(VAR_3->rect.x, VAR_3->rect.y);
    if (!VAR_5) {
        return ((void*)0);
    }
    FUNC_0("Current output is %s\n", FUNC_6(VAR_5));

    Output *VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_1);
    if (!VAR_6) {
        return ((void*)0);
    }
    FUNC_0("Next output is %s\n", FUNC_6(VAR_6));


    Con *VAR_7 = ((void*)0);
    FUNC_1(VAR_7, FUNC_5(VAR_6->con), FUNC_7(VAR_2));
    return VAR_7;
}
