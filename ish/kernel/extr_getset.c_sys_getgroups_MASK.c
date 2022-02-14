
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
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

int_t FUNC_1(dword_t VAR_3, addr_t VAR_4) {
    if (VAR_3 == 0)
        return VAR_2->ngroups;
    if (VAR_3 < VAR_2->ngroups)
        return VAR_1;
    if (FUNC_0(VAR_4, VAR_2->groups, VAR_3 * sizeof(uid_t_)))
        return VAR_0;
    return 0;
}
