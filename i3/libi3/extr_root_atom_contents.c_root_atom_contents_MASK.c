
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_10__ {int root; } ;
typedef TYPE_1__ xcb_screen_t ;
struct TYPE_11__ {scalar_t__ bytes_after; scalar_t__ type; int atom; } ;
typedef TYPE_2__ xcb_intern_atom_reply_t ;
typedef int xcb_intern_atom_cookie_t ;
typedef TYPE_2__ xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
typedef int xcb_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char**,char*,unsigned int,...) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int,int ,int ,int ,int ,size_t) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,int ,int ,char const*) ;
 TYPE_2__* FUNC_13 (int *,int ,int *) ;

char *FUNC_14(const char *VAR_2, xcb_connection_t *VAR_3, int VAR_4) {
    xcb_intern_atom_cookie_t VAR_5;
    xcb_intern_atom_reply_t *VAR_6;
    char *VAR_7 = ((void*)0);
    size_t VAR_8 = 256;
    xcb_connection_t *VAR_9 = VAR_3;

    if (VAR_3 == ((void*)0) &&
        ((VAR_9 = FUNC_5(((void*)0), &VAR_4)) == ((void*)0) ||
         FUNC_6(VAR_9))) {
        return ((void*)0);
    }

    VAR_5 = FUNC_12(VAR_9, 0, FUNC_3(VAR_2), VAR_2);

    xcb_screen_t *VAR_10 = FUNC_4(VAR_9, VAR_4);
    xcb_window_t VAR_11 = VAR_10->root;

    VAR_6 = FUNC_13(VAR_9, VAR_5, ((void*)0));
    if (VAR_6 == ((void*)0)) {
        goto out_conn;
    }

    xcb_get_property_cookie_t VAR_12;
    xcb_get_property_reply_t *VAR_13;
    VAR_12 = FUNC_9(VAR_9, 0, VAR_11, VAR_6->atom,
                                             VAR_1, 0, VAR_8);
    VAR_13 = FUNC_8(VAR_9, VAR_12, ((void*)0));
    if (VAR_13 == ((void*)0)) {
        goto out_atom;
    }
    if (FUNC_11(VAR_13) > 0 && VAR_13->bytes_after > 0) {


        VAR_8 += FUNC_0(VAR_13->bytes_after / 4.0);

        FUNC_1(VAR_13);
        VAR_12 = FUNC_9(VAR_9, 0, VAR_11, VAR_6->atom,
                                                 VAR_1, 0, VAR_8);
        VAR_13 = FUNC_8(VAR_9, VAR_12, ((void*)0));
        if (VAR_13 == ((void*)0)) {
            goto out_atom;
        }
    }
    if (FUNC_11(VAR_13) == 0) {
        goto out;
    }
    if (VAR_13->type == VAR_0) {


        FUNC_2(&VAR_7, "%u", *((unsigned int *)FUNC_10(VAR_13)));
    } else {
        FUNC_2(&VAR_7, "%.*s", FUNC_11(VAR_13),
                  (char *)FUNC_10(VAR_13));
    }

out:
    FUNC_1(VAR_13);
out_atom:
    FUNC_1(VAR_6);
out_conn:
    if (VAR_3 == ((void*)0))
        FUNC_7(VAR_9);
    return VAR_7;
}
