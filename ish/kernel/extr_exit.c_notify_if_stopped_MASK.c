
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {TYPE_1__* group; } ;
typedef scalar_t__ dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_2__ {scalar_t__ group_exit_code; int stopped; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct task *VAR_1, addr_t VAR_2) {

    if (!VAR_1->group->stopped || VAR_1->group->group_exit_code == 0)
        return 0;
    dword_t VAR_3 = VAR_1->group->group_exit_code;
    VAR_1->group->group_exit_code = 0;
    if (VAR_2 != 0)
        if (FUNC_0(VAR_2, VAR_3))
            return VAR_0;
    return 1;
}
