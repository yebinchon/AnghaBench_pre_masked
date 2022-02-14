
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*,long*,int) ;

__attribute__((used)) static int FUNC_3(void) {
    const char *VAR_0 = FUNC_1("_I3_RESTART_FD");
    if (VAR_0 == ((void*)0)) {
        return -1;
    }

    long int VAR_1 = -1;
    if (!FUNC_2(VAR_0, &VAR_1, 10)) {
        FUNC_0("Malformed _I3_RESTART_FD \"%s\"\n", VAR_0);
        return -1;
    }
    return VAR_1;
}
