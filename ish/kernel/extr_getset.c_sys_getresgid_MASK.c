
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int_t ;
typedef int addr_t ;
struct TYPE_2__ {int sgid; int egid; int gid; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

int_t FUNC_2(addr_t VAR_2, addr_t VAR_3, addr_t VAR_4) {
    FUNC_0("getresgid(%#x, %#x, %#x)", VAR_2, VAR_3, VAR_4);
    if (FUNC_1(VAR_2, VAR_1->gid))
        return VAR_0;
    if (FUNC_1(VAR_3, VAR_1->egid))
        return VAR_0;
    if (FUNC_1(VAR_4, VAR_1->sgid))
        return VAR_0;
    return 0;
}
