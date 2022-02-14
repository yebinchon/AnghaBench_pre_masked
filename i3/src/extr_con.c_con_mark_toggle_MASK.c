
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mark_mode_t ;
typedef int Con ;


 int FUNC_0 (char*,char const*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *,char const*) ;

void FUNC_5(Con *VAR_0, const char *VAR_1, mark_mode_t VAR_2) {
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0("Toggling mark \"%s\" on con = %p.\n", VAR_1, VAR_0);

    if (FUNC_2(VAR_0, VAR_1)) {
        FUNC_4(VAR_0, VAR_1);
    } else {
        FUNC_3(VAR_0, VAR_1, VAR_2);
    }
}
