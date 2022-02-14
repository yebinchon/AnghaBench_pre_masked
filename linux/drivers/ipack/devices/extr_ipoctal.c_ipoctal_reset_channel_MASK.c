
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipoctal_channel {TYPE_2__* regs; scalar_t__ rx_enable; } ;
struct TYPE_3__ {int cr; } ;
struct TYPE_4__ {TYPE_1__ w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct ipoctal_channel *VAR_6)
{
 FUNC_0(VAR_4 | VAR_5, &VAR_6->regs->w.cr);
 VAR_6->rx_enable = 0;
 FUNC_0(VAR_2, &VAR_6->regs->w.cr);
 FUNC_0(VAR_3, &VAR_6->regs->w.cr);
 FUNC_0(VAR_0, &VAR_6->regs->w.cr);
 FUNC_0(VAR_1, &VAR_6->regs->w.cr);
}
