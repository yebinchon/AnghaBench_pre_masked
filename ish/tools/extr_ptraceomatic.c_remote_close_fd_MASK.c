
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regs_struct {long rip; int rax; int rbx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct user_regs_struct*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct user_regs_struct*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2, long VAR_3) {

    struct user_regs_struct VAR_4;
    FUNC_1(VAR_1, &VAR_4);
    struct user_regs_struct VAR_5 = VAR_4;
    VAR_5.rip = VAR_3;
    VAR_5.rax = 6;
    VAR_5.rbx = VAR_2;
    FUNC_3(VAR_1, &VAR_5);
    FUNC_4(VAR_1);
    FUNC_1(VAR_1, &VAR_5);
    if ((long) VAR_5.rax < 0) {
        VAR_0 = -VAR_5.rax;
        FUNC_2("remote close fd");
        FUNC_0(1);
    }
    FUNC_3(VAR_1, &VAR_5);
}
