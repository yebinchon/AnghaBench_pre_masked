
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regs_struct {int rsp; } ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int *,struct user_regs_struct*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static addr_t FUNC_3(int VAR_1, unsigned VAR_2) {
    struct user_regs_struct VAR_3;
    FUNC_2(FUNC_1(VAR_0, VAR_1, ((void*)0), &VAR_3), "ptrace get sp for aux");
    dword_t VAR_4 = (dword_t) VAR_3.rsp;

    VAR_4 += 4;

    while (FUNC_0(VAR_1, VAR_4) != 0)
        VAR_4 += 4;
    VAR_4 += 4;

    while (FUNC_0(VAR_1, VAR_4) != 0)
        VAR_4 += 4;
    VAR_4 += 4;

    dword_t VAR_5;
    while ((VAR_5 = FUNC_0(VAR_1, VAR_4)) != 0) {
        VAR_4 += 4;
        if (VAR_5 == VAR_2) {
            return VAR_4;
        }
        VAR_4 += 4;
    }
    return 0;
}
