
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_expose_event_t ;
typedef int xcb_connection_t ;
typedef int i3String ;
typedef int color_t ;
struct TYPE_4__ {scalar_t__ height; scalar_t__ width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,int,int,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_8, xcb_connection_t *VAR_9, xcb_expose_event_t *VAR_10) {
    FUNC_5("expose!\n");

    color_t VAR_11 = FUNC_0("#FF0000");
    color_t VAR_12 = FUNC_0("#FFFFFF");
    color_t VAR_13 = FUNC_0("#000000");

    int VAR_14 = VAR_0 + VAR_2;


    FUNC_1(&VAR_7, VAR_11, 0, 0, VAR_7.width, VAR_7.height);


    FUNC_1(&VAR_7, VAR_13, VAR_0, VAR_0, VAR_7.width - 2 * VAR_0, VAR_7.height - 2 * VAR_0);


    if (VAR_5 != ((void*)0)) {
        FUNC_2(VAR_5, &VAR_7, VAR_12, VAR_13, VAR_14, VAR_14, VAR_1 - VAR_14);
    }


    if (VAR_4 > 0) {
        i3String *VAR_15 = FUNC_4(VAR_3, VAR_4);
        FUNC_2(VAR_15, &VAR_7, VAR_12, VAR_13, VAR_14 + VAR_6, VAR_14, VAR_1 - VAR_14);
        FUNC_3(VAR_15);
    }

    FUNC_6(VAR_9);

    return 1;
}
