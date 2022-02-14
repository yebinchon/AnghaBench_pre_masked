
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int,int *,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,int*,int ) ;

__attribute__((used)) static inline int FUNC_6(int VAR_2) {
    FUNC_4(FUNC_3(VAR_0, VAR_2, ((void*)0), 0), "ptrace step");
    int VAR_3;
    FUNC_4(FUNC_5(VAR_2, &VAR_3, 0), "wait step");
    if (FUNC_0(VAR_3) && FUNC_1(VAR_3) != VAR_1) {
        int VAR_4 = FUNC_1(VAR_3);
        FUNC_2("child received signal %d\n", VAR_4);

        FUNC_4(FUNC_3(VAR_0, VAR_2, ((void*)0), VAR_4), "ptrace step");
        FUNC_4(FUNC_5(VAR_2, &VAR_3, 0), "wait step");
        return 1;
    }
    return 0;
}
