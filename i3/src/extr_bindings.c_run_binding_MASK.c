
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* pattern; } ;
struct TYPE_15__ {TYPE_1__ font; } ;
struct TYPE_14__ {int command; } ;
struct TYPE_13__ {scalar_t__ parse_error; scalar_t__ needs_tree_render; } ;
typedef int Con ;
typedef TYPE_2__ CommandResult ;
typedef TYPE_3__ Binding ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (char*,int *,int *) ;
 int FUNC_5 (char**,char*,int ,...) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *,char**) ;
 int FUNC_8 () ;

CommandResult *FUNC_9(Binding *VAR_3, Con *VAR_4) {
    char *VAR_5;




    if (VAR_4 == ((void*)0))
        VAR_5 = FUNC_6(VAR_3->command);
    else
        FUNC_5(&VAR_5, "[con_id=\"%p\"] %s", *VAR_4, VAR_3->command);

    Binding *VAR_6 = FUNC_0(VAR_3);
    CommandResult *VAR_7 = FUNC_4(VAR_5, ((void*)0), ((void*)0));
    FUNC_2(VAR_5);

    if (VAR_7->needs_tree_render)
        FUNC_8();

    if (VAR_7->parse_error) {
        char *VAR_8;
        FUNC_5(&VAR_8, "i3-sensible-pager \"%s\"\n", VAR_2);
        char *VAR_9[] = {
            ((void*)0),
            "-f",
            VAR_1.font.pattern,
            "-t",
            "error",
            "-m",
            "The configured command for this shortcut could not be run successfully.",
            "-b",
            "show errors",
            VAR_8,
            ((void*)0)};
        FUNC_7(&VAR_0, VAR_9);
        FUNC_2(VAR_8);
    }

    FUNC_3("run", VAR_6);
    FUNC_1(VAR_6);

    return VAR_7;
}
