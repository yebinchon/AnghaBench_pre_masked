
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_0) {
    char *VAR_1 = VAR_0;
    char *VAR_2 = VAR_0;
    while (*VAR_1 != '\0') {
        if (*VAR_1 != '\n') {
            VAR_1++;
            continue;
        }


        if (FUNC_3(VAR_2, "bindcode", FUNC_2("bindcode")) == 0 ||
            FUNC_3(VAR_2, "force_focus_wrapping", FUNC_2("force_focus_wrapping")) == 0 ||
            FUNC_3(VAR_2, "# i3 config file (v4)", FUNC_2("# i3 config file (v4)")) == 0 ||
            FUNC_3(VAR_2, "workspace_layout", FUNC_2("workspace_layout")) == 0) {
            FUNC_0("deciding for version 4 due to this line: %.*s\n", (int)(VAR_1 - VAR_2), VAR_2);
            return 4;
        }


        if (FUNC_3(VAR_2, "bind", FUNC_2("bind")) == 0) {
            char *VAR_3 = FUNC_1(VAR_2, ' ');
            if (VAR_3 == ((void*)0))
                goto next;
            while ((*VAR_3 == ' ' || *VAR_3 == '\t') && *VAR_3 != '\0')
                VAR_3++;
            if (*VAR_3 == '\0')
                goto next;
            if ((VAR_3 = FUNC_1(VAR_3, ' ')) == ((void*)0))
                goto next;
            while ((*VAR_3 == ' ' || *VAR_3 == '\t') && *VAR_3 != '\0')
                VAR_3++;
            if (*VAR_3 == '\0')
                goto next;
            if (FUNC_3(VAR_3, "layout", FUNC_2("layout")) == 0 ||
                FUNC_3(VAR_3, "floating", FUNC_2("floating")) == 0 ||
                FUNC_3(VAR_3, "workspace", FUNC_2("workspace")) == 0 ||
                FUNC_3(VAR_3, "focus left", FUNC_2("focus left")) == 0 ||
                FUNC_3(VAR_3, "focus right", FUNC_2("focus right")) == 0 ||
                FUNC_3(VAR_3, "focus up", FUNC_2("focus up")) == 0 ||
                FUNC_3(VAR_3, "focus down", FUNC_2("focus down")) == 0 ||
                FUNC_3(VAR_3, "border normal", FUNC_2("border normal")) == 0 ||
                FUNC_3(VAR_3, "border 1pixel", FUNC_2("border 1pixel")) == 0 ||
                FUNC_3(VAR_3, "border pixel", FUNC_2("border pixel")) == 0 ||
                FUNC_3(VAR_3, "border borderless", FUNC_2("border borderless")) == 0 ||
                FUNC_3(VAR_3, "--no-startup-id", FUNC_2("--no-startup-id")) == 0 ||
                FUNC_3(VAR_3, "bar", FUNC_2("bar")) == 0) {
                FUNC_0("deciding for version 4 due to this line: %.*s\n", (int)(VAR_1 - VAR_2), VAR_2);
                return 4;
            }
        }

    next:

        VAR_1++;
        VAR_2 = VAR_1;
    }

    return 3;
}
