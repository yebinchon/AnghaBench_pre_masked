
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bytes_after; int atom; } ;
typedef TYPE_1__ xcb_intern_atom_reply_t ;
typedef TYPE_1__ xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
struct xkb_rule_names {int options; int variant; int layout; int model; int rules; } ;


 int FUNC_0 (char*,int,int const,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (double) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (char**,char*,int const,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,int) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int,int ,int ,int ,int ,size_t) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ,int ,char*) ;
 TYPE_1__* FUNC_11 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_12(struct xkb_rule_names *VAR_3) {
    xcb_intern_atom_reply_t *VAR_4;
    size_t VAR_5 = 256;

    VAR_4 = FUNC_11(
        VAR_1, FUNC_10(VAR_1, 0, FUNC_4("_XKB_RULES_NAMES"), "_XKB_RULES_NAMES"), ((void*)0));
    if (VAR_4 == ((void*)0))
        return -1;

    xcb_get_property_cookie_t VAR_6;
    xcb_get_property_reply_t *VAR_7;
    VAR_6 = FUNC_7(VAR_1, 0, VAR_2, VAR_4->atom,
                                             VAR_0, 0, VAR_5);
    VAR_7 = FUNC_6(VAR_1, VAR_6, ((void*)0));
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_4);
        return -1;
    }
    if (FUNC_9(VAR_7) > 0 && VAR_7->bytes_after > 0) {


        VAR_5 += FUNC_1(VAR_7->bytes_after / 4.0);

        FUNC_2(VAR_7);
        VAR_6 = FUNC_7(VAR_1, 0, VAR_2, VAR_4->atom,
                                                 VAR_0, 0, VAR_5);
        VAR_7 = FUNC_6(VAR_1, VAR_6, ((void*)0));
        if (VAR_7 == ((void*)0)) {
            FUNC_2(VAR_4);
            return -1;
        }
    }
    if (FUNC_9(VAR_7) == 0) {
        FUNC_2(VAR_4);
        FUNC_2(VAR_7);
        return -1;
    }

    const char *VAR_8 = (const char *)FUNC_8(VAR_7);
    int VAR_9 = FUNC_9(VAR_7);
    for (int VAR_10 = 0; VAR_10 < 5 && VAR_9 > 0; VAR_10++) {
        const int VAR_11 = FUNC_5(VAR_8, VAR_9);
        switch (VAR_10) {
            case 0:
                FUNC_3((char **)&(VAR_3->rules), "%.*s", VAR_11, VAR_8);
                break;
            case 1:
                FUNC_3((char **)&(VAR_3->model), "%.*s", VAR_11, VAR_8);
                break;
            case 2:
                FUNC_3((char **)&(VAR_3->layout), "%.*s", VAR_11, VAR_8);
                break;
            case 3:
                FUNC_3((char **)&(VAR_3->variant), "%.*s", VAR_11, VAR_8);
                break;
            case 4:
                FUNC_3((char **)&(VAR_3->options), "%.*s", VAR_11, VAR_8);
                break;
        }
        FUNC_0("component %d of _XKB_RULES_NAMES is \"%.*s\"\n", VAR_10, VAR_11, VAR_8);
        VAR_8 += (VAR_11 + 1);
        VAR_9 -= (VAR_11 + 1);
    }

    FUNC_2(VAR_4);
    FUNC_2(VAR_7);
    return 0;
}
