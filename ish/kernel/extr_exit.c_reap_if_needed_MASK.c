
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
typedef int int_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task*,int ) ;
 scalar_t__ FUNC_2 (struct task*,int ,int ) ;
 int FUNC_3 (struct task*) ;

__attribute__((used)) static bool FUNC_4(struct task *VAR_1, int_t VAR_2, addr_t VAR_3, addr_t VAR_4) {
    FUNC_0(FUNC_3(VAR_1));
    if (VAR_2 & VAR_0 && FUNC_1(VAR_1, VAR_3))
        return 1;
    if (FUNC_2(VAR_1, VAR_3, VAR_4))
        return 1;
    return 0;
}
