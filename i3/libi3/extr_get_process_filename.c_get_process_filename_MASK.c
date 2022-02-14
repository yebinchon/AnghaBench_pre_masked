
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct passwd {char* pw_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 struct passwd* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char**,char*,char const*,...) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,char*) ;

char *FUNC_11(const char *VAR_1) {


    static char *VAR_2 = ((void*)0);
    if (VAR_2 == ((void*)0)) {

        if ((VAR_2 = FUNC_1("XDG_RUNTIME_DIR"))) {
            char *VAR_3;
            FUNC_8(&VAR_3, "%s/i3", VAR_2);
            VAR_2 = VAR_3;
            struct stat VAR_4;
            if (FUNC_9(VAR_2, &VAR_4) != 0) {
                if (FUNC_5(VAR_2, 0700) == -1) {
                    FUNC_10("Could not mkdir(%s)", VAR_2);
                    FUNC_0(VAR_0, "Check permissions of $XDG_RUNTIME_DIR = '%s'",
                         FUNC_1("XDG_RUNTIME_DIR"));
                    FUNC_7("mkdir()");
                    return ((void*)0);
                }
            }
        } else {


            struct passwd *VAR_5 = FUNC_3(FUNC_4());
            const char *VAR_6 = VAR_5 ? VAR_5->pw_name : "unknown";
            FUNC_8(&VAR_2, "/tmp/i3-%s.XXXXXX", VAR_6);

            if (FUNC_6(VAR_2) == ((void*)0)) {
                FUNC_7("mkdtemp()");
                return ((void*)0);
            }
        }
    }
    char *VAR_7;
    FUNC_8(&VAR_7, "%s/%s.%d", VAR_2, VAR_1, FUNC_2());
    return VAR_7;
}
