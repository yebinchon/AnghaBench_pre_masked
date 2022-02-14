
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpci200_board {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* interface_regs; } ;
struct TYPE_3__ {int * control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpci200_board*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct tpci200_board *VAR_2,
          int VAR_3)
{
 FUNC_0(VAR_2,
   &VAR_2->info->interface_regs->control[VAR_3],
   VAR_0 | VAR_1);
}
