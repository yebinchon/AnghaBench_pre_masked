
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef int xcb_query_tree_reply_t ;
typedef int xcb_get_window_attributes_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ,int ) ;

void FUNC_8(xcb_window_t VAR_1) {
    xcb_query_tree_reply_t *VAR_2;
    int VAR_3, VAR_4;
    xcb_window_t *VAR_5;
    xcb_get_window_attributes_cookie_t *VAR_6;


    if ((VAR_2 = FUNC_7(VAR_0, FUNC_4(VAR_0, VAR_1), 0)) == ((void*)0))
        return;

    VAR_4 = FUNC_6(VAR_2);
    VAR_6 = FUNC_2(VAR_4 * sizeof(*VAR_6));


    VAR_5 = FUNC_5(VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
        VAR_6[VAR_3] = FUNC_3(VAR_0, VAR_5[VAR_3]);


    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
        FUNC_1(VAR_5[VAR_3], VAR_6[VAR_3], 1);

    FUNC_0(VAR_2);
    FUNC_0(VAR_6);
}
