
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_desc {unsigned int entry_number; int base_addr; } ;
struct TYPE_2__ {int tls_ptr; } ;
struct task {TYPE_1__ cpu; } ;
typedef int addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task*,int ,struct user_desc) ;
 scalar_t__ FUNC_1 (int ,struct user_desc) ;

int FUNC_2(struct task *VAR_1, addr_t VAR_2) {
    struct user_desc VAR_3;
    if (FUNC_0(VAR_1, VAR_2, VAR_3))
        return VAR_0;




    VAR_1->cpu.tls_ptr = VAR_3.base_addr;

    if (VAR_3.entry_number == (unsigned) -1) {
        VAR_3.entry_number = 0xc;
    }

    if (FUNC_1(VAR_2, VAR_3))
            return VAR_0;
    return 0;
}
