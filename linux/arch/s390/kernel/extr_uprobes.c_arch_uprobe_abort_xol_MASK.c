
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int addr; } ;
struct pt_regs {TYPE_1__ psw; int int_code; } ;
struct arch_uprobe {int saved_int_code; } ;
struct TYPE_7__ {int address; } ;
struct TYPE_8__ {TYPE_2__ per_event; } ;
struct TYPE_10__ {TYPE_4__* utask; TYPE_3__ thread; } ;
struct TYPE_9__ {int vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_5__* VAR_1 ;

void FUNC_1(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 FUNC_0(VAR_0);
 VAR_3->int_code = VAR_2->saved_int_code;
 VAR_3->psw.addr = VAR_1->utask->vaddr;
 VAR_1->thread.per_event.address = VAR_1->utask->vaddr;
}
