
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct siginfo_ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task*,int ,struct siginfo_) ;

__attribute__((used)) static void FUNC_1(struct task *VAR_2) {
    struct siginfo_ VAR_3 = {
        .code = VAR_1,
    };
    FUNC_0(VAR_2, VAR_0, VAR_3);
}
