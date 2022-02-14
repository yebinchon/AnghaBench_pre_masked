
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t_ ;
typedef int int_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int ngroups; int groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

int_t FUNC_1(dword_t VAR_4, addr_t VAR_5) {
    if (VAR_4 > VAR_0)
        return VAR_2;
    if (FUNC_0(VAR_5, VAR_3->groups, VAR_4 * sizeof(uid_t_)))
        return VAR_1;
    VAR_3->ngroups = VAR_4;
    return 0;
}
