
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;
typedef int uint8_t ;
struct TYPE_9__ {int * name; } ;
struct TYPE_8__ {TYPE_2__* window; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(void *VAR_1, xcb_connection_t *VAR_2, uint8_t VAR_3,
                                     xcb_window_t VAR_4, xcb_atom_t VAR_5, xcb_get_property_reply_t *VAR_6) {
    Con *VAR_7;
    if ((VAR_7 = FUNC_1(VAR_4)) == ((void*)0) || VAR_7->window == ((void*)0))
        return 0;

    char *VAR_8 = (VAR_7->window->name != ((void*)0) ? FUNC_5(FUNC_2(VAR_7->window->name)) : ((void*)0));

    FUNC_7(VAR_7->window, VAR_6);

    VAR_7 = FUNC_4(VAR_7);

    FUNC_8(VAR_0);

    if (FUNC_6(VAR_7->window, VAR_8))
        FUNC_3("title", VAR_7);

    FUNC_0(VAR_8);

    return 1;
}
