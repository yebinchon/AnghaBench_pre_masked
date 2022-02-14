
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_6__ {int event_x; int event_y; } ;
typedef TYPE_1__ xcb_button_release_event_t ;
struct TYPE_7__ {char* action; scalar_t__ terminal; } ;
typedef TYPE_2__ button_t ;
struct TYPE_8__ {scalar_t__ x; scalar_t__ width; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 TYPE_5__ VAR_7 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 int FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (scalar_t__,int) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char**,char*,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(xcb_connection_t *VAR_8, xcb_button_release_event_t *VAR_9) {
    FUNC_10("button released on x = %d, y = %d\n",
           VAR_9->event_x, VAR_9->event_y);

    if (VAR_9->event_x >= VAR_7.x && VAR_9->event_x < VAR_7.x + VAR_7.width)
        FUNC_1(0);
    button_t *VAR_10 = FUNC_6(VAR_9->event_x, VAR_9->event_y);
    if (!VAR_10)
        return;
    char *VAR_11 = FUNC_8("nagbar-cmd");

    int VAR_12 = FUNC_9(VAR_11, VAR_3 | VAR_1 | VAR_2, VAR_4 | VAR_5);
    if (VAR_12 == -1) {
        FUNC_15("Could not create temporary script to store the nagbar command");
        return;
    }
    FILE *VAR_13 = FUNC_3(VAR_12, "w");
    if (VAR_13 == ((void*)0)) {
        FUNC_15("Could not fdopen() temporary script to store the nagbar command");
        return;
    }
    FUNC_4(VAR_13, "#!/bin/sh\nrm %s\n%s", VAR_11, VAR_10->action);

    FUNC_2(VAR_13);

    char *VAR_14;
    char *VAR_15 = FUNC_7(VAR_6);
    FUNC_11(&VAR_14, "%s.nagbar_cmd", VAR_11);
    if (FUNC_14(VAR_15, VAR_14) == -1) {
        FUNC_0(VAR_0, "Failed to symlink %s to %s", VAR_14, VAR_15);
    }

    char *VAR_16;
    if (VAR_10->terminal) {
        FUNC_11(&VAR_16, "i3-sensible-terminal -e %s", VAR_14);
    } else {
        VAR_16 = FUNC_12(VAR_14);
    }
    FUNC_10("argv0 = %s\n", VAR_6);
    FUNC_10("terminal_cmd = %s\n", VAR_16);

    FUNC_13(VAR_16);

    FUNC_5(VAR_14);
    FUNC_5(VAR_16);
    FUNC_5(VAR_11);
    FUNC_5(VAR_15);


}
