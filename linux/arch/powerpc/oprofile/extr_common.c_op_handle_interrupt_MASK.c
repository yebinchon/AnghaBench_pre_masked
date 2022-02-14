
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* handle_interrupt ) (struct pt_regs*,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct pt_regs*,int ) ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_2)
{
 VAR_1->handle_interrupt(VAR_2, VAR_0);
}
