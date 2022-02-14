
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char*,int,size_t,int *) ;
 int FUNC_4 (int *,long,int ) ;
 long FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static char * FUNC_9(const char * VAR_1) {
    FILE *VAR_2 = FUNC_2(VAR_1, "r");
    size_t VAR_3 = 0;
    size_t VAR_4 = 0;
    long VAR_5;
    char *VAR_6;
    if (!VAR_2) {
        return ((void*)0);
    }
    FUNC_4(VAR_2, 0L, VAR_0);
    VAR_5 = FUNC_5(VAR_2);
    if (VAR_5 < 0) {
        FUNC_0(VAR_2);
        return ((void*)0);
    }
    VAR_3 = VAR_5;
    FUNC_8(VAR_2);
    VAR_6 = (char*)FUNC_7(sizeof(char) * (VAR_3 + 1));
    if (!VAR_6) {
        FUNC_0(VAR_2);
        return ((void*)0);
    }
    VAR_4 = FUNC_3(VAR_6, 1, VAR_3, VAR_2);
    if (VAR_4 == 0 || FUNC_1(VAR_2)) {
        FUNC_0(VAR_2);
        FUNC_6(VAR_6);
        return ((void*)0);
    }
    FUNC_0(VAR_2);
    VAR_6[VAR_4] = '\0';
    return VAR_6;
}
