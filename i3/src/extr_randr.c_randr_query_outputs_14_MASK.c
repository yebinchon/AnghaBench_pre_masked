
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xcb_timestamp_t ;
typedef int xcb_randr_output_t ;
struct TYPE_9__ {int config_timestamp; } ;
typedef TYPE_1__ xcb_randr_get_screen_resources_current_reply_t ;
typedef int xcb_randr_get_screen_resources_current_cookie_t ;
typedef int xcb_randr_get_output_primary_cookie_t ;
typedef int xcb_randr_get_output_info_reply_t ;
typedef int xcb_randr_get_output_info_cookie_t ;
struct TYPE_10__ {int output; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int const,TYPE_1__*) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int const) ;
 int * FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ) ;
 TYPE_5__* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 int * FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_13(void) {
    FUNC_0("Querying outputs using RandR ≤ 1.4\n");


    xcb_randr_get_screen_resources_current_cookie_t VAR_3;
    VAR_3 = FUNC_9(VAR_0, VAR_2);
    xcb_randr_get_output_primary_cookie_t VAR_4;
    VAR_4 = FUNC_7(VAR_0, VAR_2);

    if ((VAR_1 = FUNC_8(VAR_0, VAR_4, ((void*)0))) == ((void*)0))
        FUNC_1("Could not get RandR primary output\n");
    else
        FUNC_0("primary output is %08x\n", VAR_1->output);

    xcb_randr_get_screen_resources_current_reply_t *VAR_5 =
        FUNC_12(VAR_0, VAR_3, ((void*)0));
    if (VAR_5 == ((void*)0)) {
        FUNC_1("Could not query screen resources.\n");
        return;
    }



    const xcb_timestamp_t VAR_6 = VAR_5->config_timestamp;

    const int VAR_7 = FUNC_11(VAR_5);


    xcb_randr_output_t *VAR_8 = FUNC_10(VAR_5);


    xcb_randr_get_output_info_cookie_t VAR_9[VAR_7];
    for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
        VAR_9[VAR_10] = FUNC_5(VAR_0, VAR_8[VAR_10], VAR_6);


    for (int VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
        xcb_randr_get_output_info_reply_t *VAR_12;

        if ((VAR_12 = FUNC_6(VAR_0, VAR_9[VAR_11], ((void*)0))) == ((void*)0))
            continue;

        FUNC_4(VAR_0, VAR_8[VAR_11], VAR_12, VAR_6, VAR_5);
        FUNC_3(VAR_12);
    }

    FUNC_2(VAR_5);
}
