
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_event; int present; } ;
typedef TYPE_1__ xcb_query_extension_reply_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(void) {
    const xcb_query_extension_reply_t *VAR_8;
    VAR_8 = FUNC_3(VAR_5, &VAR_6);
    if (!VAR_8->present) {
        FUNC_1("xkb is not present on this server\n");
        FUNC_2(VAR_0);
    }
    FUNC_0("initializing xcb-xkb\n");
    FUNC_5(VAR_5, VAR_3, VAR_4);
    FUNC_4(VAR_5,
                          VAR_2,
                          VAR_1,
                          0,
                          VAR_1,
                          0xff,
                          0xff,
                          ((void*)0));
    VAR_7 = VAR_8->first_event;
}
