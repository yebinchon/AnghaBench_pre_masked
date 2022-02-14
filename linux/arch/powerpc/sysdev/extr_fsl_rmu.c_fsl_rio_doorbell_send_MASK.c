
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rio_mport {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dbell_regs; } ;
struct TYPE_3__ {int odmr; int oddatr; int oddpr; int odretcr; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct rio_mport *VAR_2,
    int VAR_3, u16 VAR_4, u16 VAR_5)
{
 unsigned long VAR_6;

 FUNC_1("fsl_doorbell_send: index %d destid %4.4x data %4.4x\n",
   VAR_3, VAR_4, VAR_5);

 FUNC_2(&VAR_1, VAR_6);




 FUNC_0(&VAR_0->dbell_regs->odmr, 0x00000000);
 FUNC_0(&VAR_0->dbell_regs->odretcr, 0x00000004);
 FUNC_0(&VAR_0->dbell_regs->oddpr, VAR_4 << 16);
 FUNC_0(&VAR_0->dbell_regs->oddatr, (VAR_3 << 20) | VAR_5);
 FUNC_0(&VAR_0->dbell_regs->odmr, 0x00000001);

 FUNC_3(&VAR_1, VAR_6);

 return 0;
}
