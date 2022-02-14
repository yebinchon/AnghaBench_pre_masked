
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct con_state {int name; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 struct con_state* FUNC_3 (int ) ;

void FUNC_4(Con *VAR_0, const char *VAR_1) {
    struct con_state *VAR_2;

    if ((VAR_2 = FUNC_3(VAR_0->frame.id)) == ((void*)0)) {
        FUNC_0("window state not found\n");
        return;
    }

    FUNC_1(VAR_2->name);
    VAR_2->name = FUNC_2(VAR_1);
}
