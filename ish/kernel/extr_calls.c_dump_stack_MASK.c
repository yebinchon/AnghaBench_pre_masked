
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dword_t ;
struct TYPE_3__ {scalar_t__ esp; int eip; int ebp; } ;
struct TYPE_4__ {TYPE_1__ cpu; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

void FUNC_2() {
    FUNC_0("stack at %x, base at %x, ip at %x\n", VAR_0->cpu.esp, VAR_0->cpu.ebp, VAR_0->cpu.eip);
    for (int VAR_1 = 0; VAR_1 < 64; VAR_1++) {
        dword_t VAR_2;
        if (FUNC_1(VAR_0->cpu.esp + (VAR_1 * 4), VAR_2))
            break;
        FUNC_0("%08x ", VAR_2);
        if (VAR_1 % 8 == 7)
            FUNC_0("\n");
    }
}
