
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int addr; } ;
struct pt_regs {TYPE_5__ psw; int int_code; } ;
struct arch_uprobe {int saved_int_code; int saved_per; } ;
struct TYPE_9__ {scalar_t__ eaba; int per; } ;
struct TYPE_8__ {TYPE_1__* utask; } ;
struct TYPE_7__ {int xol_vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pt_regs*,int ) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 () ;
 TYPE_4__ FUNC_2 (TYPE_5__) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(struct arch_uprobe *VAR_7, struct pt_regs *VAR_8)
{
 if (FUNC_2(VAR_8->psw).eaba == VAR_2)
  return -VAR_0;
 if (!FUNC_1() && FUNC_2(VAR_8->psw).eaba == VAR_3)
  return -VAR_0;
 FUNC_0(VAR_8, VAR_1);
 VAR_7->saved_per = FUNC_2(VAR_8->psw).per;
 VAR_7->saved_int_code = VAR_8->int_code;
 VAR_8->int_code = VAR_5;
 VAR_8->psw.addr = VAR_6->utask->xol_vaddr;
 FUNC_3(VAR_6, VAR_4);
 FUNC_4(VAR_6);
 return 0;
}
