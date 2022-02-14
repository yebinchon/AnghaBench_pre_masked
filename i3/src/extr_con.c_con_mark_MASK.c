
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char const* name; } ;
typedef TYPE_1__ mark_t ;
typedef scalar_t__ mark_mode_t ;
struct TYPE_10__ {int mark_changed; int marks_head; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (char*,TYPE_2__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_7 (int,int) ;
 char const* FUNC_8 (char const*) ;

void FUNC_9(Con *VAR_2, const char *VAR_3, mark_mode_t VAR_4) {
    FUNC_4(VAR_2 != ((void*)0));
    FUNC_0("Setting mark \"%s\" on con = %p.\n", VAR_3, VAR_2);

    FUNC_5(((void*)0), VAR_3);
    if (VAR_4 == VAR_0) {
        FUNC_0("Removing all existing marks on con = %p.\n", VAR_2);

        mark_t *VAR_5;
        while (!FUNC_1(&(VAR_2->marks_head))) {
            VAR_5 = FUNC_2(&(VAR_2->marks_head));
            FUNC_5(VAR_2, VAR_5->name);
        }
    }

    mark_t *VAR_6 = FUNC_7(1, sizeof(mark_t));
    VAR_6->name = FUNC_8(VAR_3);
    FUNC_3(&(VAR_2->marks_head), VAR_6, VAR_1);
    FUNC_6("mark", VAR_2);

    VAR_2->mark_changed = 1;
}
