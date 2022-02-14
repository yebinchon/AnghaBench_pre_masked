
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttl_module {TYPE_1__* regs; } ;
struct TYPE_2__ {int portc; int portb; int porta; int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct ttl_module*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ttl_module *VAR_10)
{

 FUNC_0(0x0000, &VAR_10->regs->control);
 FUNC_0(0x0001, &VAR_10->regs->control);
 FUNC_0(0x0000, &VAR_10->regs->control);


 FUNC_1(VAR_10, VAR_5, 0x00ff);
 FUNC_1(VAR_10, VAR_7, 0x00ff);
 FUNC_1(VAR_10, VAR_9, 0x000f);


 FUNC_1(VAR_10, VAR_4, 0x0000);
 FUNC_1(VAR_10, VAR_6, 0x0000);
 FUNC_1(VAR_10, VAR_8, 0x0000);


 FUNC_0(0x0000, &VAR_10->regs->porta);
 FUNC_0(0x0000, &VAR_10->regs->portb);
 FUNC_0(0x0000, &VAR_10->regs->portc);


 FUNC_1(VAR_10, VAR_3, VAR_0 | VAR_1 | VAR_2);
}
