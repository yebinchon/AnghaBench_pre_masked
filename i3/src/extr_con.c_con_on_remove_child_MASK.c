
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ylength ;
typedef int yajl_gen ;
struct TYPE_13__ {scalar_t__ type; int urgent; int name; int focus_head; TYPE_1__* parent; } ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_2__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,TYPE_2__*,int *) ;
 int FUNC_8 (char*,int ,char const*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,...) ;

__attribute__((used)) static void FUNC_12(Con *VAR_8) {
    FUNC_0("on_remove_child\n");



    if (VAR_8->type == VAR_1 ||
        VAR_8->type == VAR_2 ||
        VAR_8->type == VAR_0 ||
        (VAR_8->parent != ((void*)0) && VAR_8->parent->type == VAR_1)) {
        FUNC_0("not handling, type = %d, name = %s\n", VAR_8->type, VAR_8->name);
        return;
    }


    if (VAR_8->type == VAR_3) {
        if (FUNC_2(&(VAR_8->focus_head)) && !FUNC_10(VAR_8)) {
            FUNC_1("Closing old workspace (%p / %s), it is empty\n", VAR_8, VAR_8->name);
            yajl_gen VAR_9 = FUNC_7("empty", VAR_8, ((void*)0));
            FUNC_9(VAR_8, VAR_4, 0);

            const unsigned char *VAR_10;
            ylength VAR_11;
            FUNC_11(VAR_7, &VAR_10, &VAR_11);
            FUNC_8("workspace", VAR_5, (const char *)VAR_10);

            FUNC_11(VAR_6);
        }
        return;
    }

    FUNC_3(VAR_8);
    VAR_8->urgent = FUNC_4(VAR_8);
    FUNC_6(VAR_8);



    int VAR_12 = FUNC_5(VAR_8);
    if (VAR_12 == 0) {
        FUNC_0("Container empty, closing\n");
        FUNC_9(VAR_8, VAR_4, 0);
        return;
    }
}
