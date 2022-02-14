
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pattern; } ;
struct TYPE_4__ {TYPE_1__ font; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char const*) ;
 int FUNC_2 (int *,char**) ;

void FUNC_3(const char *VAR_3, bool VAR_4) {
    char *VAR_5, *VAR_6;
    FUNC_1(&VAR_5, "i3-sensible-editor \"%s\" && i3-msg reload\n", VAR_3);
    FUNC_1(&VAR_6, "i3-sensible-pager \"%s\"\n", VAR_2);
    char *VAR_7[] = {
        ((void*)0),
        "-f",
        (VAR_0.font.pattern ? VAR_0.font.pattern : "fixed"),
        "-t",
        (VAR_4 ? "error" : "warning"),
        "-m",
        (VAR_4 ? "You have an error in your i3 config file!" : "Your config is outdated. Please fix the warnings to make sure everything works."),
        "-b",
        "edit config",
        VAR_5,
        (VAR_2 ? "-b" : ((void*)0)),
        (VAR_4 ? "show errors" : "show warnings"),
        VAR_6,
        ((void*)0)};

    FUNC_2(&VAR_1, VAR_7);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
}
