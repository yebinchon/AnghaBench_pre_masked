
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_ohci {int dummy; } ;
struct context {int running; int regs; TYPE_1__* last; struct fw_ohci* ohci; } ;
struct TYPE_2__ {int branch_address; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fw_ohci*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fw_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct context *VAR_1, u32 VAR_2)
{
 struct fw_ohci *VAR_3 = VAR_1->ohci;

 FUNC_5(VAR_3, FUNC_0(VAR_1->regs),
    FUNC_4(VAR_1->last->branch_address));
 FUNC_5(VAR_3, FUNC_1(VAR_1->regs), ~0);
 FUNC_5(VAR_3, FUNC_2(VAR_1->regs), VAR_0 | VAR_2);
 VAR_1->running = 1;
 FUNC_3(VAR_3);
}
