
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct robust_list_head_ {int dummy; } ;
typedef int int_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int robust_list; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int_t FUNC_1(addr_t VAR_2, dword_t VAR_3) {
    FUNC_0("set_robust_list(%#x, %d)", VAR_2, VAR_3);
    if (VAR_3 != sizeof(struct robust_list_head_))
        return VAR_0;
    VAR_1->robust_list = VAR_2;
    return 0;
}
